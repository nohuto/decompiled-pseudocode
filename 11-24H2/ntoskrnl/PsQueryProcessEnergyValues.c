/*
 * XREFs of PsQueryProcessEnergyValues @ 0x14085EE30
 * Callers:
 *     PspQueryProcessAccountingInformationCallback @ 0x14085EBE0 (PspQueryProcessAccountingInformationCallback.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140860740 (PopEtProcessEnumSnapshotCallback.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x14099CF68 (PopEtEnergyContextProcessStateUpdate.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409E5458 (PspFoldProcessAccountingIntoJob.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E2AC0 (PspUnlockProcessThreadListShared.c)
 *     PoEnergyEstimationEnabled @ 0x140440E80 (PoEnergyEstimationEnabled.c)
 *     KeQueryTimelineBitmapTime @ 0x14044B2E4 (KeQueryTimelineBitmapTime.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall PsQueryProcessEnergyValues(_QWORD *a1, _OWORD *a2)
{
  char result; // al
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  int *v7; // r12
  unsigned int TimelineBitmapTime; // r8d
  _QWORD *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  char *v12; // r10
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 *v21; // r11
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // r9d
  int v26; // ecx
  unsigned int v27; // edx
  __int64 v28; // rbx
  _OWORD *v29; // r10
  unsigned __int64 v30; // rcx
  unsigned int v31; // r9d
  unsigned __int64 v32; // rcx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  __int64 *v37; // r11
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  int v40; // edx
  unsigned int v41; // r9d
  int v42; // eax
  unsigned int v43; // ecx
  struct _KTHREAD *CurrentThread; // rsi
  char *v45; // rdi
  _QWORD *i; // r10
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // ecx
  unsigned int v50; // ecx
  __int64 v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // [rsp+60h] [rbp+18h]
  __int64 v56; // [rsp+60h] [rbp+18h]

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
  *((_QWORD *)a2 + 54) = *(_QWORD *)(v5 + 432);
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v7 = (int *)(a2 + 17);
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  v9 = a2 + 17;
  v10 = v5 - (_QWORD)a2;
  v11 = 14LL;
  do
  {
    *v9 = *(_QWORD *)((char *)v9 + v10);
    ++v9;
    --v11;
  }
  while ( v11 );
  v12 = (char *)a2 + 104;
  v13 = 3LL;
  do
  {
    v14 = *(_QWORD *)&v12[v10];
    v15 = 0;
    *(_QWORD *)v12 = v14;
    v16 = HIDWORD(v14);
    if ( (v16 & 0x80000000) != 0LL )
    {
      v17 = v16 & 0x7FFFFFFF;
      *((_DWORD *)v12 + 1) = v17;
      v18 = *(_DWORD *)&v12[v10];
      if ( (unsigned int)v6 > v18 )
      {
        *(_DWORD *)v12 = v6;
        v15 = v6 - v18;
        if ( (_DWORD)v6 - v18 == -1 || (v19 = v17 + v15, ~v15 < v17) )
          v19 = -1;
        *((_DWORD *)v12 + 1) = v19 & 0x7FFFFFFF;
      }
    }
    if ( v12 == (char *)a2 + 104 )
    {
      v20 = 304LL;
    }
    else
    {
      if ( v12 != (char *)(a2 + 7) )
        goto LABEL_28;
      v20 = 312LL;
    }
    v21 = (__int64 *)((char *)a2 + v20);
    if ( (_OWORD *)((char *)a2 + v20) && v15 )
    {
      v55 = *v21;
      v22 = *v21;
      v23 = HIDWORD(*v21);
      if ( TimelineBitmapTime <= (unsigned int)*v21 )
      {
        if ( (unsigned int)v55 - TimelineBitmapTime >= 0x20 )
          goto LABEL_28;
        v24 = 1 << (v55 - TimelineBitmapTime);
      }
      else
      {
        LODWORD(v55) = TimelineBitmapTime;
        v24 = 1;
        if ( TimelineBitmapTime - (unsigned int)v22 >= 0x20 )
          LODWORD(v23) = 0;
        else
          LODWORD(v23) = HIDWORD(v55) << (TimelineBitmapTime - v22);
      }
      v25 = v15 >> 12;
      v26 = v23 | v24;
      v27 = TimelineBitmapTime - v25;
      HIDWORD(v55) = v26;
      if ( TimelineBitmapTime >= v25 )
      {
        do
        {
          v24 *= 2;
          if ( !v24 )
            break;
          v26 |= v24;
          ++v27;
          HIDWORD(v55) = v26;
        }
        while ( v27 < TimelineBitmapTime );
      }
      *v21 = v55;
    }
LABEL_28:
    v12 += 8;
    --v13;
  }
  while ( v13 );
  v28 = 5LL;
  v29 = a2 + 24;
  while ( 2 )
  {
    v30 = *(_QWORD *)((char *)v29 + v10);
    v31 = 0;
    *(_QWORD *)v29 = v30;
    v32 = HIDWORD(v30);
    if ( (v32 & 0x80000000) != 0LL )
    {
      v33 = v32 & 0x7FFFFFFF;
      *((_DWORD *)v29 + 1) = v33;
      v34 = *(_DWORD *)((char *)v29 + v10);
      if ( (unsigned int)v6 > v34 )
      {
        *(_DWORD *)v29 = v6;
        v31 = v6 - v34;
        if ( (_DWORD)v6 - v34 == -1 || (v35 = v33 + v31, ~v31 < v33) )
          v35 = -1;
        *((_DWORD *)v29 + 1) = v35 & 0x7FFFFFFF;
      }
    }
    if ( v29 == (_OWORD *)((char *)a2 + 392) )
    {
      v36 = 352LL;
LABEL_42:
      v37 = (__int64 *)((char *)a2 + v36);
      if ( (_OWORD *)((char *)a2 + v36) && v31 )
      {
        v56 = *v37;
        v38 = *v37;
        v39 = HIDWORD(*v37);
        if ( TimelineBitmapTime <= (unsigned int)*v37 )
        {
          if ( (unsigned int)v56 - TimelineBitmapTime < 0x20 )
          {
            v40 = 1 << (v56 - TimelineBitmapTime);
            goto LABEL_50;
          }
        }
        else
        {
          LODWORD(v56) = TimelineBitmapTime;
          v40 = 1;
          if ( TimelineBitmapTime - (unsigned int)v38 >= 0x20 )
            LODWORD(v39) = 0;
          else
            LODWORD(v39) = HIDWORD(v56) << (TimelineBitmapTime - v38);
LABEL_50:
          v41 = v31 >> 12;
          v42 = v40 | v39;
          HIDWORD(v56) = v42;
          v43 = TimelineBitmapTime - v41;
          if ( TimelineBitmapTime >= v41 )
          {
            do
            {
              v40 *= 2;
              if ( !v40 )
                break;
              v42 |= v40;
              ++v43;
              HIDWORD(v56) = v42;
            }
            while ( v43 < TimelineBitmapTime );
          }
          *v37 = v56;
        }
      }
    }
    else
    {
      if ( v29 == a2 + 25 )
      {
        v36 = 360LL;
        goto LABEL_42;
      }
      if ( v29 == (_OWORD *)((char *)a2 + 408) )
      {
        v36 = 368LL;
        goto LABEL_42;
      }
    }
    v29 = (_OWORD *)((char *)v29 + 8);
    if ( --v28 )
      continue;
    break;
  }
  *((_DWORD *)a2 + 32) = *(_DWORD *)(v5 + 128);
  *((_DWORD *)a2 + 33) = *(_DWORD *)(v5 + 132);
  *((_DWORD *)a2 + 34) = *(_DWORD *)(v5 + 136);
  *((_DWORD *)a2 + 106) = *(_DWORD *)(v5 + 424);
  *((_DWORD *)a2 + 107) = *(_DWORD *)(v5 + 428);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v45 = (char *)KeAbPreAcquire((__int64)(a1 + 188), 0LL);
  if ( _InterlockedCompareExchange64(a1 + 188, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 188, 0, v45, (__int64)(a1 + 188));
  if ( v45 )
    v45[10] = 1;
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
  for ( i = (_QWORD *)a1[110]; i != a1 + 110; i = (_QWORD *)*i )
  {
    v47 = i[34];
    v48 = *(_QWORD *)(v47 + 192);
    v49 = *v7;
    if ( (unsigned int)v48 <= *v7 )
    {
      v50 = v49 - v48;
      if ( v50 < 0x20 )
        *((_DWORD *)a2 + 69) |= HIDWORD(v48) << v50;
    }
    else
    {
      *v7 = v48;
      if ( (unsigned int)(v48 - v49) >= 0x20 )
        *((_DWORD *)a2 + 69) = HIDWORD(v48);
      else
        *((_DWORD *)a2 + 69) = (*((_DWORD *)a2 + 69) << (v48 - v49)) | HIDWORD(v48);
    }
    v51 = v47 - (_QWORD)a2;
    v52 = a2;
    v53 = 4LL;
    do
    {
      v54 = 2LL;
      do
      {
        *v52 += *(_QWORD *)((char *)v52 + v51);
        v52[18] += *(_QWORD *)((char *)v52 + v51 + 64);
        v52[26] += *(_QWORD *)((char *)v52 + v51 + 128);
        ++v52;
        --v54;
      }
      while ( v54 );
      --v53;
    }
    while ( v53 );
  }
  return PspUnlockProcessThreadListShared((__int64)a1);
}
