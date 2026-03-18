/*
 * XREFs of KiSelectCandidateProcessor @ 0x14032DF70
 * Callers:
 *     KiHeteroSelectProcessorToPreempt @ 0x140330300 (KiHeteroSelectProcessorToPreempt.c)
 *     KiChooseTargetProcessor @ 0x1404E7040 (KiChooseTargetProcessor.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1403312E4 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int64 *a5)
{
  _WORD *v5; // r10
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  _DWORD *v12; // r15
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // rax
  __int64 v16; // r8
  char v17; // cl
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  unsigned __int64 *v20; // r12
  unsigned int v21; // ebx
  _BYTE *v22; // rax
  unsigned int v23; // ecx
  __int64 *v24; // r14
  __int64 v25; // rbp
  __int64 v26; // rdi
  int v27; // esi
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v30; // [rsp+68h] [rbp+10h] BYREF
  int v31; // [rsp+78h] [rbp+20h]

  v31 = a4;
  v5 = *(_WORD **)(a2 + 576);
  v6 = a1;
  v7 = *(unsigned __int8 *)(a1 + 208);
  v9 = *(_QWORD *)(a1 + 192);
  if ( (unsigned __int16)v7 >= *v5 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&v5[4 * v7 + 4];
  v11 = v10 & *(_QWORD *)(v9 + 128);
  v12 = (_DWORD *)(v9 + 120);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v12);
    v13 = *v12 & 0x7FFFFFFF;
    while ( 1 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange(v12, v13 + 1, v13);
      if ( v14 == v13 )
        break;
      if ( v13 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(v9 + 120), 0xFFu);
        goto LABEL_38;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(v9 + 120), 0xFFu);
LABEL_38:
    a4 = v31;
  }
  if ( KiForceParkingConfiguration )
    v11 &= ~*(_QWORD *)(v9 + 104);
  v15 = v11 & *(_QWORD *)(v9 + 80);
  if ( !v15 )
    v15 = v11;
  v16 = a3 & v15;
  if ( (a3 & v15) != 0 || (v16 = v15) != 0 )
  {
    v17 = *(_BYTE *)(v6 + 209);
    _BitScanForward64(&v18, __ROR8__(v16, v17));
    v6 = KiProcessorBlock[*((unsigned int *)qword_140F216A8
                          + 64 * *(unsigned __int8 *)(v6 + 208)
                          + (((unsigned __int8)v18 + v17) & 0x3F))];
  }
  v19 = a4;
  v20 = a5;
  v21 = **(unsigned __int8 **)(v6 + 56);
  v30 = v6;
  if ( a4 < (int)(v21 >> 7) )
    v19 = v21 >> 7;
  *a5 = (int)v19 ^ (v6 ^ (int)v19) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v19 )
  {
    if ( v19 != 1 )
      goto LABEL_22;
    v22 = *(_BYTE **)(v6 + 36440);
    v23 = (unsigned __int8)*v22;
    v24 = (__int64 *)(v22 + 8);
    if ( !*v22 )
      goto LABEL_22;
  }
  else
  {
    v24 = &v30;
    v23 = 1;
  }
  v25 = v23;
  do
  {
    v26 = *v24;
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 48), 0LL) )
    {
      do
      {
        if ( (++v27 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v26 + 48) );
    }
    ++v24;
    --v25;
  }
  while ( v25 );
  a4 = v31;
LABEL_22:
  if ( ((**(_BYTE **)(v6 + 56) ^ v21) & 0x80u) != 0 )
    KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v6, (unsigned int)a4, v20);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v12, 0xBFFFFFFF);
    _InterlockedDecrement(v12);
    return v6;
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
    return v6;
  }
}
