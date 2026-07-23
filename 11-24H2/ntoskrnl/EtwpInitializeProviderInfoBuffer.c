/*
 * XREFs of EtwpInitializeProviderInfoBuffer @ 0x1409D15D4
 * Callers:
 *     EtwpSendDbgId @ 0x1407AD190 (EtwpSendDbgId.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1409D3224 (EtwpRealtimeNotifyConsumers.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x14044D7A0 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x14047540C (EtwpInitializeBufferHeader.c)
 */

__int64 __fastcall EtwpInitializeProviderInfoBuffer(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rcx

  EtwpInitializeBufferHeader((__int16 *)a1, (_DWORD *)a2);
  *(_DWORD *)a2 = a3;
  EtwpResetBufferHeader(a2, 7);
  *(_DWORD *)(a2 + 44) = 3;
  *(_WORD *)(a2 + 52) = 1;
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 304);
  result = *(unsigned int *)(a1 + 200);
  v7 = result ^ (*(_QWORD *)(a2 + 32) ^ result) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a2 + 32) = v7;
  switch ( *(_DWORD *)(a1 + 200) )
  {
    case 1:
      goto LABEL_4;
    case 3:
      result = v7 & 7 | (8LL * (unsigned int)EtwCPUSpeedInMHz);
      *(_QWORD *)(a2 + 32) = result;
      return result;
    case 4:
LABEL_4:
      result = 8 * EtwPerfFreq.QuadPart;
      *(_QWORD *)(a2 + 32) = (8 * EtwPerfFreq.QuadPart) | v7 & 7;
      break;
  }
  return result;
}
