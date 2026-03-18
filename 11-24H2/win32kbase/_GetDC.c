/*
 * XREFs of _GetDC @ 0x1400997F0
 * Callers:
 *     NtUserGetDC @ 0x14016C9E0 (NtUserGetDC.c)
 * Callees:
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetDC(__int64 a1)
{
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( a1 )
  {
    v3 = 0x10000LL;
    return GetDCEx(a1, 0LL, v3);
  }
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(0LL);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  v2 = CurrentThreadNonPaged[62];
  if ( v2 )
  {
    v3 = 3LL;
    a1 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 24LL);
    return GetDCEx(a1, 0LL, v3);
  }
  return 0LL;
}
