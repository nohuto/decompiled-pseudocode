/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x14022DEF0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x140229A50 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403D6820 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     KiAbThreadInsertList @ 0x14027EA80 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int8 v27; // bp
  struct _KPRCB *CurrentPrcb; // r14
  struct _EX_RUNDOWN_REF *v29; // rcx
  unsigned __int64 v30; // rtt
  __int128 v31; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (unsigned int)a3;
  v31 = 0LL;
  v32 = 0LL;
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
      *((_QWORD *)&v31 + 1) = a1 + 96;
      *(_QWORD *)&v31 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      LOBYTE(v32) = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v14 = _InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&v31);
        if ( v14 )
          KxWaitForLockOwnerShip(&v31, v14);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&v31, a1 + 96);
      }
      v15 = a1 + 48;
      if ( *(_QWORD *)(a1 + 48) != a2 )
      {
        v16 = *(_QWORD *)(a1 + 48) != 0LL;
        if ( !(_DWORD)v4
          || (v26 = *(_QWORD *)(a1 + 16)) == 0
          || (unsigned int)v4 >= *(_DWORD *)(v26 + 8)
          || (v15 = v26 + 16 * v4, *(_QWORD *)v15 != a2) )
        {
          v17 = *(_QWORD *)(a1 + 16);
          a4 = v17;
          v18 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
          if ( v17 && (a3 = v17 + 16LL * *(unsigned int *)(v17 + 8), v15 = v17 + 16, v16 < v18) )
          {
            while ( *(_QWORD *)v15 != a2 )
            {
              if ( !*(_QWORD *)v15 || (++v16, v16 != v18) )
              {
                v15 += 16LL;
                if ( v15 != a3 )
                  continue;
              }
              goto LABEL_19;
            }
            KeGetCurrentThread()->ResourceIndex = (v15 - a4) >> 4;
          }
          else
          {
LABEL_19:
            v15 = 0LL;
          }
        }
      }
      if ( (v12 & 4) != 0 )
      {
        if ( (*(_DWORD *)(v15 + 8) & 1) != 0 )
        {
          v12 &= ~4u;
        }
        else
        {
          PsBoostThreadIoEx(a2, 0LL, 0LL, 0LL);
          *(_DWORD *)(v15 + 8) |= 1u;
        }
      }
      if ( (v12 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v15 + 8) & 4) != 0 )
        {
          v12 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 1508)) == 1 && *(_BYTE *)(a2 + 792) )
          {
            v27 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(v27, 2LL);
            CurrentPrcb = KeGetCurrentPrcb();
            if ( (unsigned int)KiAbThreadInsertList(a2, &CurrentPrcb->AbPropagateBoostsList, a2 + 808) )
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
            __writecr8(v27);
          }
          *(_DWORD *)(v15 + 8) |= 4u;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(&v31, retaddr);
LABEL_29:
        v19 = (unsigned __int8)v32;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v32);
        __writecr8(v19);
        if ( v12 )
        {
          if ( (v12 & 4) != 0 )
            IoBoostThreadIoPriority(a2, 2LL);
          if ( (v12 & 2) != 0 )
          {
            if ( *(_DWORD *)(a2 + 1512) )
            {
              v20 = IopIoRateExtensionHost;
              if ( IopIoRateExtensionHost )
              {
                if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88))
                  && *(_QWORD *)(v20 + 96) )
                {
                  guard_dispatch_icall_no_overrides(a2, v21, v22, v23);
                  v29 = (struct _EX_RUNDOWN_REF *)(IopIoRateExtensionHost + 88);
                  _m_prefetchw((const void *)(IopIoRateExtensionHost + 88));
                  v30 = v29->Count & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( v30 != _InterlockedCompareExchange64((volatile signed __int64 *)v29, v30 - 2, v30) )
                    ExfReleaseRundownProtection(v29);
                }
              }
            }
          }
        }
        return;
      }
      _m_prefetchw(&v31);
      v24 = v31;
      if ( !(_QWORD)v31 )
      {
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v31 + 1),
                           0LL,
                           (signed __int64)&v31) == &v31 )
          goto LABEL_29;
        v24 = KxWaitForLockChainValid(&v31);
      }
      *(_QWORD *)&v31 = 0LL;
      v25 = *((_QWORD *)&v31 + 1);
      if ( (((unsigned __int8)v25 ^ (unsigned __int8)_InterlockedExchange64(
                                                       (volatile __int64 *)(v24 + 8),
                                                       *((__int64 *)&v31 + 1))) & 4) != 0 )
        KeWakeAddressAll(v24 + 8, v25, a3, a4);
      goto LABEL_29;
    }
  }
}
