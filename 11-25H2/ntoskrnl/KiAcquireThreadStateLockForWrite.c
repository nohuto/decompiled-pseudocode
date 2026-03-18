/*
 * XREFs of KiAcquireThreadStateLockForWrite @ 0x140271D50
 * Callers:
 *     KeSetThreadPpmPolicy @ 0x1402005B4 (KeSetThreadPpmPolicy.c)
 *     KeSetProcessPpmPolicy @ 0x140200830 (KeSetProcessPpmPolicy.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140201B78 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KiSetAffinityThread @ 0x140271884 (KiSetAffinityThread.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiSetThreadSchedulingGroup @ 0x1403A9BE8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1403AB9B4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403E8170 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateThreadCpuSets @ 0x140491C8C (KiUpdateThreadCpuSets.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BE298 (KiAdjustCoreIsolationReasonThread.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
  __int64 v10; // rcx
  char v11; // al
  unsigned __int8 v12; // di
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  unsigned __int8 *v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rdi
  unsigned int v26; // ebx
  unsigned __int8 v28; // [rsp+70h] [rbp+8h]

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
        v28 = *(_BYTE *)(a1 + 388);
        v9 = 0LL;
        if ( v28 != 3 )
          break;
        v20 = *(unsigned int *)(a1 + 536);
        if ( (int)v20 >= 0 )
        {
          v8 = KiProcessorBlock[v20];
          *v5 = v8 | 1;
          v21 = *(unsigned __int8 **)(v8 + 36440);
          v22 = *v21;
          v23 = (__int64 *)(v21 + 8);
          if ( (_BYTE)v22 )
          {
            v24 = *v21;
            do
            {
              v25 = *v23;
              v26 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 48), 0LL) )
              {
                do
                {
                  if ( (++v26 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22) )
                  {
                    HvlNotifyLongSpinWait(v26);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(_QWORD *)(v25 + 48) );
              }
              ++v23;
              --v24;
            }
            while ( v24 );
            v5 = a3;
          }
          if ( a1 == *(_QWORD *)(v8 + 16) )
            goto LABEL_63;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v20 )
            __fastfail(0x1Eu);
LABEL_15:
          KiReleasePrcbLocksForIsolationUnit(v5);
          v7 = a5;
        }
      }
      v10 = (unsigned int)v28 - 1;
      if ( v28 != 1 )
      {
        if ( v28 == 2 )
        {
          v12 = *(_BYTE *)(a1 + 388);
        }
        else
        {
          if ( v28 != 5 || (v11 = *(_BYTE *)(a1 + 112) & 7, v11 == 1) || (unsigned __int8)(v11 - 3) <= 3u )
          {
            v12 = *(_BYTE *)(a1 + 388);
            goto LABEL_64;
          }
          v12 = 2;
        }
        v13 = *(unsigned int *)(a1 + 536);
        if ( (int)v13 < 0 )
          goto LABEL_2;
        v8 = KiProcessorBlock[v13];
        KiAcquirePrcbLocksForIsolationUnit(v8, 1LL, v5);
        if ( a1 == *(_QWORD *)(v8 + 8) )
          goto LABEL_64;
        if ( *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
          __fastfail(0x4Au);
        goto LABEL_15;
      }
      v14 = *(unsigned int *)(a1 + 536);
      if ( (int)v14 < 0 )
        break;
      v8 = KiProcessorBlock[v14];
      KiAcquirePrcbLocksForIsolationUnit(v8, 0LL, v5);
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v14 )
        goto LABEL_63;
      KiReleasePrcbLocksForIsolationUnit(v5);
    }
    v15 = (unsigned int)v14;
    LODWORD(v15) = v14 & 0x7FFFFFFF;
    v9 = *(volatile __int64 **)(KiProcessorBlock[v15] + 36424);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      v7[1] = v9;
      *v7 = 0LL;
      v16 = _InterlockedExchange64(v9, (__int64)v7);
      if ( v16 )
        KxWaitForLockOwnerShip(v7, v16, 0LL, KiProcessorBlock);
    }
    else
    {
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
          {
            HvlNotifyLongSpinWait(v17);
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
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v14 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw(v7);
      v18 = (__int64)*v7;
      if ( *v7 )
      {
LABEL_36:
        *v7 = 0LL;
        v19 = (__int64)v7[1];
        if ( (((unsigned __int8)v19 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v18 + 8), v19)) & 4) != 0 )
          KeWakeAddressAll(v18 + 8, v19, 0LL, KiProcessorBlock);
      }
      else if ( v7 != (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
      {
        v18 = KxWaitForLockChainValid(v7);
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
  v12 = v28;
LABEL_64:
  *a2 = v8;
  *a4 = v9;
  return v12;
}
