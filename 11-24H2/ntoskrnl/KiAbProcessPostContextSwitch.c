/*
 * XREFs of KiAbProcessPostContextSwitch @ 0x140338DE0
 * Callers:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x14021A3F0 (ExTryConvertSharedSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KxAcquireQueuedSpinLock @ 0x140357E10 (KxAcquireQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     KiAbReleaseLocksForEntry @ 0x140407AB8 (KiAbReleaseLocksForEntry.c)
 *     RtlRbReplaceNode @ 0x140407B10 (RtlRbReplaceNode.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x140407BF0 (KiAbTryDecrementIoWaiterCounts.c)
 */

__int64 __fastcall KiAbProcessPostContextSwitch(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  unsigned int v4; // r15d
  bool v5; // zf
  unsigned int v6; // ecx
  __int64 v7; // r14
  __int64 *v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r9
  _RTL_RB_TREE *v11; // rcx
  char v12; // dl
  char i; // al
  __int64 v14; // r8
  char v15; // cl
  __int64 v16; // rbx
  __int64 v17; // rdx
  char v18; // cl
  _RTL_RB_TREE *v19; // rcx
  _RTL_BALANCED_NODE *v20; // rsi
  __int64 v21; // rdx
  char v22; // al
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  _RTL_RB_TREE *v27; // r9
  _RTL_BALANCED_NODE *v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // al
  __int64 v32; // rdx
  _RTL_BALANCED_NODE *Min; // rdx
  __int64 Root; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int128 v37; // [rsp+28h] [rbp-29h] BYREF
  __int64 v38; // [rsp+38h] [rbp-19h]
  PRTL_RB_TREE Tree[2]; // [rsp+40h] [rbp-11h] BYREF
  __int128 v40; // [rsp+50h] [rbp-1h] BYREF
  __int128 v41; // [rsp+60h] [rbp+Fh]
  __int64 v42; // [rsp+70h] [rbp+1Fh]
  unsigned int v43; // [rsp+B8h] [rbp+67h]
  __int64 v44; // [rsp+C0h] [rbp+6Fh]

  v1 = *(_QWORD *)(a1 + 1144);
  result = 0LL;
  v42 = 0LL;
  *(_OWORD *)Tree = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( v1 )
  {
    if ( (unsigned int)(1LL << *(_BYTE *)(v1 + 12)) - 1 != (*(unsigned __int16 *)(v1 + 8) | *(unsigned __int16 *)(v1 + 10)) )
    {
      result = *(unsigned __int8 *)(a1 + 793);
      if ( (_BYTE)result )
      {
        result = (unsigned int)(1LL << *(_BYTE *)(v1 + 12)) - 1;
        v4 = result ^ (*(unsigned __int16 *)(v1 + 8) | *(unsigned __int16 *)(v1 + 10));
        v5 = !_BitScanForward(&v6, v4);
        v43 = v6;
        while ( !v5 )
        {
          v4 &= v4 - 1;
          result = v6;
          v7 = 88LL * v6 + v1;
          v8 = (__int64 *)(v7 + 16);
          if ( *(_BYTE *)(v7 + 25) || *(_DWORD *)(v7 + 96) )
            goto LABEL_43;
          v9 = *v8 & 0x7FFFFFFFFFFFFFFCLL;
          if ( *(char *)(v7 + 24) < 0 )
          {
            v25 = *(_QWORD *)(*(_QWORD *)(v7 - 88LL * (*(_BYTE *)(v7 + 24) & 0x3F)) + 544LL);
            v26 = 24LL * ((unsigned int)(v9 >> 4) % *(_DWORD *)(v25 + 96));
            Tree[0] = (PRTL_RB_TREE)(v26 + *(_QWORD *)(v25 + 88));
            v11 = (_RTL_RB_TREE *)(v26 + *(_QWORD *)(v25 + 88) + 16LL);
          }
          else
          {
            v10 = (((*v8 & 0x7FFFFFFFFFFFFFFCuLL) >> 4) & 0x3FF) << 6;
            Tree[0] = (PRTL_RB_TREE)((char *)&KiAbTreeArray + v10);
            v11 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v10 + 16);
          }
          Tree[1] = v11;
          if ( (*(_BYTE *)(v7 + 27) & 1) != 0 )
            v12 = 2;
          else
            v12 = 0;
          for ( i = v12 | v42 & 0xFD; ; i = v42 | 2 )
          {
            LOBYTE(v42) = i;
            if ( (i & 2) != 0 )
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v11);
            else
              ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)v11);
            v15 = v42 | 1;
            LOBYTE(v42) = v42 | 1;
            if ( (*(_BYTE *)(v7 + 27) & 1) != 0 )
            {
              v16 = v7 + 16;
              goto LABEL_16;
            }
            Min = Tree[0]->Min;
            if ( ((unsigned __int8)Min & 1) != 0 )
            {
              if ( !Tree[0]->Root )
                goto LABEL_69;
              Root = (__int64)Tree[0] ^ (__int64)Tree[0]->Root;
            }
            else
            {
              Root = (__int64)Tree[0]->Root;
            }
            v14 = (__int64)Tree[0]->Min & 1;
            if ( Root )
            {
              while ( 1 )
              {
                v35 = *(_QWORD *)(Root - 16) & 0x7FFFFFFFFFFFFFFCLL;
                if ( v35 < v9 )
                {
                  v36 = *(_QWORD *)(Root + 8);
                  if ( ((unsigned __int8)Min & 1) != 0 && v36 )
                    goto LABEL_88;
                }
                else
                {
                  if ( v35 <= v9 )
                    goto LABEL_67;
                  v36 = *(_QWORD *)Root;
                  if ( ((unsigned __int8)Min & 1) != 0 && v36 )
                  {
LABEL_88:
                    Root ^= v36;
                    goto LABEL_66;
                  }
                }
                Root = v36;
LABEL_66:
                if ( !Root )
                {
LABEL_67:
                  v15 = v42;
                  if ( Root )
                  {
                    v16 = Root - 16;
                    goto LABEL_70;
                  }
                  break;
                }
              }
            }
LABEL_69:
            v16 = 0LL;
LABEL_70:
            if ( (__int64 *)v16 != v8 )
              goto LABEL_17;
LABEL_16:
            if ( (v15 & 2) != 0 )
              goto LABEL_17;
            if ( ExTryConvertSharedSpinLockExclusive((PEX_SPIN_LOCK)Tree[1]) )
              break;
            LOBYTE(v42) = v42 & 0xFE;
            if ( (v42 & 2) == 0 )
            {
LABEL_79:
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
              goto LABEL_80;
            }
LABEL_82:
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
LABEL_80:
            v11 = Tree[1];
          }
          v15 = v42 | 2;
          LOBYTE(v42) = v42 | 2;
LABEL_17:
          if ( v16 )
          {
            *(_QWORD *)&v40 = 0LL;
            *((_QWORD *)&v40 + 1) = v16 + 72;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
            {
              v17 = _InterlockedExchange64((volatile __int64 *)(v16 + 72), (__int64)&v40);
              if ( v17 )
                KxWaitForLockOwnerShip(&v40, v17);
            }
            else
            {
              KiAcquireQueuedSpinLockInstrumented(&v40, v16 + 72);
            }
            v18 = v42 | 4;
            LOBYTE(v42) = v42 | 4;
            if ( (*(_BYTE *)(v7 + 27) & 1) == 0 )
            {
              LOBYTE(v42) = v18 & 0xFE;
              if ( (v18 & 2) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
              else
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
            }
            goto LABEL_22;
          }
          if ( (v15 & 2) != 0 )
            goto LABEL_22;
          if ( !ExTryConvertSharedSpinLockExclusive((PEX_SPIN_LOCK)Tree[1]) )
          {
            LOBYTE(v42) = v42 & 0xFE;
            if ( (v42 & 2) == 0 )
              goto LABEL_79;
            goto LABEL_82;
          }
          LOBYTE(v42) = v42 | 2;
LABEL_22:
          *((_QWORD *)&v41 + 1) = v16;
          if ( !*(_DWORD *)(v7 + 96) && *v8 < 0 )
          {
            v38 = 0LL;
            v37 = 0LL;
            if ( (__int64 *)v16 != v8 )
            {
              *(_BYTE *)(v7 + 23) &= ~0x80u;
              if ( *(_BYTE *)(v7 + 25) )
                KiAbTryDecrementIoWaiterCounts(v8, v16, v14, v16 + 56, v37, *((_QWORD *)&v37 + 1), v38);
              else
                v27 = (_RTL_RB_TREE *)(v16 + 40);
              RtlRbRemoveNode(v27, (PRTL_BALANCED_NODE)(v7 + 32));
              goto LABEL_38;
            }
            v19 = (_RTL_RB_TREE *)(v16 + 56);
            if ( *(_QWORD *)(v16 + 56) || (v19 = (_RTL_RB_TREE *)(v16 + 40), *(_QWORD *)(v16 + 40)) )
            {
              v20 = (_RTL_BALANCED_NODE *)(v7 + 32);
              if ( v19 )
              {
                v28 = v19->Root;
                RtlRbRemoveNode(v19, v19->Root);
                RtlRbReplaceNode(Tree[0], v7 + 32, v28);
                *(_QWORD *)&v37 = 0LL;
                *((_QWORD *)&v37 + 1) = (char *)v28 + 56;
                KxAcquireQueuedSpinLock(&v37, &v28[2].Right);
                v31 = v42;
                if ( (v42 & 1) != 0 )
                {
                  LOBYTE(v42) = v42 & 0xFE;
                  if ( (v31 & 2) != 0 )
                    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
                  else
                    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
                  LOBYTE(v42) = v42 & 0xFD;
                }
                v28[1].0 = *($19FDA19D2597B539B3A13693B0B4DE4A *)(v7 + 56);
                *(_OWORD *)&v28[1].0 = *(_OWORD *)(v7 + 72);
                BYTE4(v28[2].ParentValue) = *(_BYTE *)(v7 + 100);
                HIDWORD(v28[2].ParentValue) ^= (*(_DWORD *)(v7 + 100) ^ HIDWORD(v28[2].ParentValue)) & 0x7F00;
                KiAbTryDecrementIoWaiterCounts(v8, &v28[-1].Right, v29, v30, v37, *((_QWORD *)&v37 + 1), v38);
                BYTE3(v28[-1].ParentValue) |= 1u;
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&v37, v32);
                goto LABEL_37;
              }
            }
            else
            {
              v20 = (_RTL_BALANCED_NODE *)(v7 + 32);
            }
            RtlRbRemoveNode(Tree[0], v20);
            v22 = v42;
            if ( (v42 & 1) != 0 )
            {
              LOBYTE(v42) = v42 & 0xFE;
              if ( (v22 & 2) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
              else
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
              LOBYTE(v42) = v42 & 0xFD;
            }
            if ( (*(_BYTE *)(v16 + 11) & 2) != 0 )
            {
              --*(_BYTE *)(v16 + 84);
              *(_BYTE *)(v16 + 11) &= ~2u;
            }
            if ( (*(_BYTE *)(v16 + 11) & 4) != 0 )
            {
              *(_DWORD *)(v16 + 84) ^= ((unsigned __int16)*(_DWORD *)(v16 + 84) ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)(v16 + 84) >> 8) - 1) << 8)) & 0x7F00;
              *(_BYTE *)(v16 + 11) &= ~4u;
            }
LABEL_37:
            *(_BYTE *)(v7 + 23) &= ~0x80u;
            *(_BYTE *)(v7 + 27) &= ~1u;
LABEL_38:
            v23 = v42;
            if ( (v42 & 4) != 0 )
            {
              LOBYTE(v42) = v42 & 0xFB;
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&v40, v21);
              v23 = v42;
            }
            if ( (v23 & 1) != 0 )
            {
              LOBYTE(v42) = v23 & 0xFE;
              if ( (v23 & 2) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
              else
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
              LOBYTE(v42) = v42 & 0xFD;
            }
            *((_QWORD *)&v41 + 1) = 0LL;
            _InterlockedDecrement8((volatile signed __int8 *)(*(_QWORD *)(v7 - 88LL * (*(_BYTE *)(v7 + 24) & 0x3F))
                                                            + 793LL
                                                            - (*(_BYTE *)(v7 + 25) != 0)));
            *v8 = 0LL;
            result = (unsigned __int8)(1 << (*(_BYTE *)(v7 + 24) & 0x3F));
            *(_WORD *)(v1 + 8) |= result;
            v24 = *(_QWORD *)(a1 + 800);
            if ( v24 )
            {
              v44 = *(_QWORD *)(v24 + 8LL * v43);
              HIBYTE(v44) &= ~0x80u;
              result = v44;
              *(_QWORD *)(v24 + 8LL * v43) = v44;
            }
            goto LABEL_43;
          }
          result = KiAbReleaseLocksForEntry(Tree);
LABEL_43:
          v5 = !_BitScanForward(&v6, v4);
          v43 = v6;
        }
      }
    }
  }
  return result;
}
