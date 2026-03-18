/*
 * XREFs of KeIntSteerSnapPerf @ 0x140353E60
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140352C70 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(__int64 a1, int **a2, _DWORD *a3, __int64 *a4)
{
  int v4; // edi
  __int64 v5; // r15
  unsigned __int64 v6; // rbx
  int **v7; // r13
  unsigned __int64 *v8; // r12
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // rsp
  __int64 InterruptTimePrecise; // rax
  __int64 v13; // rsi
  int *v14; // rbx
  __int64 v15; // rbx
  __int64 CurrentIrql; // rdi
  __int64 v17; // r14
  __int64 *v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rdi
  unsigned int i; // r9d
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // r11
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r9
  char *v32; // r12
  __int64 v33; // r10
  char *v34; // r11
  __int64 v35; // rdx
  unsigned __int64 v37; // [rsp+20h] [rbp+0h] BYREF
  __int64 v38; // [rsp+28h] [rbp+8h]
  __int64 v39; // [rsp+30h] [rbp+10h]
  int **v40; // [rsp+38h] [rbp+18h]
  __int64 v41; // [rsp+40h] [rbp+20h]
  _DWORD *v42; // [rsp+48h] [rbp+28h]
  __int64 v43; // [rsp+50h] [rbp+30h]
  __int64 *v44; // [rsp+58h] [rbp+38h]
  unsigned __int64 v45; // [rsp+60h] [rbp+40h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+78h]

  v4 = PpmIntSteerLoadMax;
  v5 = 0LL;
  v6 = 0LL;
  v44 = a4;
  v7 = a2;
  v42 = a3;
  v8 = 0LL;
  v40 = a2;
  v37 = 0LL;
  if ( KiIntSteerEnabled )
  {
    if ( KiActiveGroups )
      v6 = __popcnt(KeActiveProcessors.Bitmap[0]);
    v9 = 8LL * (unsigned int)v6;
    v37 = v6;
    v10 = v9 + 15;
    if ( v9 + 15 < v9 )
      v10 = 0xFFFFFFFFFFFFFF0LL;
    v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
    v8 = &v37;
    if ( (_DWORD)v6 )
      memset_0(&v37, 0, 8LL * (unsigned int)v6);
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v45);
  v43 = InterruptTimePrecise;
  v13 = InterruptTimePrecise - KiIntSteerPreviousPerfSnap;
  v39 = InterruptTimePrecise - KiIntSteerPreviousPerfSnap;
  if ( (unsigned __int64)(InterruptTimePrecise - KiIntSteerPreviousPerfSnap) >= 0x16E360 )
  {
    v14 = (int *)KiIntSteerDistributionContext;
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise;
    KiIntSteerPreviousPerfSnapDelta = v13;
    memset_0(KiIntSteerDistributionContext, 0, 0x204uLL);
    *v14 = v4;
    *v7 = v14;
    v15 = 0LL;
    v38 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    v41 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags != (unsigned __int8)v38 )
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&KiIntTrackSpinlock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiIntTrackSpinlock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiIntTrackSpinlock);
    }
    v17 = KiIntTrackRootList;
    if ( (__int64 *)KiIntTrackRootList != &KiIntTrackRootList )
    {
      do
      {
        v18 = *(__int64 **)(v17 + 16);
        v19 = 0LL;
        if ( v18 != (__int64 *)(v17 + 16) )
        {
          do
          {
            if ( *(__int64 **)(*v18 + 8) != v18 || *(__int64 **)v18[1] != v18 )
              __fastfail(3u);
            v20 = 0LL;
            v21 = 0LL;
            for ( i = 0; i < *((_DWORD *)v18 + 6); ++i )
            {
              v23 = *(_QWORD *)(v18[4] + 8LL * i);
              v24 = *(_QWORD *)(v23 + 176);
              v25 = *(_QWORD *)(v23 + 200);
              v20 += v24;
              v21 += v25;
              if ( (unsigned __int16)KiActiveGroups > 1u )
              {
                v26 = *(_DWORD *)(v23 + 96);
                if ( v26 )
                {
                  if ( v26 >= KeMaximumProcessors )
                    continue;
                  v27 = *((_DWORD *)KiGlobalState + v26);
                  if ( !v27 || (unsigned __int16)(v27 >> 6) )
                    continue;
                }
              }
              if ( KiIntSteerEnabled && !*(_BYTE *)(v17 + 132) )
                v8[*(unsigned int *)(v23 + 96)] += v25 + v24;
            }
            v28 = v20 - v18[5];
            v18[5] = v20;
            if ( v28 > 0 )
              v19 += v28;
            v29 = v19;
            v30 = v21 - v18[6];
            v19 += v30;
            v18[6] = v21;
            v18 = (__int64 *)*v18;
            if ( v30 <= 0 )
              v19 = v29;
          }
          while ( v18 != (__int64 *)(v17 + 16) );
          v15 = v38;
        }
        v15 += v19;
        *(_QWORD *)(v17 + 192) = v19;
        v17 = *(_QWORD *)v17;
        v38 = v15;
      }
      while ( (__int64 *)v17 != &KiIntTrackRootList );
      v13 = v39;
      v7 = v40;
      LOBYTE(CurrentIrql) = v41;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&KiIntTrackSpinlock, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiIntTrackSpinlock, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
    __writecr8((unsigned __int8)CurrentIrql);
    if ( KiIntSteerEnabled && (_DWORD)v37 )
    {
      v31 = KiIntSteerPerProcIsrDpcTimeAffinitized;
      v32 = (char *)v8 - KiIntSteerPerProcIsrDpcTimeAffinitized;
      v33 = (unsigned int)v37;
      v34 = (char *)KiProcessorBlock - KiIntSteerPerProcIsrDpcTimeAffinitized;
      do
      {
        v35 = *(_QWORD *)&v32[v31] - *(_QWORD *)v31;
        *(_QWORD *)v31 = *(_QWORD *)&v32[v31];
        if ( v35 > 0 )
          (*v7)[v5 + 1] += 10000
                         * v35
                         / (KiIntSteerPreviousPerfSnapDelta
                          * (unsigned __int64)*(unsigned int *)(*(_QWORD *)&v34[v31] + 68LL));
        v31 += 8LL;
        ++v5;
        --v33;
      }
      while ( v33 );
    }
    KiIntSteerLoadPercent = 10000 * v15 / (unsigned __int64)(KiIntSteerSlowestCyclesPerSec * v13);
  }
  else
  {
    *v7 = 0LL;
  }
  *v42 = KiIntSteerLoadPercent;
  *v44 = v43;
  return 0LL;
}
