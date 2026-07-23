/*
 * XREFs of KeIntSteerSnapPerf @ 0x1403AF950
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1403AE8E0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_MultiGroupInterruptSteering__private_IsEnabledDeviceUsageNoInline @ 0x1405BFFE0 (Feature_MultiGroupInterruptSteering__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(__int64 a1, int **a2, _DWORD *a3, LARGE_INTEGER *a4)
{
  int v4; // edi
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  int **v7; // r13
  _QWORD *v8; // r14
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // rsp
  LARGE_INTEGER InterruptTimePrecise; // rax
  LONGLONG v13; // r15
  int *v14; // rbx
  __int64 v15; // rbx
  __int64 CurrentIrql; // rdi
  __int64 v17; // r12
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // r14
  _QWORD *v23; // r13
  __int64 v24; // rbx
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r9
  char *v31; // r14
  __int64 v32; // r10
  char *v33; // r11
  __int64 v34; // rdx
  _QWORD *v36; // [rsp+20h] [rbp+0h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp+8h]
  __int64 v38; // [rsp+30h] [rbp+10h]
  __int64 v39; // [rsp+38h] [rbp+18h]
  LONGLONG v40; // [rsp+40h] [rbp+20h]
  int **v41; // [rsp+48h] [rbp+28h]
  __int64 v42; // [rsp+50h] [rbp+30h]
  _DWORD *v43; // [rsp+58h] [rbp+38h]
  LARGE_INTEGER v44; // [rsp+60h] [rbp+40h]
  LARGE_INTEGER *v45; // [rsp+68h] [rbp+48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+88h]

  v4 = PpmIntSteerLoadMax;
  v5 = 0LL;
  v6 = 0LL;
  v45 = a4;
  v7 = a2;
  v43 = a3;
  v8 = 0LL;
  v41 = a2;
  v37 = 0LL;
  v36 = 0LL;
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
    v8 = &v36;
    v36 = &v36;
    if ( (_DWORD)v6 )
      memset_0(&v36, 0, 8LL * (unsigned int)v6);
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v44 = InterruptTimePrecise;
  v13 = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  v40 = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap) >= 0x16E360 )
  {
    v14 = (int *)KiIntSteerDistributionContext;
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise.QuadPart;
    KiIntSteerPreviousPerfSnapDelta = v13;
    memset_0(KiIntSteerDistributionContext, 0, 0x204uLL);
    *v14 = v4;
    *v7 = v14;
    v15 = 0LL;
    v39 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    v42 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags != (unsigned __int8)v39 )
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
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
        v19 = v17 + 16;
        v38 = 0LL;
        v20 = 0LL;
        if ( v18 != (__int64 *)(v17 + 16) )
        {
          do
          {
            if ( *(__int64 **)(*v18 + 8) != v18 || *(__int64 **)v18[1] != v18 )
              __fastfail(3u);
            v21 = 0LL;
            v22 = 0LL;
            if ( *((_DWORD *)v18 + 6) )
            {
              v23 = v36;
              do
              {
                v24 = *(_QWORD *)(v18[4] + 8LL * (unsigned int)v5);
                v22 += *(_QWORD *)(v24 + 176);
                v21 += *(_QWORD *)(v24 + 200);
                if ( ((unsigned __int16)KiActiveGroups <= 1u
                   || !(unsigned int)Feature_MultiGroupInterruptSteering__private_IsEnabledDeviceUsageNoInline()
                   || (v25 = *(_DWORD *)(v24 + 96)) == 0
                   || v25 < KeMaximumProcessors
                   && (v26 = *((_DWORD *)KiGlobalState + v25)) != 0
                   && !(unsigned __int16)(v26 >> 6))
                  && KiIntSteerEnabled
                  && !*(_BYTE *)(v17 + 132) )
                {
                  v23[*(unsigned int *)(v24 + 96)] += *(_QWORD *)(v24 + 200) + *(_QWORD *)(v24 + 176);
                }
                LODWORD(v5) = v5 + 1;
              }
              while ( (unsigned int)v5 < *((_DWORD *)v18 + 6) );
              v20 = v38;
              v19 = v17 + 16;
            }
            v27 = v22 - v18[5];
            v18[5] = v22;
            if ( v27 > 0 )
              v20 += v27;
            v28 = v20;
            v29 = v21 - v18[6];
            v5 = 0LL;
            v20 += v29;
            v18[6] = v21;
            v18 = (__int64 *)*v18;
            if ( v29 <= 0 )
              v20 = v28;
            v38 = v20;
          }
          while ( v18 != (__int64 *)v19 );
          v15 = v39;
        }
        v15 += v20;
        *(_QWORD *)(v17 + 192) = v20;
        v17 = *(_QWORD *)v17;
        v39 = v15;
      }
      while ( (__int64 *)v17 != &KiIntTrackRootList );
      v8 = v36;
      v13 = v40;
      v7 = v41;
      LOBYTE(CurrentIrql) = v42;
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
      v30 = KiIntSteerPerProcIsrDpcTimeAffinitized;
      v31 = (char *)v8 - KiIntSteerPerProcIsrDpcTimeAffinitized;
      v32 = (unsigned int)v37;
      v33 = (char *)KiProcessorBlock - KiIntSteerPerProcIsrDpcTimeAffinitized;
      do
      {
        v34 = *(_QWORD *)&v31[v30] - *(_QWORD *)v30;
        *(_QWORD *)v30 = *(_QWORD *)&v31[v30];
        if ( v34 > 0 )
          *(int *)((char *)*v7 + v5 + 4) += 10000
                                          * v34
                                          / (KiIntSteerPreviousPerfSnapDelta
                                           * (unsigned __int64)*(unsigned int *)(*(_QWORD *)&v33[v30] + 68LL));
        v30 += 8LL;
        v5 += 4LL;
        --v32;
      }
      while ( v32 );
    }
    KiIntSteerLoadPercent = 10000 * v15 / (unsigned __int64)(KiIntSteerSlowestCyclesPerSec * v13);
  }
  else
  {
    *v7 = 0LL;
  }
  *v43 = KiIntSteerLoadPercent;
  *v45 = v44;
  return 0LL;
}
