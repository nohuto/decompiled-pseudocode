/*
 * XREFs of PfSnActiveTraceGetNext @ 0x1402F4C40
 * Callers:
 *     PfSnNameRemoveAll @ 0x14094A440 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  __int64 *v6; // rdi
  __int64 *v7; // rbp
  struct _EX_RUNDOWN_REF *v8; // rcx
  unsigned __int64 v9; // rtt
  unsigned __int64 v10; // rtt
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E67160, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140E67160, a2, a3, a4);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&qword_140E67160);
  }
  if ( a1 )
    v6 = (__int64 *)&a1[1];
  else
    v6 = &PfSnGlobals;
  while ( 1 )
  {
    v6 = (__int64 *)v6[1];
    if ( v6 == &PfSnGlobals )
      break;
    v7 = v6 - 1;
    v8 = (struct _EX_RUNDOWN_REF *)(v6 + 44);
    _m_prefetchw(v8);
    v9 = v8->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)v8, v9 + 2, v9)
      || ExfAcquireRundownProtection(v8) )
    {
      goto LABEL_10;
    }
  }
  v7 = 0LL;
LABEL_10:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&qword_140E67160, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&qword_140E67160, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( a1 )
  {
    _m_prefetchw(&a1[45]);
    v10 = a1[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[45], v10 - 2, v10) )
      ExfReleaseRundownProtection(a1 + 45);
  }
  return v7;
}
