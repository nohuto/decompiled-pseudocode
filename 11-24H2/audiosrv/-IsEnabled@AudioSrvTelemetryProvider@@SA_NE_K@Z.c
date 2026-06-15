/*
 * XREFs of ?IsEnabled@AudioSrvTelemetryProvider@@SA_NE_K@Z @ 0x1801140E8
 * Callers:
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x1801138A8 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z @ 0x180113B48 (-Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

bool __fastcall AudioSrvTelemetryProvider::IsEnabled()
{
  wil::TraceLoggingProvider *v0; // rax

  v0 = AudioSrvTelemetryProvider::Instance();
  return wil::TraceLoggingProvider::IsEnabled_(v0, 4u, 2uLL);
}
