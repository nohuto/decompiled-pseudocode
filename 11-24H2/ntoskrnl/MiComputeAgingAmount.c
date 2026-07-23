/*
 * XREFs of MiComputeAgingAmount @ 0x14020F5E0
 * Callers:
 *     MiAgeWorkingSet @ 0x14020F2A0 (MiAgeWorkingSet.c)
 *     MiAgePte @ 0x140303CD0 (MiAgePte.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiComputeAgingAmount(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  void *retaddr; // [rsp+58h] [rbp+0h]
  char v19; // [rsp+70h] [rbp+18h]

  v19 = a3;
  v4 = &unk_140E388C0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = (unsigned int)a4;
  v7 = a2;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v9 = (volatile signed __int32 *)&unk_140E388C0;
  else
    v9 = (volatile signed __int32 *)(a1 + 256);
  v10 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v11 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
    {
      LOBYTE(a2) = -1;
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(v9, a2);
    }
    v12 = *(unsigned int *)v9;
    v13 = v12 & 0xFFFFFFFFBFFFFFFFuLL;
    if ( (v12 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v12 & 0x40000000) == 0 )
          _InterlockedOr(v9, 0x40000000u);
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v12, a3, a4) )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
        v12 = *(unsigned int *)v9;
      }
      while ( (*v9 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, a2);
  }
  if ( (v19 & 2) != 0 )
  {
    v14 = *(unsigned int *)(v5 + 24);
    *(_DWORD *)(v5 + 24) = (v14 + v7) % v6;
  }
  else
  {
    v14 = *(unsigned int *)(v5 + 28);
    *(_DWORD *)(v5 + 28) = (v14 + v7) % v6;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v4 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *v4 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  if ( v14 + v7 >= v7 )
    v10 = v14;
  v15 = v6 * (v7 + v10) / 0x3E8;
  if ( v15 <= v7 )
    return v15;
  v16 = (v7 * v6 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  return (v16 + ((v7 * v6 - v16) >> 1)) >> 9;
}
