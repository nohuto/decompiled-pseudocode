/*
 * XREFs of GetAudioSrvResource @ 0x180110C64
 * Callers:
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180110388 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall GetAudioSrvResource(__int64 a1, WCHAR *a2)
{
  HMODULE ModuleHandleW; // rax

  *a2 = 0;
  ModuleHandleW = GetModuleHandleW(L"AudioSrv.dll");
  if ( ModuleHandleW )
    LOBYTE(ModuleHandleW) = LoadStringW(ModuleHandleW, 0x1F4u, a2, 260) > 0;
  return (char)ModuleHandleW;
}
