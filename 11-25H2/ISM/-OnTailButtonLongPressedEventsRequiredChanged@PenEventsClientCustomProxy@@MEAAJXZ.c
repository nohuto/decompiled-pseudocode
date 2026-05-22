/*
 * XREFs of ?OnTailButtonLongPressedEventsRequiredChanged@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180190110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PenEventsClientCustomProxy::OnTailButtonLongPressedEventsRequiredChanged(
        PenEventsClientCustomProxy *this)
{
  unsigned __int8 v2; // al

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 104LL))((char *)this + 8);
  return PenEventsClientCustomProxy::NotifyHotkeyRegistrationChanged((__int64)this, 2, v2);
}
