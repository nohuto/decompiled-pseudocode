/*
 * XREFs of EmonDisableMonitoringOriginal @ 0x140558DC0
 * Callers:
 *     <none>
 * Callees:
 *     EmonConfigureCounter @ 0x140558B40 (EmonConfigureCounter.c)
 *     EmonFindCounterToDisableOriginal @ 0x1405593C0 (EmonFindCounterToDisableOriginal.c)
 *     EmonFreeCounterOriginal @ 0x14055948C (EmonFreeCounterOriginal.c)
 */

__int64 __fastcall EmonDisableMonitoringOriginal(unsigned int a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v9 = 0;
  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  if ( a2 )
  {
    v3 = *a2;
    if ( (*a2 & 0x40000000) != 0 )
    {
      v4 = 1;
      v3 &= ~0x40000000u;
      v8 = 1;
    }
    else
    {
      v4 = v8;
    }
    v9 = v3;
    goto LABEL_9;
  }
  v5 = *(_QWORD *)(KiProcessorBlock[v2] + 88);
  if ( (unsigned __int8)EmonFindCounterToDisableOriginal(v5, a1, &v9, &v8)
    || (result = EmonFindCounterToDisableOriginal(v5 + 24, v6, &v9, &v8), (_BYTE)result) )
  {
    v4 = v8;
    v3 = v9;
LABEL_9:
    EmonConfigureCounter(v3, v4, 0, 0LL, 0, 0);
    result = EmonFreeCounterOriginal(v3, v4);
    _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[3], 0xFFFFFFFE);
  }
  return result;
}
