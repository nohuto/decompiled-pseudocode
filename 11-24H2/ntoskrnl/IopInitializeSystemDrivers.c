/*
 * XREFs of IopInitializeSystemDrivers @ 0x140C64B58
 * Callers:
 *     IoInitSystem @ 0x140C1C9C8 (IoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTrace @ 0x1402F0A44 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x1409BA838 (IopReferenceDriverObjectByName.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     ExIsManufacturingModeEnabled @ 0x140AA91C0 (ExIsManufacturingModeEnabled.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     InbvIndicateProgress @ 0x140C1C2E0 (InbvIndicateProgress.c)
 *     PipFreeGroupTree @ 0x140C227E4 (PipFreeGroupTree.c)
 *     PipLookupGroupName @ 0x140C23398 (PipLookupGroupName.c)
 *     PnpWaitForDevicesToStart @ 0x140C24750 (PnpWaitForDevicesToStart.c)
 *     CmGetSystemDriverList @ 0x140C64DD4 (CmGetSystemDriverList.c)
 *     PipCheckDependencies @ 0x140C69E6C (PipCheckDependencies.c)
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
  __int64 v8; // rdi
  int v9; // eax
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  UNICODE_STRING v14; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-10h] BYREF
  int v17; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF

  v17 = 0;
  Handle = 0LL;
  P = 0LL;
  String1 = 0LL;
  v14 = 0LL;
  UnicodeString = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_SystemStart_Start, 0, 0LL);
  IsManufacturingModeEnabled = ExIsManufacturingModeEnabled();
  SystemDriverList = (void **)CmGetSystemDriverList((unsigned __int64)Data & -(__int64)(IsManufacturingModeEnabled != 0));
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
          *(_DWORD *)&v14.Length = 655368;
          v14.Buffer = L"Enum";
          if ( IopOpenRegistryKeyEx(&Handle, *v2, &v14, 0x20019u) < 0 )
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
              if ( (int)IopLoadDriver(v10, 1, 0, &v17) >= 0 && v8 )
                ++*(_DWORD *)(v8 + 28);
            }
            else
            {
              ZwClose(v10);
            }
            InbvIndicateProgress(v12, v11);
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
