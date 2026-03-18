/*
 * XREFs of ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1401E7F60
 * Callers:
 *     NtUserSetActiveWindow @ 0x1401E7ED0 (NtUserSetActiveWindow.c)
 *     xxxActivateEnabledPopup @ 0x14026BB74 (xxxActivateEnabledPopup.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401AF538 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

struct tagWND *__fastcall xxxSetActiveWindow(struct tagWND *a1, __int64 a2)
{
  char *v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // rdi
  __int64 v7; // rdx

  v3 = (char *)PtiCurrent((__int64)a1, a2) + 472;
  if ( a1 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) != *(_QWORD *)v3 )
    return 0LL;
  v4 = *(_QWORD **)(*(_QWORD *)v3 + 128LL);
  v5 = v4 ? *v4 : 0LL;
  if ( !a1 )
    return 0LL;
  xxxActivateWindowWithOptions((__int64)a1, 0LL, 0, 1, 0);
  LOBYTE(v7) = 1;
  return (struct tagWND *)HMValidateHandleNoSecure(v5, v7);
}
