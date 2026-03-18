/*
 * XREFs of IopBuildGlobalSymbolicLinkString @ 0x1409690E0
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     PnpUnicodeStringToWstrFree @ 0x140956510 (PnpUnicodeStringToWstrFree.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x14096A93C (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     IopAllocateUnicodeString @ 0x14096AEDC (IopAllocateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopBuildGlobalSymbolicLinkString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  void *v4; // rbp
  void *v5; // rdi
  __int64 v6; // r8
  _WORD *v7; // rdx
  unsigned __int64 v8; // rcx
  void *Pool2; // rax
  void *v10; // rbx
  __int64 v11; // rcx
  NTSTATUS DeviceInterfaceSymbolicLinkName; // ebx
  UNICODE_STRING *v13; // rcx
  __int64 v14; // rcx
  _WORD *v16; // rax
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  if ( !a1 )
    goto LABEL_35;
  v6 = a1[1];
  if ( (unsigned __int16)v6 < 2u )
    goto LABEL_12;
  v7 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v7 )
    goto LABEL_12;
  v8 = *a1;
  if ( (unsigned __int16)v8 > (unsigned __int16)v6 )
  {
LABEL_35:
    DeviceInterfaceSymbolicLinkName = -1073741811;
    goto LABEL_23;
  }
  if ( (_WORD)v8 )
  {
    if ( !*v7
      || (_WORD)v8 == (_WORD)v6 && !v7[((unsigned __int64)(unsigned int)v8 >> 1) - 1]
      || v8 <= v6 - 2 && (!v7[(v8 >> 1) - 1] || !v7[v8 >> 1]) )
    {
      goto LABEL_29;
    }
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v10 = Pool2;
    if ( !Pool2 )
      goto LABEL_22;
    memmove(Pool2, *((const void **)a1 + 1), *a1);
    v5 = v10;
    *((_WORD *)v10 + ((unsigned __int64)*a1 >> 1)) = 0;
  }
  else
  {
    if ( !*v7 )
    {
LABEL_29:
      v5 = v7;
      goto LABEL_12;
    }
    v16 = (_WORD *)ExAllocatePool2(0x100uLL);
    if ( !v16 )
      goto LABEL_22;
    *v16 = 0;
    v5 = v16;
  }
LABEL_12:
  v17 = 512;
  v4 = (void *)ExAllocatePool2(0x100uLL);
  if ( !v4 )
    goto LABEL_22;
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v11, v5, v4, 512LL, &v17);
  if ( DeviceInterfaceSymbolicLinkName != -1073741789 )
    goto LABEL_14;
  ExFreePoolWithTag(v4, 0);
  v4 = (void *)ExAllocatePool2(0x100uLL);
  if ( !v4 )
  {
LABEL_22:
    DeviceInterfaceSymbolicLinkName = -1073741670;
    goto LABEL_23;
  }
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v14, v5, v4, v17, &v17);
LABEL_14:
  if ( DeviceInterfaceSymbolicLinkName < 0 )
  {
    if ( DeviceInterfaceSymbolicLinkName != -1073741773 )
      goto LABEL_23;
    goto LABEL_35;
  }
  if ( 2 * v17 + 20 > 0xFFFF )
  {
    DeviceInterfaceSymbolicLinkName = -1073741675;
  }
  else
  {
    DeviceInterfaceSymbolicLinkName = IopAllocateUnicodeString(a2);
    if ( DeviceInterfaceSymbolicLinkName < 0 )
      goto LABEL_23;
    DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, L"\\GLOBAL??\\");
    v13 = a2;
    if ( DeviceInterfaceSymbolicLinkName >= 0 )
    {
      DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, (PCWSTR)v4);
      if ( DeviceInterfaceSymbolicLinkName >= 0 )
        goto LABEL_23;
      v13 = a2;
    }
    RtlFreeAnsiString(v13);
  }
LABEL_23:
  PnpUnicodeStringToWstrFree(v5, (__int64)a1);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)DeviceInterfaceSymbolicLinkName;
}
