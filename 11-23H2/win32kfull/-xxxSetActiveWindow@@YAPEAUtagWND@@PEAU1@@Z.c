/*
 * XREFs of ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0091324
 * Callers:
 *     NtUserSetActiveWindow @ 0x1C0091280 (NtUserSetActiveWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C0222368 (xxxActivateEnabledPopup.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002D8F8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall xxxSetActiveWindow(struct tagWND *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rbx
  __int64 v4; // rdx

  if ( a1 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != *(_QWORD *)(gptiCurrent + 432LL) )
    return 0LL;
  v1 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  v2 = v1 ? *v1 : 0LL;
  if ( !a1 )
    return 0LL;
  xxxActivateWindowWithOptions(a1, 0, 0LL, 1);
  LOBYTE(v4) = 1;
  return (struct tagWND *)HMValidateHandleNoSecure(v2, v4);
}
