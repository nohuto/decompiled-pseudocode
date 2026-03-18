/*
 * XREFs of ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1400D0998
 * Callers:
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1400D08EC (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x140150C48 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ @ 0x14019E3C8 (-FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x14019F25C (-UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 */

void __fastcall DelayZonePalmRejection::Uninitialize(__int64 a1)
{
  DelayZonePalmRejection **v1; // rbx
  DelayZoneTelemetry *v2; // rcx

  v1 = (DelayZonePalmRejection **)(W32GetUserSessionState(a1) + 17360);
  if ( *v1 )
  {
    DelayZonePalmRejection::UnlockTouchDeviceHandle(*v1);
    v2 = (DelayZoneTelemetry *)*((_QWORD *)*v1 + 15);
    if ( v2 )
    {
      DelayZoneTelemetry::ClearInputPanelRects(v2);
      GreDeleteFastMutex(*((char **)*v1 + 15));
      *((_QWORD *)*v1 + 15) = 0LL;
    }
    DelayZonePalmRejection::FreeDelayZoneList(*v1);
    GreDeleteFastMutex((char *)*v1);
    *v1 = 0LL;
  }
}
