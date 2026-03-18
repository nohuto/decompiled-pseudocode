/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x140325DB0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402D8890 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403DF600 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  __int16 v4; // ax
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rax
  int v10; // eax
  int v11; // esi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB **v13; // rdx
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int8 v20; // cl
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // di
  __int64 v24; // rcx
  struct _KPRCB *v25; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  unsigned __int8 v34; // r14
  struct _KDPC *CurrentPrcb; // r15
  struct _EX_RUNDOWN_REF *v36; // rcx
  unsigned __int64 v37; // rtt
  signed __int32 v38[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v39; // [rsp+20h] [rbp-48h] BYREF
  __int64 v40; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v3 = a3;
  v40 = 0LL;
  v4 = *(_WORD *)(a1 + 26);
  v39 = 0LL;
  if ( (v4 & 8) == 0 )
  {
    v7 = 0;
    if ( (v4 & 4) != 0 )
    {
      v8 = (*(_DWORD *)(a2 + 1440) >> 9) & 7;
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 544) + 672LL);
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 + 1084);
        if ( v8 >= v10 )
          v8 = v10;
      }
      if ( v8 < 2 )
        v7 = 4;
    }
    v11 = v7 | 2;
    if ( (*(_BYTE *)(a1 + 26) & 2) == 0 )
      v11 = v7;
    if ( v11 )
    {
      *((_QWORD *)&v39 + 1) = a1 + 96;
      *(_QWORD *)&v39 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      LOBYTE(v40) = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v13 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&v39);
        if ( v13 )
          KxWaitForLockOwnerShip((struct _KPRCB *)&v39, v13);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&v39, (volatile __int64 *)(a1 + 96));
      }
      v14 = a1 + 48;
      if ( *(_QWORD *)(a1 + 48) != a2 )
      {
        v15 = *(_QWORD *)(a1 + 48) != 0LL;
        if ( !(_DWORD)v3
          || (v30 = *(_QWORD *)(a1 + 16)) == 0
          || (unsigned int)v3 >= *(_DWORD *)(v30 + 8)
          || (v14 = v30 + 16 * v3, *(_QWORD *)v14 != a2) )
        {
          v16 = *(_QWORD *)(a1 + 16);
          v17 = v16;
          v18 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
          if ( v16 && (v31 = v16 + 16LL * *(unsigned int *)(v16 + 8), v14 = v16 + 16, v15 < v18) )
          {
            while ( *(_QWORD *)v14 != a2 )
            {
              if ( !*(_QWORD *)v14 || (++v15, v15 != v18) )
              {
                v14 += 16LL;
                if ( v14 != v31 )
                  continue;
              }
              goto LABEL_19;
            }
            KeGetCurrentThread()->ResourceIndex = (v14 - v17) >> 4;
          }
          else
          {
LABEL_19:
            v14 = 0LL;
          }
        }
      }
      if ( (v11 & 4) != 0 )
      {
        if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
        {
          v11 &= ~4u;
        }
        else
        {
          PsBoostThreadIoEx(a2, 0, 0, 0LL);
          *(_DWORD *)(v14 + 8) |= 1u;
        }
      }
      if ( (v11 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v14 + 8) & 4) != 0 )
        {
          v11 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 1508)) == 1 && *(_BYTE *)(a2 + 792) )
          {
            v34 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(v34);
            CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
            if ( (unsigned int)KiAbThreadInsertList(a2, &CurrentPrcb[581].DpcData, (_QWORD *)(a2 + 808)) )
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v34);
            __writecr8(v34);
          }
          *(_DWORD *)(v14 + 8) |= 4u;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v39, retaddr);
        goto LABEL_34;
      }
      _m_prefetchw(&v39);
      v19 = v39;
      if ( !(_QWORD)v39 )
      {
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v39 + 1),
                           0LL,
                           (signed __int64)&v39) == &v39 )
        {
LABEL_34:
          v27 = (unsigned __int8)v40;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v40);
          __writecr8(v27);
          if ( v11 )
          {
            if ( (v11 & 4) != 0 )
              IoBoostThreadIoPriority(a2, 2LL, 0LL);
            if ( (v11 & 2) != 0 )
            {
              if ( *(_DWORD *)(a2 + 1512) )
              {
                v28 = IopIoRateExtensionHost;
                if ( IopIoRateExtensionHost )
                {
                  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88))
                    && *(_QWORD *)(v28 + 96) )
                  {
                    guard_dispatch_icall_no_overrides(a2, v29);
                    v36 = (struct _EX_RUNDOWN_REF *)(IopIoRateExtensionHost + 88);
                    _m_prefetchw((const void *)(IopIoRateExtensionHost + 88));
                    v37 = v36->Count & 0xFFFFFFFFFFFFFFFEuLL;
                    if ( v37 != _InterlockedCompareExchange64((volatile signed __int64 *)v36, v37 - 2, v37) )
                      ExfReleaseRundownProtection(v36);
                  }
                }
              }
            }
          }
          return;
        }
        v19 = KxWaitForLockChainValid((__int64 *)&v39);
      }
      *(_QWORD *)&v39 = 0LL;
      v20 = BYTE8(v39);
      if ( ((v20 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v19 + 8), *((__int64 *)&v39 + 1))) & 4) != 0 )
      {
        _InterlockedOr(v38, 0);
        v23 = KeDisableInterrupts();
        KiHaltOnAddressWakeEntireList(v24, _InterlockedExchange64((volatile __int64 *)(v22 + 8 * v21), 0LL));
        if ( v23 )
        {
          v25 = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)v25->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v32 = *SchedulerAssist;
            do
            {
              v33 = v32;
              v32 = _InterlockedCompareExchange(SchedulerAssist, v32 & 0xFFDFFFFF, v32);
            }
            while ( v33 != v32 );
            if ( (v32 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v25);
          }
          _enable();
        }
      }
      goto LABEL_34;
    }
  }
}
