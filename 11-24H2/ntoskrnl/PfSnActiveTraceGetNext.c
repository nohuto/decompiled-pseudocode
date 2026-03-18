/*
 * XREFs of PfSnActiveTraceGetNext @ 0x140434970
 * Callers:
 *     PfSnNameRemoveAll @ 0x140962980 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 *v3; // rdi
  __int64 *v4; // rbp
  struct _EX_RUNDOWN_REF *v5; // rcx
  unsigned __int64 v6; // rtt
  unsigned __int64 v7; // rtt
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E67010, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140E67010);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&qword_140E67010);
  }
  if ( a1 )
    v3 = (__int64 *)&a1[1];
  else
    v3 = &PfSnGlobals;
  while ( 1 )
  {
    v3 = (__int64 *)v3[1];
    if ( v3 == &PfSnGlobals )
      break;
    v4 = v3 - 1;
    v5 = (struct _EX_RUNDOWN_REF *)(v3 + 44);
    _m_prefetchw(v5);
    v6 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)v5, v6 + 2, v6)
      || ExfAcquireRundownProtection(v5) )
    {
      goto LABEL_10;
    }
  }
  v4 = 0LL;
LABEL_10:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&qword_140E67010, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&qword_140E67010, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( a1 )
  {
    _m_prefetchw(&a1[45]);
    v7 = a1[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[45], v7 - 2, v7) )
      ExfReleaseRundownProtection(a1 + 45);
  }
  return v4;
}
