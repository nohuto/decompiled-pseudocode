/*
 * XREFs of ?WaitMaskIncludesUserInput@@YA_NI@Z @ 0x1401476F0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

bool __fastcall WaitMaskIncludesUserInput(__int64 a1, __int64 a2)
{
  _QWORD *CurrentThreadNonPaged; // rax

  if ( (a1 & 7) == 7 )
    return 1;
  if ( (a1 & 6) == 0 )
    return 0;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  return *(_QWORD *)(CurrentThreadNonPaged[59] + 112LL) != 0LL;
}
