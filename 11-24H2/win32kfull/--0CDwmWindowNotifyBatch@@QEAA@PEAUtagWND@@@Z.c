/*
 * XREFs of ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140088668
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402CC99C (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CCFF0 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CDwmNotifyBatch@@IEAA@XZ @ 0x1400887B8 (--0CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z @ 0x1402D1B38 (-IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z.c)
 */

CDwmWindowNotifyBatch *__fastcall CDwmWindowNotifyBatch::CDwmWindowNotifyBatch(
        CDwmWindowNotifyBatch *this,
        struct tagWND *a2)
{
  CDwmNotifyBatch *v4; // rcx
  bool v5; // zf
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax

  CDwmNotifyBatch::CDwmNotifyBatch(this);
  v5 = *(_BYTE *)this == 0;
  *((_QWORD *)this + 4) = *(_QWORD *)a2;
  if ( !v5 && CDwmNotifyBatch::IncrementCounter(v4, a2) )
  {
    v9 = PtiCurrent(v8, v7);
    *((_QWORD *)this + 1) = *((_QWORD *)v9 + 48);
    *((_QWORD *)v9 + 48) = (char *)this + 8;
    *((_QWORD *)this + 3) = lambda_d8af0bc767968272ab227b7dacb99926_::_lambda_invoker_cdecl_;
    *((_QWORD *)this + 2) = this;
  }
  return this;
}
