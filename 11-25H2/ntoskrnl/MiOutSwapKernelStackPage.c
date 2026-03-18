/*
 * XREFs of MiOutSwapKernelStackPage @ 0x1403D9490
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiOutSwapWorkingSet @ 0x1403D958C (MiOutSwapWorkingSet.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiOutSwapKernelStackPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rsi
  struct _LIST_ENTRY **v7; // rax
  __int128 v8; // xmm0
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v11; // [rsp+58h] [rbp-A0h]

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    return 3221225643LL;
  if ( *(_QWORD *)(v3 + 8) <= *(_QWORD *)(v3 + 16) || !*(_DWORD *)(a1 + 72) )
    return 3221225993LL;
  v6 = a3 << 25 >> 16;
  memset_0(v10, 0, 0x98uLL);
  v10[0] = v3;
  v7 = MiVaToFlushVm(v6);
  v8 = *(_OWORD *)(a1 + 64);
  v10[2] = v7;
  v10[3] = a2;
  v11 = v8;
  MiOutSwapWorkingSet((_DWORD)v7, 0, v6, v6, (__int64)v10);
  result = 0LL;
  *(_OWORD *)(a1 + 64) = v11;
  return result;
}
