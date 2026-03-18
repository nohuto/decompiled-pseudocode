/*
 * XREFs of PsGetJobProperty @ 0x140436120
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PsGetJobProperty(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 *v8; // rax
  __int64 *v9; // rsi
  __int64 **v10; // r14
  volatile signed __int32 *v11; // rbp
  unsigned __int8 CurrentIrql; // r15
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  v3 = a1;
  v4 = 0LL;
  if ( KeGetCurrentIrql() < 2u )
  {
    v5 = (unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
    v6 = *((unsigned __int8 *)a1 - 24);
    a1 = ObTypeIndexTable;
    if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6 ^ v5] != PsJobType )
      return 0LL;
  }
  while ( v3 )
  {
    v10 = (__int64 **)(v3 + 189);
    v11 = (volatile signed __int32 *)(v3 + 191);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v11, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v3 + 382);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)v3 + 382);
    }
    v8 = *v10;
    v9 = 0LL;
    while ( v8 != (__int64 *)v10 )
    {
      if ( v8[2] == v2 )
      {
        v9 = v8;
        if ( v8 )
          ObfReferenceObjectWithTag((PVOID)v8[3], 0x72507350u);
        break;
      }
      v8 = (__int64 *)*v8;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    else
      KiReleaseSpinLockInstrumented(v3 + 191, retaddr);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    }
    __writecr8(CurrentIrql);
    if ( v9 )
      return v9[3];
    v3 = (__int64 *)v3[163];
  }
  return v4;
}
