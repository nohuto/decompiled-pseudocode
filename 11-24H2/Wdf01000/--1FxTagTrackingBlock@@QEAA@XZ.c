/*
 * XREFs of ??1FxTagTrackingBlock@@QEAA@XZ @ 0x140096FA0
 * Callers:
 *     ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1400977E0 (--_GFxTagTrackingBlock@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 */

void __fastcall FxTagTrackingBlock::~FxTagTrackingBlock(FxTagTrackingBlock *this)
{
  FxTagTrackingStackFrames *StackFrames; // rcx

  StackFrames = this->StackFrames;
  if ( StackFrames )
  {
    FxStump::operator delete(StackFrames);
    this->StackFrames = 0LL;
  }
}
