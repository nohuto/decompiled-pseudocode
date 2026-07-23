/*
 * XREFs of EmonDisableMonitoringEnhanced @ 0x140558CF0
 * Callers:
 *     <none>
 * Callees:
 *     EmonConfigureCounter @ 0x140558B40 (EmonConfigureCounter.c)
 *     EmonFindCounterToDisableEnhanced @ 0x140559310 (EmonFindCounterToDisableEnhanced.c)
 *     EmonFreeCounterEnhanced @ 0x14055941C (EmonFreeCounterEnhanced.c)
 */

__int64 __fastcall EmonDisableMonitoringEnhanced(unsigned int a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdi
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v9 = 0;
  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  if ( a2 )
  {
    v4 = *a2;
    if ( (*a2 & 0x40000000) != 0 )
    {
      v5 = 1;
      v4 &= ~0x40000000u;
      v8 = 1;
    }
    else
    {
      v5 = v8;
    }
    v9 = v4;
    goto LABEL_9;
  }
  v6 = *(_QWORD *)(KiProcessorBlock[v2] + 88);
  if ( (unsigned __int8)EmonFindCounterToDisableEnhanced(v6, a1, &v9, &v8)
    || (result = EmonFindCounterToDisableEnhanced(v6 + 24, a1, &v9, &v8), (_BYTE)result) )
  {
    v5 = v8;
    v4 = v9;
LABEL_9:
    EmonConfigureCounter(v4, v5, 0, 0LL, 0, 0);
    result = EmonFreeCounterEnhanced(v4, v5);
    _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[3], 0xFFFFFFFE);
  }
  return result;
}
