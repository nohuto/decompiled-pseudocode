/*
 * XREFs of ?IsWaitingForChannelEvent@CApplicationChannel@DirectComposition@@QEAA_NXZ @ 0x14006DCF4
 * Callers:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z @ 0x1400DCB0C (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z.c)
 * Callees:
 *     ?IsSignaled@CEvent@DirectComposition@@QEAA_NXZ @ 0x14006E4AC (-IsSignaled@CEvent@DirectComposition@@QEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::IsWaitingForChannelEvent(
        DirectComposition::CApplicationChannel *this)
{
  if ( *((_BYTE *)this + 267) && DirectComposition::CEvent::IsSignaled(*((DirectComposition::CEvent **)this + 29)) )
  {
    KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 29) + 8LL));
    *((_BYTE *)this + 267) = 0;
  }
  return *((_BYTE *)this + 267);
}
