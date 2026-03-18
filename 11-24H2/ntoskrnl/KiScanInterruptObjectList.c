/*
 * XREFs of KiScanInterruptObjectList @ 0x1406ACB80
 * Callers:
 *     KiChainedDispatch @ 0x1406AC7A0 (KiChainedDispatch.c)
 * Callees:
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     KiStartInterruptCycleAccumulation @ 0x14034C150 (KiStartInterruptCycleAccumulation.c)
 *     KiDispatchPassiveInterrupts @ 0x1403BF220 (KiDispatchPassiveInterrupts.c)
 *     PerfInfoLogInterrupt @ 0x1403BFF50 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 */

unsigned __int8 __fastcall KiScanInterruptObjectList()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 result; // al
  signed __int32 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r12
  bool v8; // zf
  int v9; // edi
  __int64 v10; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  int v13; // edx
  unsigned __int8 v14; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER v15[8]; // [rsp+28h] [rbp-40h] BYREF

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
  v7 = v1 + 8;
  v8 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v8 )
    result = EtwGetKernelTraceTimestamp(v15, 0x20004000u);
  while ( 2 )
  {
    v9 = 0;
    do
    {
      v10 = v7 - 8;
      if ( (*(_DWORD *)(v10 + 104) & 1) != 0 )
      {
        v14 = 0;
      }
      else
      {
        v11 = *(unsigned __int8 *)(v10 + 93);
        if ( !(_BYTE)v11 )
        {
          result = KiDispatchPassiveInterrupts(v10);
          goto LABEL_20;
        }
        if ( (_BYTE)v11 != *(_BYTE *)(v1 + 92) )
          __writecr8(v11);
        result = KiCallInterruptServiceRoutine((struct _KINTERRUPT *)v10, 1, v5, v6);
        v14 = result;
        v12 = *(unsigned __int8 *)(v1 + 92);
        if ( (_BYTE)v12 != *(_BYTE *)(v10 + 93) )
          __writecr8(v12);
      }
      if ( *(_BYTE *)(v0 + 243) )
      {
        v13 = v14;
        BYTE1(v13) = *(_BYTE *)(v10 + 88);
        PerfInfoLogInterrupt(v10, v13, (__int64)v15);
        result = EtwGetKernelTraceTimestamp(v15, 0x20004000u);
      }
      if ( v14 )
      {
        if ( *(_WORD *)(v10 + 108) != 1 )
          goto LABEL_20;
        ++v9;
      }
      v7 = *(_QWORD *)(v10 + 8);
    }
    while ( v7 != v1 + 8 );
    if ( v9 )
      continue;
    break;
  }
LABEL_20:
  _disable();
  return result;
}
