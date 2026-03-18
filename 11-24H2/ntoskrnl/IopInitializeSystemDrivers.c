/*
 * XREFs of IopInitializeSystemDrivers @ 0x140C629DC
 * Callers:
 *     IoInitSystem @ 0x140C1A988 (IoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTrace @ 0x14043B7C4 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x14046C968 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     IopReferenceDriverObjectByName @ 0x1409C711C (IopReferenceDriverObjectByName.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409CA314 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 *     ExIsManufacturingModeEnabled @ 0x140AAE140 (ExIsManufacturingModeEnabled.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     InbvIndicateProgress @ 0x140C1A2A0 (InbvIndicateProgress.c)
 *     PipFreeGroupTree @ 0x140C207A4 (PipFreeGroupTree.c)
 *     PipLookupGroupName @ 0x140C21358 (PipLookupGroupName.c)
 *     PnpWaitForDevicesToStart @ 0x140C22720 (PnpWaitForDevicesToStart.c)
 *     CmGetSystemDriverList @ 0x140C62C58 (CmGetSystemDriverList.c)
 *     PipCheckDependencies @ 0x140C67CF0 (PipCheckDependencies.c)
 */

__int64 IopInitializeSystemDrivers()
{
  char IsManufacturingModeEnabled; // al
  void **SystemDriverList; // rax
  void **v2; // rbx
  void **v3; // r14
  void *v4; // rax
  PVOID v5; // rdi
  int v6; // edi
  PVOID v7; // rsi
  ULONG_PTR v8; // rdi
  int v9; // eax
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  UNICODE_STRING v16; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF

  v19 = 0;
  Handle = 0LL;
  P = 0LL;
  String1 = 0LL;
  v16 = 0LL;
  UnicodeString = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_SystemStart_Start, 0, 0LL);
  IsManufacturingModeEnabled = ExIsManufacturingModeEnabled();
  SystemDriverList = (void **)CmGetSystemDriverList((unsigned __int64)qword_140EFEB10 & -(__int64)(IsManufacturingModeEnabled != 0));
  v2 = SystemDriverList;
  if ( SystemDriverList )
  {
    v3 = SystemDriverList;
    v4 = *SystemDriverList;
    if ( v4 )
    {
      do
      {
        if ( (int)IopGetDriverNameFromKeyNode(v4, &UnicodeString) >= 0
          && (v5 = IopReferenceDriverObjectByName(&UnicodeString), RtlFreeAnsiString(&UnicodeString), v5) )
        {
          ObfDereferenceObjectWithTag(v5, 0x746C6644u);
        }
        else
        {
          *(_DWORD *)&v16.Length = 655368;
          v16.Buffer = L"Enum";
          if ( IopOpenRegistryKeyEx(&Handle, *v2, &v16, 0x20019u) < 0 )
            goto LABEL_13;
          v6 = 0;
          if ( IopGetRegistryValue(Handle, L"INITSTARTFAILED", 0, &P) >= 0 )
          {
            if ( *((_DWORD *)P + 3) == 4 )
              v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
          ZwClose(Handle);
          if ( !v6 )
          {
LABEL_13:
            if ( IopGetRegistryValue(*v2, L"Group", 0, &P) < 0 )
            {
              v8 = 0LL;
            }
            else
            {
              v7 = P;
              if ( *((_DWORD *)P + 3) )
              {
                String1.Length = *((_WORD *)P + 6);
                String1.MaximumLength = String1.Length;
                String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
                v8 = PipLookupGroupName((const void **)&String1, 1);
              }
              else
              {
                v8 = 0LL;
              }
              ExFreePoolWithTag(v7, 0);
            }
            v9 = PipCheckDependencies(*v2);
            v10 = *v2;
            if ( v9 )
            {
              if ( (int)IopLoadDriver(v10, 1, 0, &v19) >= 0 && v8 )
                ++*(_DWORD *)(v8 + 28);
            }
            else
            {
              ZwClose(v10);
            }
            InbvIndicateProgress(v12, v11, v13, v14);
            goto LABEL_25;
          }
        }
        ZwClose(*v2);
LABEL_25:
        v4 = *++v2;
      }
      while ( *v2 );
    }
    ExFreePoolWithTag(v3, 0);
  }
  PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 0x11u, 0, 0LL, 0LL, 0LL, 0LL);
  if ( !PnpBootOptions )
    PnpWaitForDevicesToStart();
  PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 0x12u, 0, 0LL, 0LL, 0LL, 0LL);
  if ( IopGroupListHead )
    PipFreeGroupTree((_QWORD *)IopGroupListHead);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStart_Stop, 0, 0LL);
  return 0LL;
}
