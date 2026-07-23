/*
 * XREFs of HalpWdatProcessWdrtInternalData @ 0x14055D570
 * Callers:
 *     HalpWdatDiscover @ 0x14055CF58 (HalpWdatDiscover.c)
 * Callees:
 *     WdHwCreateHardwareRegister @ 0x140569DC8 (WdHwCreateHardwareRegister.c)
 *     WdHwDestroyHardwareRegister @ 0x140569F5C (WdHwDestroyHardwareRegister.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpWdatProcessWdrtInternalData(__int64 a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  unsigned int v5; // eax
  int v7; // ecx
  int v8; // ecx
  __int64 result; // rax
  LARGE_INTEGER v10; // rcx
  __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v14 = 0LL;
  v5 = *(unsigned __int16 *)(a1 + 68);
  a2[4] = v5;
  v12 = 0LL;
  v13 = 0LL;
  if ( v5 < 0x1FF )
    a2[4] = 511;
  a2[5] = 1;
  v7 = *(unsigned __int8 *)(a1 + 70);
  if ( *(_BYTE *)(a1 + 70) )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return 3221225485LL;
      a2[6] = 10;
    }
    else
    {
      a2[6] = 100;
    }
  }
  else
  {
    a2[6] = 1000;
  }
  v10 = *(LARGE_INTEGER *)(a1 + 40);
  *a3 = 1072;
  result = WdHwCreateHardwareRegister(v10);
  if ( (int)result >= 0 )
  {
    guard_dispatch_icall_no_overrides(v13, v11);
    WdHwDestroyHardwareRegister(&v12);
    result = 0LL;
    *a4 = 1;
  }
  else
  {
    *a4 = 0;
  }
  return result;
}
