/*
 * XREFs of ??1FxTagTrackingBlock@@QEAA@XZ @ 0x140096F60
 * Callers:
 *     ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1400977A0 (--_GFxTagTrackingBlock@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
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
