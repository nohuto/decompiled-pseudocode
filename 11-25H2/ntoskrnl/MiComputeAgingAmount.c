/*
 * XREFs of MiComputeAgingAmount @ 0x1402477F0
 * Callers:
 *     MiAgeWorkingSet @ 0x140246F90 (MiAgeWorkingSet.c)
 *     MiAgePte @ 0x1402483B0 (MiAgePte.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiComputeAgingAmount(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  _DWORD *v4; // r12
  __int64 v5; // r15
  unsigned __int64 v6; // r13
  int *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // esi
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = &unk_140E38540;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = a4;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v9 = (int *)&unk_140E38540;
  else
    v9 = (int *)(a1 + 256);
  v10 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v11 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(v9, 0xFFu);
    v12 = *v9;
    v13 = (unsigned int)*v9;
    LODWORD(v13) = v13 & 0xBFFFFFFF;
    if ( (_DWORD)v13 != 0x80000000 )
    {
      do
      {
        if ( (v12 & 0x40000000) == 0 )
          _InterlockedOr(v9, 0x40000000u);
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13) )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
        v12 = *v9;
      }
      while ( (*v9 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, 0xFFu);
  }
  if ( (a3 & 2) != 0 )
  {
    v14 = *(unsigned int *)(v5 + 24);
    *(_DWORD *)(v5 + 24) = (v14 + a2) % v6;
  }
  else
  {
    v14 = *(unsigned int *)(v5 + 28);
    *(_DWORD *)(v5 + 28) = (v14 + a2) % v6;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v4 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *v4 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  if ( v14 + a2 >= a2 )
    v10 = v14;
  v15 = v6 * (a2 + v10) / 0x3E8;
  if ( v15 <= a2 )
    return v15;
  v16 = (a2 * v6 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  return (v16 + ((a2 * v6 - v16) >> 1)) >> 9;
}
