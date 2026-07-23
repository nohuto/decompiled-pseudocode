/*
 * XREFs of PsGetThreadProperty @ 0x1404053D0
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

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  __int64 v3; // r9
  void *v4; // r15
  char v5; // r12
  ULONG_PTR v6; // r13
  __int64 *v8; // r8
  volatile signed __int32 *v9; // r14
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rbx
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int8 v15; // bp
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *v17; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v5 = Flags;
  v6 = Key;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return 0LL;
  if ( Thread == KeGetCurrentPrcb()->IdleThread )
    return 0LL;
  v8 = ObTypeIndexTable;
  if ( KeGetCurrentIrql() < 2u )
  {
    Key = (unsigned __int8)ObHeaderCookie ^ LOBYTE(Thread[-1].Padding[2]) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Thread - 48) >> 8);
    if ( (POBJECT_TYPE *)ObTypeIndexTable[Key] != PsThreadType )
      return 0LL;
  }
  if ( Thread == KeGetCurrentThread() && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 0LL;
  v9 = (volatile signed __int32 *)&Thread[1].WaitBlockFill11[88];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v9 + 4, 0LL) )
      KxWaitForSpinLockAndAcquire(v9 + 4, Key, (__int64)v8, v3);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v9 + 4);
  }
  v11 = *(volatile signed __int32 **)v9;
  v12 = 0LL;
  while ( v11 != v9 )
  {
    if ( *((_QWORD *)v11 + 2) == v6 )
    {
      v12 = v11;
      if ( v11 )
        ObfReferenceObjectWithTag(*((PVOID *)v11 + 3), 0x72507350u);
      break;
    }
    v11 = *(volatile signed __int32 **)v11;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v9 + 2, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v9 + 2, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v12 )
    return (PVOID)*((_QWORD *)v12 + 3);
  if ( (v5 & 1) == 0 )
  {
    Blink = Thread[1].WaitBlock[3].WaitListEntry.Blink;
    if ( Blink == (struct _LIST_ENTRY *)-3LL )
      Blink = (struct _LIST_ENTRY *)Thread->Process[1].Padding[3];
    if ( Blink )
    {
      if ( KeGetCurrentIrql() >= 2u
        || (Key = (unsigned __int8)ObHeaderCookie ^ LOBYTE(Blink[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Blink - 48) >> 8),
            (POBJECT_TYPE *)ObTypeIndexTable[Key] == PsJobType) )
      {
        while ( 1 )
        {
          p_Blink = &Blink[94].Blink;
          v15 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v15, 2LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[95].Blink, 0LL) )
              KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Blink[95].Blink, Key, (__int64)v8, v3);
          }
          else
          {
            KiAcquireSpinLockInstrumented((volatile signed __int32 *)&Blink[95].Blink);
          }
          v16 = *p_Blink;
          v17 = 0LL;
          while ( v16 != (struct _LIST_ENTRY *)p_Blink )
          {
            if ( v16[1].Flink == (struct _LIST_ENTRY *)v6 )
            {
              v17 = v16;
              if ( v16 )
                ObfReferenceObjectWithTag(v16[1].Blink, 0x72507350u);
              break;
            }
            v16 = v16->Flink;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64((volatile signed __int64 *)&Blink[95].Blink, 0LL);
          else
            KiReleaseSpinLockInstrumented((volatile signed __int64 *)&Blink[95].Blink, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
          __writecr8(v15);
          if ( v17 )
            return v17[1].Blink;
          Blink = Blink[81].Blink;
          if ( !Blink )
            return v4;
        }
      }
    }
  }
  return v4;
}
