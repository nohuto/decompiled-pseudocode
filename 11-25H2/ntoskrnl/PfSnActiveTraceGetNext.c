/*
 * XREFs of PfSnActiveTraceGetNext @ 0x140438B00
 * Callers:
 *     PfSnNameRemoveAll @ 0x1408281F8 (PfSnNameRemoveAll.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 *v5; // rbp
  struct _EX_RUNDOWN_REF *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rtt
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66D50, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140E66D50);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&qword_140E66D50);
  }
  v4 = (__int64 *)&v1[1];
  if ( !v1 )
    v4 = &PfSnGlobals;
  while ( 1 )
  {
    v4 = (__int64 *)v4[1];
    if ( v4 == &PfSnGlobals )
      break;
    v5 = v4 - 1;
    v6 = (struct _EX_RUNDOWN_REF *)(v4 + 44);
    _m_prefetchw(v6);
    v7 = v6->Count & 0xFFFFFFFFFFFFFFFEuLL;
    v3 = v7 + 2;
    if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)v6, v7 + 2, v7)
      || ExfAcquireRundownProtection(v6) )
    {
      goto LABEL_10;
    }
  }
  v5 = 0LL;
LABEL_10:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&qword_140E66D50, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&qword_140E66D50, retaddr);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(CurrentIrql);
  if ( v1 )
  {
    _m_prefetchw(&v1[45]);
    v8 = v1[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&v1[45], v8 - 2, v8) )
      ExfReleaseRundownProtection(v1 + 45);
  }
  return v5;
}
