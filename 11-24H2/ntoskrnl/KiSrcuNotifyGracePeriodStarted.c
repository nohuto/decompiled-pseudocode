/*
 * XREFs of KiSrcuNotifyGracePeriodStarted @ 0x1405BE81C
 * Callers:
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 *     KiSrcuStartGracePeriod @ 0x1405BEFFC (KiSrcuStartGracePeriod.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuNotifyWorkerAcquire @ 0x1405BEA20 (KiSrcuNotifyWorkerAcquire.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405BEB94 (KiSrcuNotifyWorkerSelectAndQueue.c)
 */

unsigned __int64 __fastcall KiSrcuNotifyGracePeriodStarted(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v6; // cl
  __int64 v7; // rdi
  _BYTE *v8; // r14
  void *v9; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v6 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      result = KiRaiseIrqlProcessIrqlFlags(v6, a2);
    }
  }
  if ( v3 )
  {
    v7 = (v3 - *(_QWORD *)(a1 + 32)) >> 6;
    v8 = (_BYTE *)(*(_QWORD *)(a1 + 152) + 80LL * ((unsigned int)v7 / *(_DWORD *)(a1 + 148)));
    result = KiSrcuNotifyWorkerAcquire(v8, 1LL, (unsigned int)(1 << (v7 - v8[64])));
    if ( (_DWORD)result )
      result = KiSrcuNotifyWorkerSelectAndQueue(v8, 0LL);
  }
  else if ( *(_DWORD *)(a1 + 144) )
  {
    do
    {
      v9 = (void *)(*(_QWORD *)(a1 + 152) + 80 * v3);
      result = KiSrcuNotifyWorkerAcquire(v9, 1LL, (unsigned int)((1 << *(_DWORD *)(a1 + 148)) - 1));
      if ( (_DWORD)result )
        result = KiSrcuNotifyWorkerSelectAndQueue(v9, 0LL);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 144) );
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
