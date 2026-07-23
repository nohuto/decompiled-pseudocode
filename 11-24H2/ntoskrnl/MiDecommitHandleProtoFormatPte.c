/*
 * XREFs of MiDecommitHandleProtoFormatPte @ 0x140299180
 * Callers:
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiDecrementCombinedPteEx @ 0x140294CC8 (MiDecrementCombinedPteEx.c)
 *     MiDecrementCloneBlockReference @ 0x140294D58 (MiDecrementCloneBlockReference.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 */

void __fastcall MiDecommitHandleProtoFormatPte(__int64 a1, __int64 a2)
{
  int v2; // r10d
  __int64 v4; // r9
  _KPROCESS *Process; // r8
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // eax
  ULONG_PTR v13; // r8
  _QWORD *v14; // r9
  __int64 v15; // r12
  _KPROCESS *v16; // rax
  unsigned __int64 CycleTime; // rcx
  __int64 v18; // rbp
  int v19; // ebx
  unsigned __int64 v20; // rcx
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int64 *v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 156);
  if ( (v2 & 8) == 0 )
  {
    v4 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v4 )
    {
      Process = 0LL;
      if ( (_DWORD)v4 == 2 && (a2 & 2) != 0 )
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
    if ( qword_140E2DCC0 && (a2 & 0x10) == 0 )
      v6 = a2 & ~qword_140E2DCC0;
    v7 = v6 >> 16;
    v8 = -1;
    if ( (a2 & 0x400) != 0 )
    {
      v9 = a2;
      if ( qword_140E2DCC0 && (a2 & 0x10) == 0 )
        v9 = a2 & ~qword_140E2DCC0;
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
          v15 = *(_QWORD *)(a1 + 48);
          if ( (_DWORD)v4 == 3 )
          {
            ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
          }
          else if ( (*(_DWORD *)(v15 + 56) & 0x20) != 0 )
          {
            v16 = KeGetCurrentThread()->ApcState.Process;
            CycleTime = v16[1].CycleTime;
            if ( CycleTime && (v16[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
              v8 = *(_DWORD *)(CycleTime + 8);
            v18 = v15 + 128;
            if ( v15 != -128 )
            {
              while ( 1 )
              {
                v19 = *(_DWORD *)(v18 + 32);
                v20 = *(_QWORD *)(v18 + 8);
                if ( v7 >= v20 && v7 < v20 + 8LL * *(unsigned int *)(v18 + 44) )
                  break;
                if ( (*(_DWORD *)(v18 + 32) & 0x20000) != 0 && (*(_DWORD *)(v15 + 56) & 0x8000000) != 0 )
                {
                  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
                  {
                    _m_prefetchw((const void *)(v15 + 72));
                    v22 = *(_DWORD *)(v15 + 72) & 0x7FFFFFFF;
                    v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 72), v22 + 1, v22);
                    if ( v22 != v21 )
                    {
                      while ( v21 >= 0 )
                      {
                        a2 = (unsigned int)v21;
                        v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 72), v21 + 1, v21);
                        if ( v21 == (_DWORD)a2 )
                          goto LABEL_60;
                      }
                      LOBYTE(a2) = -1;
                      ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(v15 + 72), a2, (__int64)Process, v4);
                    }
                  }
                  else
                  {
                    ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(v15 + 72), 0xFFu);
                  }
LABEL_60:
                  v23 = *(__int64 **)(v18 + 24);
                  while ( v23 )
                  {
                    if ( v8 <= *((_DWORD *)v23 + 16) )
                    {
                      if ( v8 >= *((_DWORD *)v23 + 16) )
                        break;
                      v23 = (__int64 *)*v23;
                    }
                    else
                    {
                      v23 = (__int64 *)v23[1];
                    }
                  }
                  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                  {
                    _InterlockedAnd((volatile signed __int32 *)(v15 + 72), 0xBFFFFFFF);
                    _InterlockedDecrement((volatile signed __int32 *)(v15 + 72));
                  }
                  else
                  {
                    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(v15 + 72), retaddr);
                  }
                  if ( v23 )
                  {
                    v24 = v23[9];
                    if ( v7 >= v24 && v7 < v24 + 8LL * *(unsigned int *)(v18 + 44) )
                      break;
                  }
                }
                v18 = *(_QWORD *)(v18 + 16);
                if ( !v18 )
                  goto LABEL_77;
              }
              if ( (v19 & 0x3Eu) >= 8 )
                ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
            }
          }
        }
        goto LABEL_77;
      }
      if ( !Process[1].IdealProcessorAssignmentBlock || (unsigned int)MiIsPrototypePteVadLookup(a2, a2) )
        goto LABEL_77;
      do
      {
        if ( v7 <= v14[4] )
        {
          if ( v7 >= v14[3] )
            break;
          v14 = (_QWORD *)*v14;
        }
        else
        {
          v14 = (_QWORD *)v14[1];
        }
      }
      while ( v14 );
      if ( !v14 || !v14[6] )
      {
LABEL_77:
        **(_QWORD **)(a1 + 72) = *(_QWORD *)(a1 + 176);
        if ( !*(_QWORD *)(a1 + 176) )
          ++*(_DWORD *)(a1 + 112);
        return;
      }
      v12 = MiDecrementCloneBlockReference((ULONG_PTR)v14, v7, v13);
      v10 = a1 + 24;
    }
    else
    {
      if ( !Process )
      {
        if ( (_DWORD)v4 == 3 || (v2 & 0x20) == 0 )
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
        v10 = a1 + 24;
        v11 = **(_QWORD **)(((v7 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        v12 = MiDecrementCombinedPteEx(*(_QWORD *)(a1 + 32), v7, 0);
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
      v12 = MiDecrementCombinedPteEx(*(_QWORD *)(a1 + 32), v7, 0);
    }
    if ( v12 == 3 )
      goto LABEL_36;
    goto LABEL_37;
  }
}
