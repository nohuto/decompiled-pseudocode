/*
 * XREFs of PsGetJobProperty @ 0x140428800
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PsGetJobProperty(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 **v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1;
  v4 = 0LL;
  if ( KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] != PsJobType )
  {
    return 0LL;
  }
  if ( a1 )
  {
    while ( 1 )
    {
      v5 = (__int64 **)(v3 + 1512);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 1528), 0LL) )
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v3 + 1528));
      }
      else
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v3 + 1528));
      }
      v7 = *v5;
      v8 = 0LL;
      while ( v7 != (__int64 *)v5 )
      {
        if ( v7[2] == a2 )
        {
          v8 = v7;
          if ( v7 )
            ObfReferenceObjectWithTag((PVOID)v7[3], 0x72507350u);
          break;
        }
        v7 = (__int64 *)*v7;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 1528), 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v3 + 1528), retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( v8 )
        return v8[3];
      v3 = *(_QWORD *)(v3 + 1304);
      if ( !v3 )
        return v4;
    }
  }
  return v4;
}
