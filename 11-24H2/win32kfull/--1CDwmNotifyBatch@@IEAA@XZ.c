/*
 * XREFs of ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401A51F8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ??1CDwmWindowNotifyBatch@@QEAA@XZ @ 0x1401A51E0 (--1CDwmWindowNotifyBatch@@QEAA@XZ.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402CC99C (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CCFF0 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 */

void __fastcall CDwmNotifyBatch::~CDwmNotifyBatch(CDwmNotifyBatch *this, __int64 a2)
{
  if ( *(_BYTE *)this )
  {
    if ( *((_QWORD *)this + 3) )
      PopAndFreeW32ThreadLock((__int64)this + 8, a2);
  }
}
