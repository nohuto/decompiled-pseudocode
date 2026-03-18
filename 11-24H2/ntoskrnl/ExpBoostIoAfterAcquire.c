/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x140278960
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402744C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403E8C80 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int16 v7; // ax
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  unsigned __int8 CurrentIrql; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int8 v26; // bp
  struct _KDPC *CurrentPrcb; // r14
  struct _EX_RUNDOWN_REF *v28; // rcx
  unsigned __int64 v29; // rtt
  __int128 v30; // [rsp+20h] [rbp-48h] BYREF
  __int64 v31; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (unsigned int)a3;
  v30 = 0LL;
  v31 = 0LL;
  v7 = *(_WORD *)(a1 + 26);
  if ( (v7 & 8) == 0 )
  {
    v8 = 0;
    if ( (v7 & 4) != 0 )
    {
      v9 = (*(_DWORD *)(a2 + 1440) >> 9) & 7;
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 544) + 672LL);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 1084);
        if ( v9 >= v11 )
          v9 = v11;
      }
      if ( v9 < 2 )
        v8 = 4;
    }
    v12 = v8 | 2;
    if ( (*(_BYTE *)(a1 + 26) & 2) == 0 )
      v12 = v8;
    if ( v12 )
    {
      *((_QWORD *)&v30 + 1) = a1 + 96;
      *(_QWORD *)&v30 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      LOBYTE(v31) = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&v30) )
          KxWaitForLockOwnerShip(&v30);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&v30, a1 + 96);
      }
      v14 = a1 + 48;
      if ( *(_QWORD *)(a1 + 48) != a2 )
      {
        v15 = *(_QWORD *)(a1 + 48) != 0LL;
        if ( !(_DWORD)v4
          || (v25 = *(_QWORD *)(a1 + 16)) == 0
          || (unsigned int)v4 >= *(_DWORD *)(v25 + 8)
          || (v14 = v25 + 16 * v4, *(_QWORD *)v14 != a2) )
        {
          v16 = *(_QWORD *)(a1 + 16);
          a4 = v16;
          v17 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
          if ( v16 && (a3 = v16 + 16LL * *(unsigned int *)(v16 + 8), v14 = v16 + 16, v15 < v17) )
          {
            while ( *(_QWORD *)v14 != a2 )
            {
              if ( !*(_QWORD *)v14 || (++v15, v15 != v17) )
              {
                v14 += 16LL;
                if ( v14 != a3 )
                  continue;
              }
              goto LABEL_19;
            }
            KeGetCurrentThread()->ResourceIndex = (v14 - a4) >> 4;
          }
          else
          {
LABEL_19:
            v14 = 0LL;
          }
        }
      }
      if ( (v12 & 4) != 0 )
      {
        if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
        {
          v12 &= ~4u;
        }
        else
        {
          PsBoostThreadIoEx(a2, 0, 0LL, 0LL);
          *(_DWORD *)(v14 + 8) |= 1u;
        }
      }
      if ( (v12 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v14 + 8) & 4) != 0 )
        {
          v12 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 1508)) == 1 && *(_BYTE *)(a2 + 792) )
          {
            v26 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(v26, 2LL);
            CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
            if ( (unsigned int)KiAbThreadInsertList(a2, &CurrentPrcb[581].DpcData, (_QWORD *)(a2 + 808)) )
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
            __writecr8(v26);
          }
          *(_DWORD *)(v14 + 8) |= 4u;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(&v30, retaddr);
LABEL_29:
        v18 = (unsigned __int8)v31;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v31);
        __writecr8(v18);
        if ( v12 )
        {
          if ( (v12 & 4) != 0 )
            IoBoostThreadIoPriority(a2, 2LL, 0LL);
          if ( (v12 & 2) != 0 )
          {
            if ( *(_DWORD *)(a2 + 1512) )
            {
              v19 = IopIoRateExtensionHost;
              if ( IopIoRateExtensionHost )
              {
                if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88)) && *(_QWORD *)(v19 + 96) )
                {
                  guard_dispatch_icall_no_overrides(a2, v20, v21, v22);
                  v28 = (struct _EX_RUNDOWN_REF *)(IopIoRateExtensionHost + 88);
                  _m_prefetchw((const void *)(IopIoRateExtensionHost + 88));
                  v29 = v28->Count & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( v29 != _InterlockedCompareExchange64((volatile signed __int64 *)v28, v29 - 2, v29) )
                    ExfReleaseRundownProtection(v28);
                }
              }
            }
          }
        }
        return;
      }
      _m_prefetchw(&v30);
      v23 = v30;
      if ( !(_QWORD)v30 )
      {
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v30 + 1),
                           0LL,
                           (signed __int64)&v30) == &v30 )
          goto LABEL_29;
        v23 = KxWaitForLockChainValid(&v30);
      }
      *(_QWORD *)&v30 = 0LL;
      v24 = *((_QWORD *)&v30 + 1);
      if ( (((unsigned __int8)v24 ^ (unsigned __int8)_InterlockedExchange64(
                                                       (volatile __int64 *)(v23 + 8),
                                                       *((__int64 *)&v30 + 1))) & 4) != 0 )
        KeWakeAddressAll(v23 + 8, v24, a3, a4);
      goto LABEL_29;
    }
  }
}
