/*
 * XREFs of ?OnTailButtonDoubleClickedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1801900A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::OnTailButtonDoubleClickedEventsRequiredChanged(
        PenEventsClientCustomProxy *this)
{
  unsigned __int8 v2; // al

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 96LL))((char *)this + 8);
  return PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 1, v2);
}
