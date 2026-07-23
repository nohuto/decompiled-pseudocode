/*
 * XREFs of PsGetJobProperty @ 0x14041C780
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PsGetJobProperty(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 **v7; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 *v9; // rax
  __int64 *v10; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v5 = a1;
  v6 = 0LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    a3 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
    if ( (POBJECT_TYPE *)ObTypeIndexTable[a3] != PsJobType )
      return 0LL;
  }
  if ( a1 )
  {
    while ( 1 )
    {
      v7 = (__int64 **)(v5 + 1512);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 1528), 0LL) )
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v5 + 1528), a2, a3, a4);
      }
      else
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v5 + 1528));
      }
      v9 = *v7;
      v10 = 0LL;
      while ( v9 != (__int64 *)v7 )
      {
        if ( v9[2] == a2 )
        {
          v10 = v9;
          if ( v9 )
            ObfReferenceObjectWithTag((PVOID)v9[3], 0x72507350u);
          break;
        }
        v9 = (__int64 *)*v9;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 1528), 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v5 + 1528), retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( v10 )
        return v10[3];
      v5 = *(_QWORD *)(v5 + 1304);
      if ( !v5 )
        return v6;
    }
  }
  return v6;
}
