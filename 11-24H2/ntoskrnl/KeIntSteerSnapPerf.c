/*
 * XREFs of KeIntSteerSnapPerf @ 0x1402B1C30
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402B0A40 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledDeviceUsageNoInline @ 0x1405C1690 (Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(__int64 a1, int **a2, _DWORD *a3, LARGE_INTEGER *a4)
{
  int v4; // edi
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  int **v7; // r13
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // rsp
  LARGE_INTEGER InterruptTimePrecise; // rax
  LONGLONG v13; // r15
  int *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 CurrentIrql; // rdi
  __int64 v20; // r14
  __int64 *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // r15
  unsigned int v26; // esi
  __int64 v27; // rbx
  unsigned int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // r9
  char *v37; // rsi
  __int64 v38; // r10
  char *v39; // r11
  __int64 v40; // rdx
  _QWORD *v42; // [rsp+20h] [rbp+0h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp+8h]
  __int64 v44; // [rsp+30h] [rbp+10h]
  __int64 v45; // [rsp+38h] [rbp+18h]
  LONGLONG v46; // [rsp+40h] [rbp+20h]
  int **v47; // [rsp+48h] [rbp+28h]
  __int64 v48; // [rsp+50h] [rbp+30h]
  _DWORD *v49; // [rsp+58h] [rbp+38h]
  LARGE_INTEGER v50; // [rsp+60h] [rbp+40h]
  LARGE_INTEGER *v51; // [rsp+68h] [rbp+48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+88h]

  v4 = PpmIntSteerLoadMax;
  v5 = 0LL;
  v6 = 0LL;
  v51 = a4;
  v7 = a2;
  v49 = a3;
  v8 = 0LL;
  v47 = a2;
  v43 = 0LL;
  v42 = 0LL;
  if ( KiIntSteerEnabled )
  {
    if ( KiActiveGroups )
      v6 = __popcnt(KeActiveProcessors.Bitmap[0]);
    v9 = 8LL * (unsigned int)v6;
    v43 = v6;
    v10 = v9 + 15;
    if ( v9 + 15 < v9 )
      v10 = 0xFFFFFFFFFFFFFF0LL;
    v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
    v8 = &v42;
    v42 = &v42;
    if ( (_DWORD)v6 )
      memset_0(&v42, 0, 8LL * (unsigned int)v6);
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v50 = InterruptTimePrecise;
  v13 = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  v46 = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap) < 0x16E360 )
  {
    *v7 = 0LL;
    goto LABEL_64;
  }
  v14 = (int *)KiIntSteerDistributionContext;
  KiIntSteerPreviousPerfSnap = InterruptTimePrecise.QuadPart;
  KiIntSteerPreviousPerfSnapDelta = v13;
  memset_0(KiIntSteerDistributionContext, 0, 0x204uLL);
  *v14 = v4;
  *v7 = v14;
  v18 = 0LL;
  v45 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v48 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v45 )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)&KiIntTrackSpinlock, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiIntTrackSpinlock, v15, v16, v17);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiIntTrackSpinlock);
  }
  v20 = KiIntTrackRootList;
  if ( (__int64 *)KiIntTrackRootList != &KiIntTrackRootList )
  {
    do
    {
      v21 = *(__int64 **)(v20 + 16);
      v22 = v20 + 16;
      v23 = 0LL;
      v44 = 0LL;
      if ( v21 != (__int64 *)(v20 + 16) )
      {
        do
        {
          if ( *(__int64 **)(*v21 + 8) != v21 || *(__int64 **)v21[1] != v21 )
            __fastfail(3u);
          v24 = 0LL;
          v25 = 0LL;
          v26 = 0;
          if ( *((_DWORD *)v21 + 6) )
          {
            while ( 1 )
            {
              v27 = *(_QWORD *)(v21[4] + 8LL * v26);
              v25 += *(_QWORD *)(v27 + 176);
              v24 += *(_QWORD *)(v27 + 200);
              if ( (unsigned int)Feature_Servicing_KeIntSteerProcessorIndex__private_IsEnabledDeviceUsageNoInline() )
              {
                v30 = *(unsigned int *)(v27 + 96);
                if ( !(_DWORD)v30 )
                {
                  v31 = 0;
LABEL_37:
                  if ( KiIntSteerEnabled && !*(_BYTE *)(v20 + 132) )
                    v42[v31] += *(_QWORD *)(v27 + 200) + *(_QWORD *)(v27 + 176);
                  goto LABEL_40;
                }
                if ( (unsigned int)v30 < KeMaximumProcessors )
                {
                  v32 = *((_DWORD *)KiGlobalState + v30);
                  if ( v32 )
                  {
                    if ( !(unsigned __int16)(v32 >> 6) )
                    {
                      v31 = v32 & 0x3F;
                      goto LABEL_37;
                    }
                  }
                }
              }
              else if ( ((unsigned __int16)KiActiveGroups <= 1u
                      || (v28 = *(_DWORD *)(v27 + 96)) == 0
                      || v28 < KeMaximumProcessors
                      && (v29 = *((_DWORD *)KiGlobalState + v28)) != 0
                      && !(unsigned __int16)(v29 >> 6))
                     && KiIntSteerEnabled
                     && !*(_BYTE *)(v20 + 132) )
              {
                v42[*(unsigned int *)(v27 + 96)] += *(_QWORD *)(v27 + 200) + *(_QWORD *)(v27 + 176);
              }
LABEL_40:
              if ( ++v26 >= *((_DWORD *)v21 + 6) )
              {
                v23 = v44;
                v22 = v20 + 16;
                break;
              }
            }
          }
          v33 = v25 - v21[5];
          v21[5] = v25;
          if ( v33 > 0 )
            v23 += v33;
          v34 = v23;
          v35 = v24 - v21[6];
          v23 += v35;
          v21[6] = v24;
          v21 = (__int64 *)*v21;
          if ( v35 <= 0 )
            v23 = v34;
          v44 = v23;
        }
        while ( v21 != (__int64 *)v22 );
        v18 = v45;
      }
      v18 += v23;
      *(_QWORD *)(v20 + 192) = v23;
      v20 = *(_QWORD *)v20;
      v45 = v18;
    }
    while ( (__int64 *)v20 != &KiIntTrackRootList );
    v8 = v42;
    v13 = v46;
    v7 = v47;
    LOBYTE(CurrentIrql) = v48;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&KiIntTrackSpinlock, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiIntTrackSpinlock, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( KiIntSteerEnabled && (_DWORD)v43 )
  {
    v36 = (_QWORD *)KiIntSteerPerProcIsrDpcTimeAffinitized;
    v37 = (char *)v8 - KiIntSteerPerProcIsrDpcTimeAffinitized;
    v38 = (unsigned int)v43;
    v39 = (char *)KiProcessorBlock - KiIntSteerPerProcIsrDpcTimeAffinitized;
    do
    {
      v40 = *(_QWORD *)((char *)v36 + (_QWORD)v37) - *v36;
      *v36 = *(_QWORD *)((char *)v36 + (_QWORD)v37);
      if ( v40 > 0 )
        (*v7)[v5 + 1] += 10000
                       * v40
                       / (KiIntSteerPreviousPerfSnapDelta
                        * (unsigned __int64)*(unsigned int *)(*(_QWORD *)((char *)v36 + (_QWORD)v39) + 68LL));
      ++v36;
      ++v5;
      --v38;
    }
    while ( v38 );
  }
  KiIntSteerLoadPercent = 10000 * v18 / (unsigned __int64)(KiIntSteerSlowestCyclesPerSec * v13);
LABEL_64:
  *v49 = KiIntSteerLoadPercent;
  *v51 = v50;
  return 0LL;
}
