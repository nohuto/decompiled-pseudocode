/*
 * XREFs of BuildGetLogPageCommandForTelemetryLog @ 0x14001F064
 * Callers:
 *     NVMeGetDeviceTelemetryData @ 0x140022908 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x140022BBC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x140023260 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1400283E8 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1400284D8 (NVMeGetControllerInitiatedTelemetryLog.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1400065E0 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall BuildGetLogPageCommandForTelemetryLog(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        unsigned __int8 a9)
{
  char v9; // di
  __int64 result; // rax

  v9 = a3;
  BuildGetLogPageCommand(a1, a2, a3, a4, a5, -1, a7, 0);
  if ( a8 && v9 == 7 )
    *(_DWORD *)(a2 + 4136) = *(_DWORD *)(a2 + 4136) & 0xFFFFF0FF | 0x100;
  result = *(unsigned int *)(a2 + 4136);
  *(_DWORD *)(a2 + 4136) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(a9 << 15)) & 0x8000;
  return result;
}
