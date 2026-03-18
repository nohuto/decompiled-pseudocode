/*
 * XREFs of KiAbProcessPostContextSwitch @ 0x14020FA80
 * Callers:
 *     KiDispatchInterrupt @ 0x1402936B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiSwapThread @ 0x1402A6990 (KiSwapThread.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402C40D0 (ExTryConvertSharedSpinLockExclusive.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D6B90 (KxAcquireQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiAbReleaseLocksForEntry @ 0x140417D08 (KiAbReleaseLocksForEntry.c)
 *     RtlRbReplaceNode @ 0x140417D60 (RtlRbReplaceNode.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x140417E40 (KiAbTryDecrementIoWaiterCounts.c)
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
  volatile LONG *v11; // rcx
  char v12; // dl
  char i; // al
  __int64 v14; // r8
  char v15; // cl
  __int64 v16; // rbx
  char v17; // cl
  _QWORD *v18; // rcx
  __int64 v19; // rsi
  char v20; // al
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int128 v34; // [rsp+28h] [rbp-29h] BYREF
  __int64 v35; // [rsp+38h] [rbp-19h]
  PEX_SPIN_LOCK SpinLock[2]; // [rsp+40h] [rbp-11h] BYREF
  __int128 v37; // [rsp+50h] [rbp-1h] BYREF
  __int128 v38; // [rsp+60h] [rbp+Fh]
  __int64 v39; // [rsp+70h] [rbp+1Fh]
  unsigned int v40; // [rsp+B8h] [rbp+67h]
  __int64 v41; // [rsp+C0h] [rbp+6Fh]

  v1 = *(_QWORD *)(a1 + 1144);
  result = 0LL;
  v39 = 0LL;
  *(_OWORD *)SpinLock = 0LL;
  v37 = 0LL;
  v38 = 0LL;
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
        v40 = v6;
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
            v23 = *(_QWORD *)(*(_QWORD *)(v7 - 88LL * (*(_BYTE *)(v7 + 24) & 0x3F)) + 544LL);
            v24 = 24LL * ((unsigned int)(v9 >> 4) % *(_DWORD *)(v23 + 96));
            SpinLock[0] = (PEX_SPIN_LOCK)(v24 + *(_QWORD *)(v23 + 88));
            v11 = (volatile LONG *)(v24 + *(_QWORD *)(v23 + 88) + 16LL);
          }
          else
          {
            v10 = (((*v8 & 0x7FFFFFFFFFFFFFFCuLL) >> 4) & 0x3FF) << 6;
            SpinLock[0] = (PEX_SPIN_LOCK)((char *)&KiAbTreeArray + v10);
            v11 = (volatile LONG *)((char *)&KiAbTreeArray + v10 + 16);
          }
          SpinLock[1] = v11;
          if ( (*(_BYTE *)(v7 + 27) & 1) != 0 )
            v12 = 2;
          else
            v12 = 0;
          for ( i = v12 | v39 & 0xFD; ; i = v39 | 2 )
          {
            LOBYTE(v39) = i;
            if ( (i & 2) != 0 )
              ExAcquireSpinLockExclusiveAtDpcLevel(v11);
            else
              ExAcquireSpinLockSharedAtDpcLevel(v11);
            v15 = v39 | 1;
            LOBYTE(v39) = v39 | 1;
            if ( (*(_BYTE *)(v7 + 27) & 1) != 0 )
            {
              v16 = v7 + 16;
              goto LABEL_16;
            }
            v30 = *((_QWORD *)SpinLock[0] + 1);
            if ( (v30 & 1) != 0 )
            {
              if ( !*(_QWORD *)SpinLock[0] )
                goto LABEL_69;
              v31 = (__int64)SpinLock[0] ^ *(_QWORD *)SpinLock[0];
            }
            else
            {
              v31 = *(_QWORD *)SpinLock[0];
            }
            v14 = *((_QWORD *)SpinLock[0] + 1) & 1LL;
            if ( v31 )
            {
              while ( 1 )
              {
                v32 = *(_QWORD *)(v31 - 16) & 0x7FFFFFFFFFFFFFFCLL;
                if ( v32 < v9 )
                {
                  v33 = *(_QWORD *)(v31 + 8);
                  if ( (v30 & 1) != 0 && v33 )
                    goto LABEL_88;
                }
                else
                {
                  if ( v32 <= v9 )
                    goto LABEL_67;
                  v33 = *(_QWORD *)v31;
                  if ( (v30 & 1) != 0 && v33 )
                  {
LABEL_88:
                    v31 ^= v33;
                    goto LABEL_66;
                  }
                }
                v31 = v33;
LABEL_66:
                if ( !v31 )
                {
LABEL_67:
                  v15 = v39;
                  if ( v31 )
                  {
                    v16 = v31 - 16;
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
            if ( ExTryConvertSharedSpinLockExclusive(SpinLock[1]) )
              break;
            LOBYTE(v39) = v39 & 0xFE;
            if ( (v39 & 2) == 0 )
            {
LABEL_79:
              ExReleaseSpinLockSharedFromDpcLevel(SpinLock[1]);
              goto LABEL_80;
            }
LABEL_82:
            ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock[1]);
LABEL_80:
            v11 = SpinLock[1];
          }
          v15 = v39 | 2;
          LOBYTE(v39) = v39 | 2;
LABEL_17:
          if ( v16 )
          {
            *(_QWORD *)&v37 = 0LL;
            *((_QWORD *)&v37 + 1) = v16 + 72;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
            {
              if ( _InterlockedExchange64((volatile __int64 *)(v16 + 72), (__int64)&v37) )
                KxWaitForLockOwnerShip(&v37);
            }
            else
            {
              KiAcquireQueuedSpinLockInstrumented(&v37, v16 + 72);
            }
            v17 = v39 | 4;
            LOBYTE(v39) = v39 | 4;
            if ( (*(_BYTE *)(v7 + 27) & 1) == 0 )
            {
              LOBYTE(v39) = v17 & 0xFE;
              if ( (v17 & 2) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock[1]);
              else
                ExReleaseSpinLockSharedFromDpcLevel(SpinLock[1]);
            }
            goto LABEL_22;
          }
          if ( (v15 & 2) != 0 )
            goto LABEL_22;
          if ( !ExTryConvertSharedSpinLockExclusive(SpinLock[1]) )
          {
            LOBYTE(v39) = v39 & 0xFE;
            if ( (v39 & 2) == 0 )
              goto LABEL_79;
            goto LABEL_82;
          }
          LOBYTE(v39) = v39 | 2;
LABEL_22:
          *((_QWORD *)&v38 + 1) = v16;
          if ( !*(_DWORD *)(v7 + 96) && *v8 < 0 )
          {
            v35 = 0LL;
            v34 = 0LL;
            if ( (__int64 *)v16 != v8 )
            {
              *(_BYTE *)(v7 + 23) &= ~0x80u;
              if ( *(_BYTE *)(v7 + 25) )
                KiAbTryDecrementIoWaiterCounts(v8, v16, v14, v16 + 56, v34, *((_QWORD *)&v34 + 1), v35);
              else
                v25 = v16 + 40;
              RtlRbRemoveNode(v25, v7 + 32);
              goto LABEL_38;
            }
            v18 = (_QWORD *)(v16 + 56);
            if ( *(_QWORD *)(v16 + 56) || (v18 = (_QWORD *)(v16 + 40), *(_QWORD *)(v16 + 40)) )
            {
              v19 = v7 + 32;
              if ( v18 )
              {
                v26 = *v18;
                RtlRbRemoveNode(v18, *v18);
                RtlRbReplaceNode(SpinLock[0], v7 + 32, v26);
                *(_QWORD *)&v34 = 0LL;
                *((_QWORD *)&v34 + 1) = v26 + 56;
                KxAcquireQueuedSpinLock(&v34);
                v29 = v39;
                if ( (v39 & 1) != 0 )
                {
                  LOBYTE(v39) = v39 & 0xFE;
                  if ( (v29 & 2) != 0 )
                    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock[1]);
                  else
                    ExReleaseSpinLockSharedFromDpcLevel(SpinLock[1]);
                  LOBYTE(v39) = v39 & 0xFD;
                }
                *(_OWORD *)(v26 + 24) = *(_OWORD *)(v7 + 56);
                *(_OWORD *)(v26 + 40) = *(_OWORD *)(v7 + 72);
                *(_BYTE *)(v26 + 68) = *(_BYTE *)(v7 + 100);
                *(_DWORD *)(v26 + 68) ^= (*(_DWORD *)(v7 + 100) ^ *(_DWORD *)(v26 + 68)) & 0x7F00;
                KiAbTryDecrementIoWaiterCounts(v8, v26 - 16, v27, v28, v34, *((_QWORD *)&v34 + 1), v35);
                *(_BYTE *)(v26 - 5) |= 1u;
                KxReleaseQueuedSpinLock(&v34);
                goto LABEL_37;
              }
            }
            else
            {
              v19 = v7 + 32;
            }
            RtlRbRemoveNode(SpinLock[0], v19);
            v20 = v39;
            if ( (v39 & 1) != 0 )
            {
              LOBYTE(v39) = v39 & 0xFE;
              if ( (v20 & 2) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock[1]);
              else
                ExReleaseSpinLockSharedFromDpcLevel(SpinLock[1]);
              LOBYTE(v39) = v39 & 0xFD;
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
            v21 = v39;
            if ( (v39 & 4) != 0 )
            {
              LOBYTE(v39) = v39 & 0xFB;
              KxReleaseQueuedSpinLock(&v37);
              v21 = v39;
            }
            if ( (v21 & 1) != 0 )
            {
              LOBYTE(v39) = v21 & 0xFE;
              if ( (v21 & 2) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock[1]);
              else
                ExReleaseSpinLockSharedFromDpcLevel(SpinLock[1]);
              LOBYTE(v39) = v39 & 0xFD;
            }
            *((_QWORD *)&v38 + 1) = 0LL;
            _InterlockedDecrement8((volatile signed __int8 *)(*(_QWORD *)(v7 - 88LL * (*(_BYTE *)(v7 + 24) & 0x3F))
                                                            + 793LL
                                                            - (*(_BYTE *)(v7 + 25) != 0)));
            *v8 = 0LL;
            result = (unsigned __int8)(1 << (*(_BYTE *)(v7 + 24) & 0x3F));
            *(_WORD *)(v1 + 8) |= result;
            v22 = *(_QWORD *)(a1 + 800);
            if ( v22 )
            {
              v41 = *(_QWORD *)(v22 + 8LL * v40);
              HIBYTE(v41) &= ~0x80u;
              result = v41;
              *(_QWORD *)(v22 + 8LL * v40) = v41;
            }
            goto LABEL_43;
          }
          result = KiAbReleaseLocksForEntry(SpinLock);
LABEL_43:
          v5 = !_BitScanForward(&v6, v4);
          v40 = v6;
        }
      }
    }
  }
  return result;
}
