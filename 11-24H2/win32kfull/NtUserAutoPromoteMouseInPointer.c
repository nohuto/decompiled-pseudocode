/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x14009B3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     IsMiPEnabledForThread @ 0x14009B4E8 (IsMiPEnabledForThread.c)
 *     SetMiPPromotion @ 0x14009B518 (SetMiPPromotion.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // rcx
  __int64 v8; // rbx

  EnterCrit(0LL, 0LL);
  v4 = PtiCurrent(v3, v2);
  if ( (unsigned int)IsMiPEnabledForThread(v4) && (v7 = *(_DWORD **)(v5 + 1512)) != 0LL && (v8 = 1LL, (*v7 & 1) != 0) )
  {
    SetMiPPromotion(v6, a1);
  }
  else
  {
    UserSetLastError(5);
    v8 = 0LL;
  }
  UserSessionSwitchLeaveCrit();
  return v8;
}
