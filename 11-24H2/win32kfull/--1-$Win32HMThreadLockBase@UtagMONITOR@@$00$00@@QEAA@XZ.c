/*
 * XREFs of ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401AA454
 * Callers:
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x140280D7C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     xxxDDETrackWindowDying @ 0x1402B10D4 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1402B1314 (xxxFreeDdeConv.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402D8B48 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(
        _QWORD *BugCheckParameter3,
        __int64 a2)
{
  struct tagTHREADINFO *v3; // rax

  if ( *BugCheckParameter3 != -1LL )
  {
    v3 = PtiCurrent((__int64)BugCheckParameter3, a2);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v3, BugCheckParameter3);
  }
}
