/*
 * XREFs of KiAbProcessPostContextSwitch @ 0x14031ECF0
 * Callers:
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402FCD10 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KxAcquireQueuedSpinLock @ 0x140301310 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbReleaseLocksForEntry @ 0x14041ABB4 (KiAbReleaseLocksForEntry.c)
 *     RtlRbReplaceNode @ 0x14041AC10 (RtlRbReplaceNode.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x14041ACF0 (KiAbTryDecrementIoWaiterCounts.c)
 */

__int64 __fastcall KiAbProcessPostContextSwitch(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  unsigned int v4; // r14d
  bool v5; // zf
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 *v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  _RTL_RB_TREE *v13; // rcx
  char v14; // dl
  char i; // al
  _RTL_BALANCED_NODE *Min; // r8
  char v17; // dl
  __int64 v18; // rbx
  struct _KPRCB **v19; // rdx
  char v20; // cl
  _RTL_RB_TREE *v21; // rcx
  _RTL_BALANCED_NODE *v22; // rsi
  char v23; // al
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  _RTL_RB_TREE *v27; // r9
  __int64 Root; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  _RTL_BALANCED_NODE *v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // al
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+28h] [rbp-29h] BYREF
  PRTL_RB_TREE Tree[2]; // [rsp+40h] [rbp-11h] BYREF
  _BYTE LockHandle[32]; // [rsp+50h] [rbp-1h] BYREF
  __int64 v38; // [rsp+70h] [rbp+1Fh]
  unsigned int v39; // [rsp+B8h] [rbp+67h]
  __int64 v40; // [rsp+C0h] [rbp+6Fh]

  v1 = *(_QWORD *)(a1 + 1144);
  result = 0LL;
  v38 = 0LL;
  *(_OWORD *)Tree = 0LL;
  memset(LockHandle, 0, sizeof(LockHandle));
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
        v39 = v6;
        if ( !v5 )
        {
          v7 = (__int64)&KiAbTreeArray;
          do
          {
            v4 &= v4 - 1;
            result = v6;
            v8 = 88LL * v6 + v1;
            v9 = (__int64 *)(v8 + 16);
            if ( *(_BYTE *)(v8 + 25) || *(_DWORD *)(v8 + 96) )
              goto LABEL_45;
            v10 = *v9 & 0x7FFFFFFFFFFFFFFCLL;
            if ( *(char *)(v8 + 24) < 0 )
            {
              v26 = *(_QWORD *)(*(_QWORD *)(v8 - 88LL * (*(_BYTE *)(v8 + 24) & 0x3F)) + 544LL);
              v7 = 24LL * ((unsigned int)(v10 >> 4) % *(_DWORD *)(v26 + 96));
              Tree[0] = (PRTL_RB_TREE)(v7 + *(_QWORD *)(v26 + 88));
              v12 = *(_QWORD *)(v26 + 88) + 16LL;
            }
            else
            {
              v11 = (((*v9 & 0x7FFFFFFFFFFFFFFCuLL) >> 4) & 0x3FF) << 6;
              Tree[0] = (PRTL_RB_TREE)((char *)&KiAbTreeArray + v11);
              v12 = v11 + 16;
            }
            v13 = (_RTL_RB_TREE *)(v7 + v12);
            Tree[1] = v13;
            if ( (*(_BYTE *)(v8 + 27) & 1) != 0 )
              v14 = 2;
            else
              v14 = 0;
            for ( i = v14 | v38 & 0xFD; ; i = v38 | 2 )
            {
              LOBYTE(v38) = i;
              if ( (i & 2) != 0 )
                ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v13);
              else
                ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)v13);
              v17 = v38 | 1;
              LOBYTE(v38) = v38 | 1;
              if ( (*(_BYTE *)(v8 + 27) & 1) == 0 )
              {
                Min = Tree[0]->Min;
                if ( ((unsigned __int8)Min & 1) != 0 )
                {
                  if ( !Tree[0]->Root )
                    goto LABEL_71;
                  Root = (__int64)Tree[0] ^ (__int64)Tree[0]->Root;
                }
                else
                {
                  Root = (__int64)Tree[0]->Root;
                }
                if ( !Root )
                {
LABEL_71:
                  v18 = 0LL;
LABEL_72:
                  if ( (__int64 *)v18 != v9 )
                    goto LABEL_18;
                  goto LABEL_17;
                }
                while ( 2 )
                {
                  v29 = *(_QWORD *)(Root - 16) & 0x7FFFFFFFFFFFFFFCLL;
                  if ( v29 < v10 )
                  {
                    v30 = *(_QWORD *)(Root + 8);
                    if ( ((unsigned __int8)Min & 1) == 0 || !v30 )
                      goto LABEL_60;
                  }
                  else
                  {
                    if ( v29 <= v10 )
                      goto LABEL_62;
                    v30 = *(_QWORD *)Root;
                    if ( ((unsigned __int8)Min & 1) == 0 || !v30 )
                    {
LABEL_60:
                      Root = v30;
                      goto LABEL_61;
                    }
                  }
                  Root ^= v30;
LABEL_61:
                  if ( !Root )
                  {
LABEL_62:
                    v17 = v38;
                    if ( Root )
                    {
                      v18 = Root - 16;
                      goto LABEL_72;
                    }
                    goto LABEL_71;
                  }
                  continue;
                }
              }
              v18 = v8 + 16;
LABEL_17:
              if ( (v17 & 2) == 0 )
              {
                if ( !ExTryConvertSharedSpinLockExclusive((PEX_SPIN_LOCK)Tree[1]) )
                {
                  LOBYTE(v38) = v38 & 0xFE;
                  if ( (v38 & 2) != 0 )
                    goto LABEL_98;
                  goto LABEL_99;
                }
                v17 = v38 | 2;
                LOBYTE(v38) = v38 | 2;
              }
LABEL_18:
              if ( v18 )
                break;
              if ( (v17 & 2) != 0 )
                goto LABEL_23;
              if ( ExTryConvertSharedSpinLockExclusive((PEX_SPIN_LOCK)Tree[1]) )
              {
                LOBYTE(v38) = v38 | 2;
                goto LABEL_23;
              }
              LOBYTE(v38) = v38 & 0xFE;
              if ( (v38 & 2) != 0 )
              {
LABEL_98:
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
                goto LABEL_100;
              }
LABEL_99:
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
LABEL_100:
              v13 = Tree[1];
            }
            *(_QWORD *)&LockHandle[8] = v18 + 72;
            *(_QWORD *)LockHandle = 0LL;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
            {
              v19 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)(v18 + 72), (__int64)LockHandle);
              if ( v19 )
                KxWaitForLockOwnerShip((struct _KPRCB *)LockHandle, v19);
            }
            else
            {
              KiAcquireQueuedSpinLockInstrumented((__int64)LockHandle, (volatile __int64 *)(v18 + 72));
            }
            v20 = v38 | 4;
            LOBYTE(v38) = v38 | 4;
            if ( (*(_BYTE *)(v8 + 27) & 1) == 0 )
            {
              LOBYTE(v38) = v20 & 0xFE;
              if ( (v20 & 2) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
              else
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
            }
LABEL_23:
            *(_QWORD *)&LockHandle[24] = v18;
            if ( !*(_DWORD *)(v8 + 96) && *v9 < 0 )
            {
              memset(&v35, 0, sizeof(v35));
              if ( (__int64 *)v18 != v9 )
              {
                *(_BYTE *)(v8 + 23) &= ~0x80u;
                if ( *(_BYTE *)(v8 + 25) )
                  KiAbTryDecrementIoWaiterCounts(
                    v9,
                    v18,
                    Min,
                    v18 + 56,
                    v35.LockQueue.Next,
                    v35.LockQueue.Lock,
                    *(_QWORD *)&v35.OldIrql);
                else
                  v27 = (_RTL_RB_TREE *)(v18 + 40);
                RtlRbRemoveNode(v27, (PRTL_BALANCED_NODE)(v8 + 32));
                goto LABEL_39;
              }
              v21 = (_RTL_RB_TREE *)(v18 + 56);
              if ( *(_QWORD *)(v18 + 56) || (v21 = (_RTL_RB_TREE *)(v18 + 40), *(_QWORD *)(v18 + 40)) )
              {
                v22 = (_RTL_BALANCED_NODE *)(v8 + 32);
                if ( v21 )
                {
                  v31 = v21->Root;
                  RtlRbRemoveNode(v21, v21->Root);
                  RtlRbReplaceNode(Tree[0], v8 + 32, v31);
                  v35.LockQueue.Lock = (unsigned __int64 *volatile)&v31[2].Children[1];
                  v35.LockQueue.Next = 0LL;
                  KxAcquireQueuedSpinLock((struct _KPRCB *)&v35, (volatile __int64 *)&v31[2].Children[1]);
                  v34 = v38;
                  if ( (v38 & 1) != 0 )
                  {
                    LOBYTE(v38) = v38 & 0xFE;
                    if ( (v34 & 2) != 0 )
                      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
                    else
                      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
                    LOBYTE(v38) = v38 & 0xFD;
                  }
                  v31[1].0 = *($19FDA19D2597B539B3A13693B0B4DE4A *)(v8 + 56);
                  *(_OWORD *)&v31[1].0 = *(_OWORD *)(v8 + 72);
                  BYTE4(v31[2].ParentValue) = *(_BYTE *)(v8 + 100);
                  HIDWORD(v31[2].ParentValue) ^= (*(_DWORD *)(v8 + 100) ^ HIDWORD(v31[2].ParentValue)) & 0x7F00;
                  KiAbTryDecrementIoWaiterCounts(
                    v9,
                    &v31[-1].Right,
                    v32,
                    v33,
                    v35.LockQueue.Next,
                    v35.LockQueue.Lock,
                    *(_QWORD *)&v35.OldIrql);
                  BYTE3(v31[-1].ParentValue) |= 1u;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
                  goto LABEL_38;
                }
              }
              else
              {
                v22 = (_RTL_BALANCED_NODE *)(v8 + 32);
              }
              RtlRbRemoveNode(Tree[0], v22);
              v23 = v38;
              if ( (v38 & 1) != 0 )
              {
                LOBYTE(v38) = v38 & 0xFE;
                if ( (v23 & 2) != 0 )
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
                else
                  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
                LOBYTE(v38) = v38 & 0xFD;
              }
              if ( (*(_BYTE *)(v18 + 11) & 2) != 0 )
              {
                --*(_BYTE *)(v18 + 84);
                *(_BYTE *)(v18 + 11) &= ~2u;
              }
              if ( (*(_BYTE *)(v18 + 11) & 4) != 0 )
              {
                *(_DWORD *)(v18 + 84) ^= ((unsigned __int16)*(_DWORD *)(v18 + 84) ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)(v18 + 84) >> 8) - 1) << 8)) & 0x7F00;
                *(_BYTE *)(v18 + 11) &= ~4u;
              }
LABEL_38:
              *(_BYTE *)(v8 + 23) &= ~0x80u;
              *(_BYTE *)(v8 + 27) &= ~1u;
LABEL_39:
              v24 = v38;
              if ( (v38 & 4) != 0 )
              {
                LOBYTE(v38) = v38 & 0xFB;
                KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)LockHandle);
                v24 = v38;
              }
              if ( (v24 & 1) != 0 )
              {
                LOBYTE(v38) = v24 & 0xFE;
                if ( (v24 & 2) != 0 )
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
                else
                  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)Tree[1]);
                LOBYTE(v38) = v38 & 0xFD;
              }
              *(_QWORD *)&LockHandle[24] = 0LL;
              _InterlockedDecrement8((volatile signed __int8 *)(*(_QWORD *)(v8 - 88LL * (*(_BYTE *)(v8 + 24) & 0x3F))
                                                              + 793LL
                                                              - (*(_BYTE *)(v8 + 25) != 0)));
              *v9 = 0LL;
              result = (unsigned __int8)(1 << (*(_BYTE *)(v8 + 24) & 0x3F));
              *(_WORD *)(v1 + 8) |= result;
              v25 = *(_QWORD *)(a1 + 800);
              if ( v25 )
              {
                v40 = *(_QWORD *)(v25 + 8LL * v39);
                HIBYTE(v40) &= ~0x80u;
                result = v40;
                *(_QWORD *)(v25 + 8LL * v39) = v40;
              }
              goto LABEL_44;
            }
            result = KiAbReleaseLocksForEntry(Tree);
LABEL_44:
            v7 = (__int64)&KiAbTreeArray;
LABEL_45:
            v5 = !_BitScanForward(&v6, v4);
            v39 = v6;
          }
          while ( !v5 );
        }
      }
    }
  }
  return result;
}
