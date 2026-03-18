/*
 * XREFs of MNSetupAnimationDC @ 0x1401CDE94
 * Callers:
 *     MNAllocMenuState @ 0x14009A738 (MNAllocMenuState.c)
 *     FinalUserInit @ 0x1401CD2B4 (FinalUserInit.c)
 * Callees:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 DpiMetricsForCurrentThread; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  result = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 64LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v6, v5);
    GreSelectFont(*(HDC *)(a1 + 136), *(HFONT *)(DpiMetricsForCurrentThread + 8));
    GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 2147483666LL, 0LL, 0LL);
    return 1LL;
  }
  return result;
}
