/*
 * XREFs of ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x140183E08
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     xxxActiveWindowTracking @ 0x140187404 (xxxActiveWindowTracking.c)
 *     xxxTurnOffCompositing @ 0x1401FFA68 (xxxTurnOffCompositing.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1402686C4 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402D8B48 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(_QWORD *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // r8

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v5 = 0LL;
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  *a1 = *(_QWORD *)(v5 + 456);
  *(_QWORD *)(v5 + 456) = a1;
  a1[1] = a2;
  return HMLockObject(a2);
}
