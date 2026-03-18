/*
 * XREFs of ?MarkLastInputAsJournalling@CInputGlobals@@QEAAXXZ @ 0x1C01DC860
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::MarkLastInputAsJournalling(CInputGlobals *this)
{
  RIMLockExclusive((__int64)this);
  *((_BYTE *)this + 85) = 1;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
