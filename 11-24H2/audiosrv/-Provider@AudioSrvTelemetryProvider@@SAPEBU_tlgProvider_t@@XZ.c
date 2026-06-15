/*
 * XREFs of ?Provider@AudioSrvTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18009B16C
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x18005ADAC (-CaptureState@CVADServer@@QEAAXXZ.c)
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x18005B168 (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

const struct _tlgProvider_t *AudioSrvTelemetryProvider::Provider(void)
{
  return (const struct _tlgProvider_t *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
}
