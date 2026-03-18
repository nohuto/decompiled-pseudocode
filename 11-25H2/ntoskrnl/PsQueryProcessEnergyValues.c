/*
 * XREFs of PsQueryProcessEnergyValues @ 0x1408DE290
 * Callers:
 *     PspQueryProcessAccountingInformationCallback @ 0x1408DE040 (PspQueryProcessAccountingInformationCallback.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1408DFB00 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x140962778 (PopEtEnergyContextProcessStateUpdate.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409F043C (PspFoldProcessAccountingIntoJob.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140434760 (RtlTimelineBitmapUpdateRange.c)
 *     PoEnergyEstimationEnabled @ 0x14044A480 (PoEnergyEstimationEnabled.c)
 *     KeQueryTimelineBitmapTime @ 0x1404560B0 (KeQueryTimelineBitmapTime.c)
 *     Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline @ 0x1404F1730 (Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall PsQueryProcessEnergyValues(signed __int64 *a1, _OWORD *a2)
{
  char result; // al
  signed __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned int TimelineBitmapTime; // eax
  _QWORD *v8; // rdx
  signed __int64 v9; // r11
  unsigned int v10; // r13d
  __int64 v11; // r8
  char *v12; // rdi
  __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbp
  _OWORD *v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  signed __int64 *v24; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 *v26; // rdi
  _QWORD *v27; // r15
  _QWORD *v28; // r10
  int *v29; // r11
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  int v32; // ecx
  unsigned __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // r8
  _QWORD *v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rdx
  int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // eax
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  int v45; // eax

  memset_0(a2, 0, 0x1B8uLL);
  result = PoEnergyEstimationEnabled();
  if ( !result || a1 == PsIdleProcess )
    return result;
  v5 = a1[205];
  *((_QWORD *)a2 + 8) = *(_QWORD *)(v5 + 64);
  *((_QWORD *)a2 + 9) = *(_QWORD *)(v5 + 72);
  *((_QWORD *)a2 + 10) = *(_QWORD *)(v5 + 80);
  *((_QWORD *)a2 + 11) = *(_QWORD *)(v5 + 88);
  *((_QWORD *)a2 + 12) = *(_QWORD *)(v5 + 96);
  if ( (unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline() )
    *((_QWORD *)a2 + 54) = *(_QWORD *)(v5 + 432);
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  v8 = a2 + 17;
  v9 = v5 - (_QWORD)a2;
  v10 = TimelineBitmapTime;
  v11 = 14LL;
  do
  {
    *v8 = *(_QWORD *)((char *)v8 + v9);
    ++v8;
    --v11;
  }
  while ( v11 );
  v12 = (char *)a2 + 104;
  v13 = 3LL;
  do
  {
    v14 = *(_QWORD *)&v12[v9];
    v15 = 0;
    *(_QWORD *)v12 = v14;
    v16 = HIDWORD(v14);
    if ( (v16 & 0x80000000) != 0LL )
    {
      v43 = v16 & 0x7FFFFFFF;
      *((_DWORD *)v12 + 1) = v43;
      v44 = *(_DWORD *)&v12[v9];
      if ( (unsigned int)v6 > v44 )
      {
        *(_DWORD *)v12 = v6;
        v15 = v6 - v44;
        if ( (_DWORD)v6 - v44 == -1 || ~v15 < v43 )
          v45 = -1;
        else
          v45 = v43 + v15;
        *((_DWORD *)v12 + 1) = v45 & 0x7FFFFFFF;
      }
    }
    if ( v12 == (char *)a2 + 104 )
    {
      v17 = 304LL;
    }
    else
    {
      if ( v12 != (char *)(a2 + 7) )
        goto LABEL_15;
      v17 = 312LL;
    }
    if ( (_OWORD *)((char *)a2 + v17) && v15 )
      RtlTimelineBitmapUpdateRange((__int64 *)((char *)a2 + v17), v10 - (v15 >> 12), v10);
LABEL_15:
    v12 += 8;
    --v13;
  }
  while ( v13 );
  v18 = 5LL;
  v19 = a2 + 24;
  while ( 2 )
  {
    v20 = *(_QWORD *)((char *)v19 + v9);
    v21 = 0;
    *(_QWORD *)v19 = v20;
    v22 = HIDWORD(v20);
    if ( (v22 & 0x80000000) != 0LL )
    {
      v40 = v22 & 0x7FFFFFFF;
      *((_DWORD *)v19 + 1) = v40;
      v41 = *(_DWORD *)((char *)v19 + v9);
      if ( (unsigned int)v6 > v41 )
      {
        *(_DWORD *)v19 = v6;
        v21 = v6 - v41;
        if ( (_DWORD)v6 - v41 == -1 || ~v21 < v40 )
          v42 = -1;
        else
          v42 = v40 + v21;
        *((_DWORD *)v19 + 1) = v42 & 0x7FFFFFFF;
      }
    }
    if ( v19 == (_OWORD *)((char *)a2 + 392) )
    {
      v23 = 352LL;
LABEL_22:
      if ( (_OWORD *)((char *)a2 + v23) && v21 )
        RtlTimelineBitmapUpdateRange((__int64 *)((char *)a2 + v23), v10 - (v21 >> 12), v10);
      goto LABEL_25;
    }
    if ( v19 == a2 + 25 )
    {
      v23 = 360LL;
      goto LABEL_22;
    }
    if ( v19 == (_OWORD *)((char *)a2 + 408) )
    {
      v23 = 368LL;
      goto LABEL_22;
    }
LABEL_25:
    v19 = (_OWORD *)((char *)v19 + 8);
    if ( --v18 )
      continue;
    break;
  }
  v24 = a1 + 188;
  *((_DWORD *)a2 + 32) = *(_DWORD *)(v5 + 128);
  *((_DWORD *)a2 + 33) = *(_DWORD *)(v5 + 132);
  *((_DWORD *)a2 + 34) = *(_DWORD *)(v5 + 136);
  *((_DWORD *)a2 + 106) = *(_DWORD *)(v5 + 424);
  *((_DWORD *)a2 + 107) = *(_DWORD *)(v5 + 428);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v26 = KeAbPreAcquire((__int64)(a1 + 188), 0LL);
  if ( _InterlockedCompareExchange64(a1 + 188, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 188, 0, v26, (unsigned __int64)(a1 + 188));
  if ( v26 )
    *((_BYTE *)v26 + 10) = 1;
  v27 = a1 + 110;
  *a2 = *(_OWORD *)v5;
  a2[1] = *(_OWORD *)(v5 + 16);
  a2[2] = *(_OWORD *)(v5 + 32);
  a2[3] = *(_OWORD *)(v5 + 48);
  a2[9] = *(_OWORD *)(v5 + 144);
  a2[10] = *(_OWORD *)(v5 + 160);
  a2[11] = *(_OWORD *)(v5 + 176);
  a2[12] = *(_OWORD *)(v5 + 192);
  a2[13] = *(_OWORD *)(v5 + 208);
  a2[14] = *(_OWORD *)(v5 + 224);
  a2[15] = *(_OWORD *)(v5 + 240);
  a2[16] = *(_OWORD *)(v5 + 256);
  v28 = (_QWORD *)*v27;
  if ( (_QWORD *)*v27 != v27 )
  {
    v29 = (int *)(a2 + 17);
    do
    {
      v30 = v28[34];
      v31 = *(_QWORD *)(v30 + 192);
      v32 = *v29;
      v33 = HIDWORD(v31);
      if ( (unsigned int)v31 > *v29 )
      {
        *v29 = v31;
        if ( (unsigned int)(v31 - v32) >= 0x20 )
          v39 = 0;
        else
          v39 = *((_DWORD *)a2 + 69) << (v31 - v32);
        *((_DWORD *)a2 + 69) = v39 | v33;
      }
      else
      {
        v34 = v32 - v31;
        if ( v34 < 0x20 )
          *((_DWORD *)a2 + 69) |= HIDWORD(v31) << v34;
      }
      v35 = v30 - (_QWORD)a2;
      v36 = a2;
      v37 = 4LL;
      do
      {
        v38 = 2LL;
        do
        {
          *v36 += *(_QWORD *)((char *)v36 + v35);
          v36[18] += *(_QWORD *)((char *)v36 + v35 + 64);
          v36[26] += *(_QWORD *)((char *)v36 + v35 + 128);
          ++v36;
          --v38;
        }
        while ( v38 );
        --v37;
      }
      while ( v37 );
      v28 = (_QWORD *)*v28;
    }
    while ( v28 != v27 );
  }
  if ( _InterlockedCompareExchange64(v24, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v24);
  KeAbPostRelease((ULONG_PTR)v24);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
