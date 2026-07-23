/*
 * XREFs of PoEnergyContextUpdateComponentPower @ 0x14099B564
 * Callers:
 *     PsUpdateComponentPower @ 0x14041F720 (PsUpdateComponentPower.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x14099B3A0 (PopPowerRequestCallbackDisplayRequired.c)
 *     NtSetThreadExecutionState @ 0x140AC4920 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     RtlTimelineBitmapUpdate @ 0x1403FB2C0 (RtlTimelineBitmapUpdate.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140423580 (RtlTimelineBitmapUpdateRange.c)
 *     KeQueryTimelineBitmapTime @ 0x14044B2E4 (KeQueryTimelineBitmapTime.c)
 *     RtlStateDurationUpdate @ 0x140488628 (RtlStateDurationUpdate.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopEtEnergyContextSetState @ 0x14099BAF0 (PopEtEnergyContextSetState.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x14099CF68 (PopEtEnergyContextProcessStateUpdate.c)
 */

void *__fastcall PoEnergyContextUpdateComponentPower(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // esi
  void *result; // rax
  signed __int64 *v8; // r14
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  unsigned int v12; // eax
  int v13; // r9d
  unsigned int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  unsigned int v17; // r8d
  unsigned int *v18; // rcx
  unsigned int v19; // r8d
  int v20; // eax
  __int64 *v21; // r11
  int v22; // r8d
  int v23; // r9d
  int v24; // ebx
  int v25; // r8d
  int v26; // r9d
  unsigned int TimelineBitmapTime; // eax
  unsigned int v28; // eax
  unsigned int v29; // r9d
  __int16 v30; // r8
  unsigned int *v31; // rcx
  unsigned int v32; // edx
  unsigned int v33; // eax
  __int16 v34; // dx
  unsigned int v35; // r8d
  unsigned __int8 v36; // si
  unsigned int *v37; // rbx
  unsigned __int64 *v38; // rdi
  unsigned int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // edx
  __int64 *v42; // rcx
  unsigned int v43; // edx
  unsigned int v44; // ebx
  unsigned int v45; // ecx
  __int64 v46; // [rsp+20h] [rbp-D8h]
  __int64 v47; // [rsp+20h] [rbp-D8h]
  __int64 v48; // [rsp+20h] [rbp-D8h]
  __int64 v49; // [rsp+20h] [rbp-D8h]
  _DWORD v51[36]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 1640);
  v4 = a3;
  result = memset_0(v51, 0, sizeof(v51));
  if ( v3 )
  {
    v8 = (signed __int64 *)(v3 + 440);
    PopAcquireRwLockExclusive((unsigned __int64 *)(v3 + 440));
    if ( a2 > 10 )
    {
      if ( a2 != 11 )
      {
        if ( a2 != 12 )
        {
          if ( a2 != 13 )
          {
            if ( a2 == 14 )
              ++*(_DWORD *)(v3 + 428);
            return (void *)PopReleaseRwLock(v8);
          }
          ++*(_DWORD *)(v3 + 424);
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v18 = (unsigned int *)(v3 + 376);
LABEL_39:
          v14 = TimelineBitmapTime;
          goto LABEL_16;
        }
        v21 = (__int64 *)(v3 + 408);
        if ( v4 == 3 )
        {
          if ( *(int *)(v3 + 412) < 0 )
            return (void *)PopReleaseRwLock(v8);
          v46 = *v21;
          v22 = 4096;
          if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - (unsigned int)*v21 <= 0x1000 )
            v22 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *v21;
          if ( ~v22 < (HIDWORD(v46) & 0x7FFFFFFFu) )
            v23 = -1;
          else
            v23 = (HIDWORD(v46) & 0x7FFFFFFF) + v22;
          HIDWORD(v47) = HIDWORD(v46) & 0x80000000 | v23 & 0x7FFFFFFF;
          LODWORD(v47) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *v21 = v47;
          v14 = KeQueryTimelineBitmapTime();
        }
        else
        {
          if ( (unsigned int)(v4 - 1) > 1 )
            return (void *)PopReleaseRwLock(v8);
          v44 = *(_DWORD *)(v3 + 480);
          if ( v4 == 1 )
          {
            *(_DWORD *)(v3 + 480) = ++v44;
            if ( v44 > 1 )
              return (void *)PopReleaseRwLock(v8);
          }
          else if ( v44 )
          {
            *(_DWORD *)(v3 + 480) = --v44;
            if ( v44 )
              return (void *)PopReleaseRwLock(v8);
          }
          RtlStateDurationUpdate(
            (unsigned __int64 *)(v3 + 408),
            v44 != 0,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          v39 = KeQueryTimelineBitmapTime();
          v14 = v39;
          if ( !v44 )
          {
            v41 = v39 - (v45 >> 12);
            v42 = (__int64 *)(v3 + 368);
            goto LABEL_56;
          }
        }
        v18 = (unsigned int *)(v3 + 368);
LABEL_16:
        RtlTimelineBitmapUpdate(v18, v14);
        return (void *)PopReleaseRwLock(v8);
      }
    }
    else if ( a2 != 10 )
    {
      v9 = a2 - 4;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 2;
          if ( !v11 )
          {
            v12 = KeQueryTimelineBitmapTime();
            v13 = -1;
            v14 = v12;
            if ( (_WORD)v4 )
            {
              v15 = *(_DWORD *)(v3 + 128);
              if ( ~(unsigned __int16)v4 < v15 )
                v16 = -1;
              else
                v16 = v15 + (unsigned __int16)v4;
              *(_DWORD *)(v3 + 128) = v16;
              RtlTimelineBitmapUpdate((unsigned int *)(v3 + 320), v14);
            }
            if ( WORD1(a3) )
            {
              v19 = *(_DWORD *)(v3 + 132);
              v20 = v19 + WORD1(a3);
              if ( ~WORD1(a3) < v19 )
                v20 = v13;
              *(_DWORD *)(v3 + 132) = v20;
              RtlTimelineBitmapUpdate((unsigned int *)(v3 + 328), v14);
            }
            if ( !WORD2(a3) )
              return (void *)PopReleaseRwLock(v8);
            v17 = *(_DWORD *)(v3 + 136);
            if ( ~WORD2(a3) >= v17 )
              v13 = v17 + WORD2(a3);
            *(_DWORD *)(v3 + 136) = v13;
            v18 = (unsigned int *)(v3 + 336);
            goto LABEL_16;
          }
          v24 = v11 - 1;
          if ( !v24 )
          {
            v51[1] = HIDWORD(a3);
            v51[0] = v4;
            PopEtEnergyContextSetState(a1, v51);
            return (void *)PopReleaseRwLock(v8);
          }
          if ( v24 != 1 )
            return (void *)PopReleaseRwLock(v8);
          v48 = *(_QWORD *)(v3 + 384);
          v25 = 1000;
          if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - (unsigned int)v48 <= 0x3E8 )
            v25 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v48;
          if ( ~v25 < (HIDWORD(v48) & 0x7FFFFFFFu) )
            v26 = -1;
          else
            v26 = (HIDWORD(v48) & 0x7FFFFFFF) + v25;
          HIDWORD(v49) = HIDWORD(v48) & 0x80000000 | v26 & 0x7FFFFFFF;
          LODWORD(v49) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_QWORD *)(v3 + 384) = v49;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v18 = (unsigned int *)(v3 + 344);
          goto LABEL_39;
        }
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 112),
          v4 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v33 = KeQueryTimelineBitmapTime();
        v34 = *(_WORD *)(v3 + 472);
        v35 = v33;
        v31 = (unsigned int *)(v3 + 312);
        if ( v4 )
        {
          *(_WORD *)(v3 + 472) = v34 | 2;
          v32 = v33;
          goto LABEL_47;
        }
        *(_WORD *)(v3 + 472) = v34 & 0xFFFD;
        v43 = v33;
      }
      else
      {
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 104),
          v4 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v28 = KeQueryTimelineBitmapTime();
        v30 = *(_WORD *)(v3 + 472);
        v31 = (unsigned int *)(v3 + 304);
        if ( v4 )
        {
          v32 = v28;
          *(_WORD *)(v3 + 472) = v30 | 1;
LABEL_47:
          RtlTimelineBitmapUpdate(v31, v32);
LABEL_48:
          PopEtEnergyContextProcessStateUpdate(a1);
          return (void *)PopReleaseRwLock(v8);
        }
        v43 = v28;
        *(_WORD *)(v3 + 472) = v30 & 0xFFFE;
        v35 = v28;
      }
      RtlTimelineBitmapUpdateRange((__int64 *)v31, v43 - (v29 >> 12), v35);
      goto LABEL_48;
    }
    v36 = v4 != 0;
    if ( a2 == 11 )
    {
      v37 = (unsigned int *)(v3 + 360);
      v38 = (unsigned __int64 *)(v3 + 400);
    }
    else
    {
      v37 = (unsigned int *)(v3 + 352);
      v38 = (unsigned __int64 *)(v3 + 392);
    }
    RtlStateDurationUpdate(v38, v36, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v39 = KeQueryTimelineBitmapTime();
    v14 = v39;
    if ( v36 )
    {
      v18 = v37;
      goto LABEL_16;
    }
    v41 = v39 - (v40 >> 12);
    v42 = (__int64 *)v37;
LABEL_56:
    RtlTimelineBitmapUpdateRange(v42, v41, v39);
    return (void *)PopReleaseRwLock(v8);
  }
  return result;
}
