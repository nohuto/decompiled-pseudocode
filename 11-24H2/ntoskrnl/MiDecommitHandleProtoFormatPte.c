/*
 * XREFs of MiDecommitHandleProtoFormatPte @ 0x140289580
 * Callers:
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiDecrementCombinedPteEx @ 0x1402F9014 (MiDecrementCombinedPteEx.c)
 *     MiDecrementCloneBlockReference @ 0x1402F90A4 (MiDecrementCloneBlockReference.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 */

void __fastcall MiDecommitHandleProtoFormatPte(__int64 a1, unsigned __int64 a2)
{
  int v2; // r10d
  int v4; // r9d
  _KPROCESS *Process; // r8
  __int64 v6; // r14
  ULONG_PTR v7; // r14
  unsigned int v8; // r15d
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // eax
  _QWORD *v13; // r9
  __int64 v14; // r12
  _KPROCESS *v15; // rax
  unsigned __int64 CycleTime; // rcx
  __int64 v17; // rbp
  int v18; // ebx
  ULONG_PTR v19; // rcx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 *v22; // rdi
  ULONG_PTR v23; // rcx
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 156);
  if ( (v2 & 8) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( v4 )
    {
      Process = 0LL;
      if ( v4 == 2 && (a2 & 2) != 0 )
      {
        ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
        goto LABEL_77;
      }
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
    }
    v6 = a2;
    if ( qword_140E2DB80 && (a2 & 0x10) == 0 )
      v6 = a2 & ~qword_140E2DB80;
    v7 = v6 >> 16;
    v8 = -1;
    if ( (a2 & 0x400) != 0 )
    {
      v9 = a2;
      if ( qword_140E2DB80 && (a2 & 0x10) == 0 )
        v9 = a2 & ~qword_140E2DB80;
      if ( HIDWORD(v9) == 0xFFFFFFFF )
        goto LABEL_24;
    }
    if ( (a2 & 0x800) == 0 )
    {
LABEL_24:
      if ( !Process )
      {
        if ( (v2 & 2) != 0 )
        {
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
        }
        else
        {
          v14 = *(_QWORD *)(a1 + 48);
          if ( v4 == 3 )
          {
            ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
          }
          else if ( (*(_DWORD *)(v14 + 56) & 0x20) != 0 )
          {
            v15 = KeGetCurrentThread()->ApcState.Process;
            CycleTime = v15[1].CycleTime;
            if ( CycleTime && (v15[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
              v8 = *(_DWORD *)(CycleTime + 8);
            v17 = v14 + 128;
            if ( v14 != -128 )
            {
              while ( 1 )
              {
                v18 = *(_DWORD *)(v17 + 32);
                v19 = *(_QWORD *)(v17 + 8);
                if ( v7 >= v19 && v7 < v19 + 8LL * *(unsigned int *)(v17 + 44) )
                  break;
                if ( (*(_DWORD *)(v17 + 32) & 0x20000) != 0 && (*(_DWORD *)(v14 + 56) & 0x8000000) != 0 )
                {
                  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
                  {
                    _m_prefetchw((const void *)(v14 + 72));
                    v21 = *(_DWORD *)(v14 + 72) & 0x7FFFFFFF;
                    v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 72), v21 + 1, v21);
                    if ( v21 != v20 )
                    {
                      while ( v20 >= 0 )
                      {
                        a2 = (unsigned int)v20;
                        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 72), v20 + 1, v20);
                        if ( v20 == (_DWORD)a2 )
                          goto LABEL_60;
                      }
                      LOBYTE(a2) = -1;
                      ExpWaitForSpinLockSharedAndAcquire(v14 + 72, a2);
                    }
                  }
                  else
                  {
                    LOBYTE(a2) = -1;
                    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v14 + 72, a2);
                  }
LABEL_60:
                  v22 = *(__int64 **)(v17 + 24);
                  while ( v22 )
                  {
                    if ( v8 <= *((_DWORD *)v22 + 16) )
                    {
                      if ( v8 >= *((_DWORD *)v22 + 16) )
                        break;
                      v22 = (__int64 *)*v22;
                    }
                    else
                    {
                      v22 = (__int64 *)v22[1];
                    }
                  }
                  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                  {
                    _InterlockedAnd((volatile signed __int32 *)(v14 + 72), 0xBFFFFFFF);
                    _InterlockedDecrement((volatile signed __int32 *)(v14 + 72));
                  }
                  else
                  {
                    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(v14 + 72), retaddr);
                  }
                  if ( v22 )
                  {
                    v23 = v22[9];
                    if ( v7 >= v23 && v7 < v23 + 8LL * *(unsigned int *)(v17 + 44) )
                      break;
                  }
                }
                v17 = *(_QWORD *)(v17 + 16);
                if ( !v17 )
                  goto LABEL_77;
              }
              if ( (v18 & 0x3Eu) >= 8 )
                ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
            }
          }
        }
        goto LABEL_77;
      }
      if ( !Process[1].IdealProcessorAssignmentBlock || (unsigned int)MiIsPrototypePteVadLookup(a2) )
        goto LABEL_77;
      do
      {
        if ( v7 <= v13[4] )
        {
          if ( v7 >= v13[3] )
            break;
          v13 = (_QWORD *)*v13;
        }
        else
        {
          v13 = (_QWORD *)v13[1];
        }
      }
      while ( v13 );
      if ( !v13 || !v13[6] )
      {
LABEL_77:
        **(_QWORD **)(a1 + 72) = *(_QWORD *)(a1 + 176);
        if ( !*(_QWORD *)(a1 + 176) )
          ++*(_DWORD *)(a1 + 112);
        return;
      }
      v12 = MiDecrementCloneBlockReference((ULONG_PTR)v13, v7);
      v10 = a1 + 24;
    }
    else
    {
      if ( !Process )
      {
        if ( v4 == 3 || (v2 & 0x20) == 0 )
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
        v10 = a1 + 24;
        v11 = **(_QWORD **)(((v7 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        v12 = MiDecrementCombinedPteEx(*(_QWORD *)(a1 + 32), v7, 0LL);
        if ( v12 == 3 )
        {
          if ( v11 != *(_QWORD *)(a1 + 8) )
            goto LABEL_77;
LABEL_36:
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
          goto LABEL_77;
        }
LABEL_37:
        if ( v12 == 5 )
          ++*(_QWORD *)(*(_QWORD *)v10 + 16LL);
        goto LABEL_77;
      }
      v10 = a1 + 24;
      v12 = MiDecrementCombinedPteEx(*(_QWORD *)(a1 + 32), v7, 0LL);
    }
    if ( v12 == 3 )
      goto LABEL_36;
    goto LABEL_37;
  }
}
