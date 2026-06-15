/*
 * XREFs of ?Provider@AudioSrvTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18009E87C
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x180067BD8 (-CaptureState@CVADServer@@QEAAXXZ.c)
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x180067F94 (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

const struct _tlgProvider_t *AudioSrvTelemetryProvider::Provider(void)
{
  return (const struct _tlgProvider_t *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
}
