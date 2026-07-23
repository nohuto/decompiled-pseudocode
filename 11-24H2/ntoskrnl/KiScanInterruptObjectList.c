/*
 * XREFs of KiScanInterruptObjectList @ 0x1406ADB20
 * Callers:
 *     KiChainedDispatch @ 0x1406AD740 (KiChainedDispatch.c)
 * Callees:
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 *     KiStartInterruptCycleAccumulation @ 0x14036A630 (KiStartInterruptCycleAccumulation.c)
 *     PerfInfoLogInterrupt @ 0x1403AEB10 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     KiDispatchPassiveInterrupts @ 0x1404DE3D0 (KiDispatchPassiveInterrupts.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 */

unsigned __int8 __fastcall KiScanInterruptObjectList()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 result; // al
  __int64 v5; // r8
  __int64 v6; // r12
  bool v7; // zf
  int v8; // edi
  __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // edx
  unsigned __int8 v13; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER v14[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(unsigned __int8 *)(v1 + 92);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(v2);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v2);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  result = KiStartInterruptCycleAccumulation((__int64)KeGetCurrentPrcb(), 1);
  _enable();
  v6 = v1 + 8;
  v7 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v7 )
    result = EtwGetKernelTraceTimestamp(v14, 0x20004000u).LowPart;
  while ( 2 )
  {
    v8 = 0;
    do
    {
      v9 = v6 - 8;
      if ( (*(_DWORD *)(v9 + 104) & 1) != 0 )
      {
        v13 = 0;
      }
      else
      {
        v10 = *(unsigned __int8 *)(v9 + 93);
        if ( !(_BYTE)v10 )
        {
          result = KiDispatchPassiveInterrupts(v9);
          goto LABEL_20;
        }
        if ( (_BYTE)v10 != *(_BYTE *)(v1 + 92) )
          __writecr8(v10);
        result = KiCallInterruptServiceRoutine((struct _KINTERRUPT *)v9, 1, v5);
        v13 = result;
        v11 = *(unsigned __int8 *)(v1 + 92);
        if ( (_BYTE)v11 != *(_BYTE *)(v9 + 93) )
          __writecr8(v11);
      }
      if ( *(_BYTE *)(v0 + 243) )
      {
        v12 = v13;
        BYTE1(v12) = *(_BYTE *)(v9 + 88);
        PerfInfoLogInterrupt(v9, v12, (__int64)v14);
        result = EtwGetKernelTraceTimestamp(v14, 0x20004000u).LowPart;
      }
      if ( v13 )
      {
        if ( *(_WORD *)(v9 + 108) != 1 )
          goto LABEL_20;
        ++v8;
      }
      v6 = *(_QWORD *)(v9 + 8);
    }
    while ( v6 != v1 + 8 );
    if ( v8 )
      continue;
    break;
  }
LABEL_20:
  _disable();
  return result;
}
