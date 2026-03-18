/*
 * XREFs of ?IsSignaled@CEvent@DirectComposition@@QEAA_NXZ @ 0x14006E4AC
 * Callers:
 *     ?IsWaitingForChannelEvent@CApplicationChannel@DirectComposition@@QEAA_NXZ @ 0x14006DCF4 (-IsWaitingForChannelEvent@CApplicationChannel@DirectComposition@@QEAA_NXZ.c)
 *     ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x14006E45C (-ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CEvent::IsSignaled(DirectComposition::CEvent *this)
{
  void *v1; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v1 = (void *)*((_QWORD *)this + 1);
  Timeout.QuadPart = 0LL;
  return KeWaitForSingleObject(v1, UserRequest, 0, 0, &Timeout) == 0;
}
