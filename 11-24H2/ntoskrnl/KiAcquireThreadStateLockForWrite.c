/*
 * XREFs of KiAcquireThreadStateLockForWrite @ 0x1403A0670
 * Callers:
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402D68C4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetThreadSchedulingGroup @ 0x1402D6FE8 (KiSetThreadSchedulingGroup.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140370B7C (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KiSetAffinityThread @ 0x1403A0218 (KiSetAffinityThread.c)
 *     KeUpdateThreadTag @ 0x14046E3F0 (KeUpdateThreadTag.c)
 *     KeSetProcessPpmPolicy @ 0x140475710 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 *     KeSetThreadPpmPolicy @ 0x140486864 (KeSetThreadPpmPolicy.c)
 *     KiUpdateThreadCpuSets @ 0x14048B9CC (KiUpdateThreadCpuSets.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BF948 (KiAdjustCoreIsolationReasonThread.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 */

__int64 __fastcall KiAcquireThreadStateLockForWrite(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        volatile __int64 **a4,
        volatile signed __int64 **a5)
{
  __int64 *v5; // rbp
  volatile signed __int64 **v7; // rbx
  __int64 v8; // r15
  volatile __int64 *v9; // r14
  char v10; // al
  unsigned __int8 v11; // di
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r12
  _BYTE *v20; // rax
  __int64 *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rdi
  unsigned int v24; // ebx
  unsigned __int8 v26; // [rsp+70h] [rbp+8h]

  v5 = a3;
LABEL_2:
  v7 = a5;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = 0LL;
        v26 = *(_BYTE *)(a1 + 388);
        v9 = 0LL;
        if ( v26 != 3 )
          break;
        v19 = *(unsigned int *)(a1 + 536);
        if ( (int)v19 >= 0 )
        {
          v8 = KiProcessorBlock[v19];
          *v5 = v8 | 1;
          v20 = *(_BYTE **)(v8 + 36440);
          v21 = (__int64 *)(v20 + 8);
          if ( *v20 )
          {
            v22 = (unsigned __int8)*v20;
            do
            {
              v23 = *v21;
              v24 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 48), 0LL) )
              {
                do
                {
                  if ( (++v24 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v24);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(_QWORD *)(v23 + 48) );
              }
              ++v21;
              --v22;
            }
            while ( v22 );
            v5 = a3;
          }
          if ( a1 == *(_QWORD *)(v8 + 16) )
            goto LABEL_63;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v19 )
            __fastfail(0x1Eu);
LABEL_15:
          KiReleasePrcbLocksForIsolationUnit(v5);
          v7 = a5;
        }
      }
      if ( v26 != 1 )
      {
        if ( v26 == 2 )
        {
          v11 = *(_BYTE *)(a1 + 388);
        }
        else
        {
          if ( v26 != 5 || (v10 = *(_BYTE *)(a1 + 112) & 7, v10 == 1) || (unsigned __int8)(v10 - 3) <= 3u )
          {
            v11 = *(_BYTE *)(a1 + 388);
            goto LABEL_64;
          }
          v11 = 2;
        }
        v12 = *(unsigned int *)(a1 + 536);
        if ( (int)v12 < 0 )
          goto LABEL_2;
        v8 = KiProcessorBlock[v12];
        KiAcquirePrcbLocksForIsolationUnit(v8, 1LL, (unsigned __int64 *)v5);
        if ( a1 == *(_QWORD *)(v8 + 8) )
          goto LABEL_64;
        if ( *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == (_DWORD)v12 )
          __fastfail(0x4Au);
        goto LABEL_15;
      }
      v13 = *(unsigned int *)(a1 + 536);
      if ( (int)v13 < 0 )
        break;
      v8 = KiProcessorBlock[v13];
      KiAcquirePrcbLocksForIsolationUnit(v8, 0LL, (unsigned __int64 *)v5);
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
        goto LABEL_63;
      KiReleasePrcbLocksForIsolationUnit(v5);
    }
    v14 = (unsigned int)v13;
    LODWORD(v14) = v13 & 0x7FFFFFFF;
    v9 = *(volatile __int64 **)(KiProcessorBlock[v14] + 36424);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      v7[1] = v9;
      *v7 = 0LL;
      v15 = (_QWORD *)_InterlockedExchange64(v9, (__int64)v7);
      if ( v15 )
        KxWaitForLockOwnerShip((__int64)v7, v15);
    }
    else
    {
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      {
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v16);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *v9 );
      }
      v7 = a5;
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw(v7);
      v17 = (__int64)*v7;
      if ( *v7 )
      {
LABEL_36:
        *v7 = 0LL;
        v18 = (__int64)v7[1];
        if ( (((unsigned __int8)v18 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v17 + 8), v18)) & 4) != 0 )
          KeWakeAddressAll(v17 + 8, v18);
      }
      else if ( v7 != (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
      {
        v17 = KxWaitForLockChainValid((__int64 *)v7);
        goto LABEL_36;
      }
    }
    else
    {
      _InterlockedAnd64(v9, 0LL);
    }
  }
  v8 = 0LL;
LABEL_63:
  v11 = v26;
LABEL_64:
  *a2 = v8;
  *a4 = v9;
  return v11;
}
