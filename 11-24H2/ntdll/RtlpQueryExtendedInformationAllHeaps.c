/*
 * XREFs of RtlpQueryExtendedInformationAllHeaps @ 0x18002BA78
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationAllHeaps(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(_DWORD *, __int64); // rax
  _DWORD v7[2]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v8; // [rsp+28h] [rbp-71h]
  __int128 v9; // [rsp+30h] [rbp-69h]
  int v10; // [rsp+40h] [rbp-59h]
  __int128 v11; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v12; // [rsp+E0h] [rbp+47h]

  v7[1] = 0;
  memset_thunk_772440563353939046(v7, 0, 0xACuLL);
  v12 = 0LL;
  v2 = *(_DWORD *)a1;
  v11 = 0LL;
  if ( v2 == 0x80000000 || (unsigned int)(v2 - 1) <= 4 )
  {
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpLockUlockAllHeapsCallback, 1LL, 1);
    if ( *(_DWORD *)a1 == 0x80000000 )
      goto LABEL_3;
    v3 = RtlpEnumProcessHeaps(
           (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpHeapQueryTotalReserveSize,
           (__int64)&v11,
           3);
    if ( v3 >= 0 )
    {
      memset_thunk_772440563353939046(v7, 0, 0xB0uLL);
      v5 = *(_QWORD *)(a1 + 16);
      v10 = v12;
      v9 = v11;
      v6 = *(__int64 (__fastcall **)(_DWORD *, __int64))(a1 + 8);
      v7[0] = 1;
      v8 = 48LL;
      v3 = v6(v7, v5);
      if ( v3 >= 0 && *(_DWORD *)a1 >= 2u )
LABEL_3:
        v3 = RtlpEnumProcessHeaps(
               (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpQueryExtendedInformationHeap,
               a1,
               3);
    }
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpLockUlockAllHeapsCallback, 0LL, 1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
