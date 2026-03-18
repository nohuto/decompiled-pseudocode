/*
 * XREFs of BuildGetLogPageCommand @ 0x1400065E0
 * Callers:
 *     NVMeGetCommandEffectsLog @ 0x14000B4B0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x14000D0E0 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x14000D260 (NVMeGetSupportedLogPagesLog.c)
 *     QueryProtocolInfoCompletion @ 0x1400111F0 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoLogPageData @ 0x140011650 (QueryProtocolInfoLogPageData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140012380 (NVMeAsyncEventRequestCompletion.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x14001F064 (BuildGetLogPageCommandForTelemetryLog.c)
 *     IoctlQueryEnduranceInformation @ 0x140020DA0 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1400211FC (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x140021C84 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x140021E18 (LogSenseTemperature.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1400236B0 (NVMeGetSanitizeLogWorkItem.c)
 *     ProtocolCommandCompletion @ 0x140025490 (ProtocolCommandCompletion.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x14002B0D8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x140006710 (SetPrpFromBuffer.c)
 */

__int64 __fastcall BuildGetLogPageCommand(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned __int16 a8)
{
  unsigned __int64 v8; // rsi
  __int64 v12; // rbp
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edi
  __int64 result; // rax
  int v17; // edx

  v8 = a4;
  v12 = *(_QWORD *)(a1 + 1560);
  if ( (unsigned __int8)a3 <= 9u && (v13 = 954, _bittest(&v13, a3))
    || (unsigned __int8)(a3 + 0x80) <= 1u
    || (unsigned __int8)(a3 + 64) <= 9u && (v17 = 823, _bittest(&v17, a3 + 64)) )
  {
    a6 = -1;
  }
  *(_DWORD *)(a2 + 4100) = a6;
  *(_BYTE *)(a2 + 4136) = a3;
  v14 = *(_DWORD *)(a2 + 4136) & 0xFFFF7FFF;
  v15 = a4 >> 2;
  *(_BYTE *)(a2 + 4096) = 2;
  *(_DWORD *)(a2 + 4136) = v14 ^ (v14 ^ (((a4 >> 2) - 1) << 16)) & 0xFFF0000;
  SetPrpFromBuffer(a1, a2, a5, a4);
  result = a8;
  *(_WORD *)(a2 + 4142) = a8;
  if ( (*(_BYTE *)(v12 + 261) & 4) != 0 )
  {
    *(_WORD *)(a2 + 4138) = v15 - 1;
    *(_WORD *)(a2 + 4140) = ((unsigned int)(v8 >> 2) - 1) >> 16;
    result = (unsigned int)a7 & 0xFFFFFFFC;
    *(_DWORD *)(a2 + 4148) = HIDWORD(a7);
    *(_DWORD *)(a2 + 4144) = result;
  }
  return result;
}
