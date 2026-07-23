/*
 * XREFs of MiReapplyImportOptimizationWorker @ 0x14067D7B0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiApplyDynamicRelocationFixups @ 0x14043A8FC (MiApplyDynamicRelocationFixups.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     MmIsVerifierApplicableToImage @ 0x14067687C (MmIsVerifierApplicableToImage.c)
 */

ULONG_PTR __fastcall MiReapplyImportOptimizationWorker(ULONG_PTR Argument)
{
  __int64 CurrentIrql; // r12
  bool v3; // al
  __int64 v4; // rdx
  __int64 v5; // rbp
  bool v6; // si
  signed __int32 v7; // ecx
  unsigned int v8; // edi
  __int64 v9; // r13
  __int64 v10; // r15
  int IsVerifierApplicableToImage; // edi
  unsigned int v12; // r11d
  __int64 v13; // r8
  __int64 **v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 *i; // rcx
  __int64 j; // rdx
  __int64 v19; // r10
  unsigned int v20; // edi
  unsigned int v21; // ebp
  __int64 v22; // rsi
  unsigned __int16 *v23; // r9
  unsigned int v24; // ebp
  char v25; // r15
  signed __int32 v26; // ecx
  unsigned int v27; // eax
  signed __int32 v28; // edx
  signed __int32 v29; // r8d
  int v30; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  bool v36; // [rsp+80h] [rbp+8h]
  __int32 v37; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v38; // [rsp+90h] [rbp+18h] BYREF
  __int64 v39; // [rsp+98h] [rbp+20h]

  v38 = 0;
  KeGetCurrentIrql();
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v3 = KeDisableInterrupts();
  v5 = *(_QWORD *)(Argument + 24);
  v6 = v3;
  v36 = v3;
  v7 = _InterlockedDecrement((volatile signed __int32 *)Argument);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x3FFFFFFF) != 0 )
  {
    v24 = 0;
    v25 = 0;
    if ( (*(_DWORD *)Argument & 0x80000000) != v8 )
    {
      do
      {
        if ( (++v24 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v25;
          if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v25 & 7) == 0 )
          {
            v26 = *(_DWORD *)Argument;
            v27 = *(_DWORD *)Argument & 0x80000000;
            v37 = *(_DWORD *)Argument;
            if ( v27 != v8 )
            {
              v28 = v26;
              v29 = v26;
              do
              {
                v30 = v26 | 0x40000000;
                v26 = _InterlockedCompareExchange((volatile signed __int32 *)Argument, v26 | 0x40000000, v28);
                if ( v26 == v29 )
                {
                  v37 = v30;
                  do
                  {
                    KiHaltOnAddress((_BYTE *)Argument, &v37, 4LL);
                    v26 = *(_DWORD *)Argument;
                  }
                  while ( *(_DWORD *)Argument == v30 );
                }
                v37 = v26;
                v28 = v26;
                v29 = v26;
              }
              while ( (v26 & 0x80000000) != v8 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v24);
          }
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)Argument & 0x80000000) != v8 );
      v6 = v36;
    }
    while ( !*(_DWORD *)(Argument + 8) )
      KeYieldProcessorEx(&v38);
    IsVerifierApplicableToImage = 0;
  }
  else
  {
    v37 = _InterlockedExchange((volatile __int32 *)Argument, *(_DWORD *)(Argument + 4) | v8);
    if ( (v37 & 0x40000000) != 0 )
      KeWakeAddressAll(Argument, v4);
    v9 = *(_QWORD *)(v5 + 24);
    v10 = *(_QWORD *)(*(_QWORD *)(Argument + 32) + 24LL);
    IsVerifierApplicableToImage = MmIsVerifierApplicableToImage(*(_QWORD *)(Argument + 16));
    if ( IsVerifierApplicableToImage >= 0 )
    {
      v12 = 0;
      if ( *(unsigned int *)(Argument + 48) / 0x18uLL )
      {
        v13 = 0LL;
        v14 = (__int64 **)(Argument + 56);
        do
        {
          v15 = *(_QWORD *)(Argument + 40);
          v16 = *(int *)(v15 + 24 * v13);
          *(_QWORD *)(v15 + 24 * v13 + 16) = *(_QWORD *)(v10 + 8 * v16);
          *(_QWORD *)(v10 + 8 * v16) = *(_QWORD *)(v15 + 24 * v13 + 8);
          for ( i = *v14; i != (__int64 *)v14; i = (__int64 *)*i )
          {
            for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 34) >> 3; j = (unsigned int)(j + 1) )
            {
              v19 = i[16];
              if ( *(_QWORD *)(v19 + 8 * j) == *(_QWORD *)(v15 + 24 * v13 + 16) )
              {
                *(_QWORD *)(v19 + 8 * j) = *(_QWORD *)(v15 + 24 * v13 + 8);
                break;
              }
            }
          }
          v13 = ++v12;
        }
        while ( v12 < *(unsigned int *)(Argument + 48) / 0x18uLL );
        LOBYTE(CurrentIrql) = v39;
      }
      v20 = 0;
      v21 = (*(_DWORD *)(v5 + 40) >> 12) + ((*(_DWORD *)(v5 + 40) & 0xFFF) != 0);
      if ( v21 )
      {
        v22 = 64LL;
        do
        {
          v23 = *(unsigned __int16 **)(v22 + *(_QWORD *)(Argument + 32));
          if ( v23
            && (*(_QWORD *)(((((unsigned __int64)(v20 << 12) + v9) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
          {
            MiApplyDynamicRelocationFixups((v20 << 12) + v9, v20 << 12, *(_QWORD *)(Argument + 32), v23, 0);
          }
          ++v20;
          v22 += 8LL;
        }
        while ( v20 < v21 );
      }
      v6 = v36;
      IsVerifierApplicableToImage = 0;
    }
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
  }
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v33 = *SchedulerAssist;
      do
      {
        v34 = v33;
        v33 = _InterlockedCompareExchange(SchedulerAssist, v33 & 0xFFDFFFFF, v33);
      }
      while ( v34 != v33 );
      if ( (v33 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8((unsigned __int8)CurrentIrql);
  return IsVerifierApplicableToImage;
}
