/*
 * XREFs of PnpGetDeviceInstanceCsConfigFlags @ 0x140A5C26C
 * Callers:
 *     PnpIsDeviceInstanceEnabled @ 0x140A5BF4C (PnpIsDeviceInstanceEnabled.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x140956510 (PnpUnicodeStringToWstrFree.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceInstanceCsConfigFlags(unsigned __int16 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rdx
  WCHAR *v6; // rbx
  unsigned __int64 v7; // rcx
  WCHAR *Pool2; // rax
  WCHAR *v9; // rax
  int v11; // esi
  NTSTATUS RegistryValue; // ebx
  PVOID v13; // rcx
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  P = 0LL;
  *a3 = 0;
  if ( !a1 )
    return 3221225485LL;
  v5 = a1[1];
  if ( (unsigned __int16)v5 < 2u || (v6 = (WCHAR *)*((_QWORD *)a1 + 1)) == 0LL )
  {
    v6 = 0LL;
    goto LABEL_19;
  }
  v7 = *a1;
  if ( (unsigned __int16)v7 > (unsigned __int16)v5 )
    return 3221225485LL;
  if ( (_WORD)v7 )
  {
    if ( *v6
      && ((_WORD)v7 != (_WORD)v5 || v6[((unsigned __int64)(unsigned int)v7 >> 1) - 1])
      && (v7 > v5 - 2 || v6[(v7 >> 1) - 1] && v6[v7 >> 1]) )
    {
      Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
      v6 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, *((const void **)a1 + 1), *a1);
        v6[(unsigned __int64)*a1 >> 1] = 0;
        goto LABEL_19;
      }
      return 3221225626LL;
    }
  }
  else if ( *v6 )
  {
    v9 = (WCHAR *)ExAllocatePool2(0x100uLL);
    v6 = v9;
    if ( !v9 )
      return 3221225626LL;
    *v9 = 0;
  }
LABEL_19:
  v11 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v6, 528, 0, 131097, 0, (__int64)&Handle, 0LL);
  PnpUnicodeStringToWstrFree(v6, (__int64)a1);
  if ( v11 < 0 )
    return (unsigned int)v11;
  RegistryValue = IopGetRegistryValue(Handle, L"CSConfigFlags", 0, &P);
  ZwClose(Handle);
  if ( RegistryValue >= 0 )
  {
    v13 = P;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
      *a3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)RegistryValue;
}
