/*
 * XREFs of NVMeGetControllerInitiatedTelemetry @ 0x1400281F0
 * Callers:
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1400283E8 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1400284D8 (NVMeGetControllerInitiatedTelemetryLog.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetry(__int64 a1)
{
  unsigned int DmaBuffer; // ebx
  __int64 v4; // r9
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+10h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  if ( *(_BYTE *)(a1 + 20) )
    return 3238002697LL;
  DmaBuffer = NVMeAllocateDmaBuffer(a1, 0x200u);
  if ( DmaBuffer )
    goto LABEL_12;
  if ( v8 )
  {
    DmaBuffer = NVMeGetControllerInitiatedTelemetryHeader(a1, v8, &v9);
    if ( DmaBuffer )
      goto LABEL_12;
    v5 = v8;
    if ( v8 )
    {
      v6 = *(unsigned __int16 *)(v8 + 12);
      if ( !(_WORD)v6 )
      {
        DmaBuffer = -1056964599;
        goto LABEL_13;
      }
      DmaBuffer = NVMeGetControllerInitiatedTelemetryLog(a1, (unsigned int)((v6 + 1) << 9));
      if ( !DmaBuffer )
      {
        v5 = v8;
        if ( *(_BYTE *)(v8 + 383) != *(_BYTE *)(*(_QWORD *)(a1 + 3976) + 383LL) )
          DmaBuffer = -1056964607;
        goto LABEL_13;
      }
LABEL_12:
      v5 = v8;
LABEL_13:
      if ( v5 )
        NVMeFreeDmaBuffer(a1, 512LL, &v8, v9);
    }
  }
  if ( DmaBuffer )
  {
    v7 = *(_QWORD *)(a1 + 3976);
    if ( v7 )
      StorPortExtendedFunction(1LL, a1, v7, v4);
    *(_OWORD *)(a1 + 3976) = 0LL;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
  }
  return DmaBuffer;
}
