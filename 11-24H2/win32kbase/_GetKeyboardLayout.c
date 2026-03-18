/*
 * XREFs of _GetKeyboardLayout @ 0x140023958
 * Callers:
 *     NtUserGetKeyboardLayout @ 0x140023920 (NtUserGetKeyboardLayout.c)
 *     GetActiveHKL @ 0x1400489F0 (GetActiveHKL.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x140023A28 (ApiSetEditionGetProcessWindowStation.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetKeyboardLayout(int a1)
{
  HANDLE v1; // rsi
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v3; // rax
  _QWORD **v5; // rdi
  _QWORD *i; // rbx

  v1 = (HANDLE)a1;
  if ( ApiSetEditionGetProcessWindowStation() )
  {
    if ( (_DWORD)v1 )
    {
      v5 = (_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 176LL);
      for ( i = *v5; i != v5; i = (_QWORD *)*i )
      {
        if ( PsGetThreadId((PETHREAD)*(i - 97)) == v1 )
        {
          v3 = *(i - 37);
          goto LABEL_6;
        }
      }
      return 0LL;
    }
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
      CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
    v3 = CurrentThreadNonPaged[60];
LABEL_6:
    if ( !v3 )
      return 0LL;
  }
  else
  {
    if ( !*(_QWORD *)(W32GetUserSessionState() + 14240) )
      return 0LL;
    v3 = *(_QWORD *)(W32GetUserSessionState() + 14240);
  }
  return *(_QWORD *)(v3 + 40);
}
