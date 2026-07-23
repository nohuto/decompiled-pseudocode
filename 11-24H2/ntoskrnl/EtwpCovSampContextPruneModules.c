/*
 * XREFs of EtwpCovSampContextPruneModules @ 0x140ADB9FC
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140923930 (EtwpCovSampContextGetModule.c)
 *     EtwpCoverageSamplerQuery @ 0x1409454F0 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetCurrentThreadId @ 0x1404251E0 (PsGetCurrentThreadId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpCovSampModuleCleanup @ 0x140A0C308 (EtwpCovSampModuleCleanup.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall EtwpCovSampContextPruneModules(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned __int64 result; // rax
  __int64 v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // r14
  char *v9; // r13
  __int64 *i; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _OWORD *v14; // r8
  _QWORD *v15; // r10
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // r13
  struct _KTHREAD *v19; // rax
  char *v20; // rax
  char *v21; // r15
  _OWORD *v22; // r11
  _QWORD *v23; // rax
  char *v24; // r10
  bool v25; // zf
  int v26; // r9d
  char *j; // rdx
  _QWORD *v28; // r15
  int v29; // r9d
  _QWORD *k; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  _OWORD **v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  __int64 v37; // [rsp+28h] [rbp-99h]
  __int128 v38; // [rsp+30h] [rbp-91h] BYREF
  _OWORD v39[2]; // [rsp+40h] [rbp-81h] BYREF
  _OWORD v40[8]; // [rsp+68h] [rbp-59h] BYREF

  v2 = *(_DWORD *)(a1 + 16) >> 1;
  v39[0] = 0LL;
  result = *(unsigned int *)(a1 + 1244);
  v38 = 0LL;
  if ( (unsigned int)result > v2 || *(_DWORD *)(a1 + 1636) > (signed int)v2 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 1640),
                             (signed __int32)PsGetCurrentThreadId(),
                             0);
    if ( !(_DWORD)result )
    {
      v4 = 8LL;
      v5 = v40;
      v6 = 8LL;
      do
      {
        v5[1] = v5;
        *v5 = v5;
        v5 += 2;
        --v6;
      }
      while ( v6 );
      CurrentThread = KeGetCurrentThread();
      v8 = (volatile signed __int64 *)(a1 + 1176);
      --CurrentThread->KernelApcDisable;
      v9 = (char *)KeAbPreAcquire(a1 + 1176, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1176), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 1176), 0, v9, a1 + 1176);
      if ( v9 )
        v9[10] = 1;
      for ( i = *(__int64 **)(a1 + 1224); i != (__int64 *)(a1 + 1224); i = (__int64 *)*i )
      {
        if ( *(i - 1) == 1 && !*((_DWORD *)i + 15) )
        {
          v11 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)i + 16);
          if ( v11 >= 0x100 )
            v12 = ((v11 - 256) >> 8) + 4;
          else
            v12 = v11 >> 6;
          if ( (unsigned int)v12 >= 8 )
            v12 = 7LL;
          v13 = i + 2;
          v14 = &v40[v12];
          v15 = (_QWORD *)*((_QWORD *)v14 + 1);
          if ( (_OWORD *)*v15 != v14 )
LABEL_62:
            __fastfail(3u);
          *v13 = v14;
          i[3] = (__int64)v15;
          *v15 = v13;
          *((_QWORD *)v14 + 1) = v13;
        }
      }
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
      KeAbPostRelease(a1 + 1176);
      KeLeaveCriticalRegion();
      v16 = v39;
      *((_QWORD *)&v39[0] + 1) = v39;
      *(_QWORD *)&v39[0] = v39;
      v17 = v40;
      do
      {
        if ( (_QWORD *)*v17 != v17 )
        {
          *v16 = *v17;
          *(_QWORD *)(*v17 + 8LL) = *((_QWORD *)&v39[0] + 1);
          *((_QWORD *)&v39[0] + 1) = v17[1];
          **((_QWORD **)&v39[0] + 1) = v39;
          v16 = (_QWORD *)*((_QWORD *)&v39[0] + 1);
        }
        v17 += 2;
        --v4;
      }
      while ( v4 );
      *((_QWORD *)&v38 + 1) = &v38;
      *(_QWORD *)&v38 = &v38;
      v18 = 0LL;
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      v20 = (char *)KeAbPreAcquire(a1 + 1176, 0LL);
      v21 = v20;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1176), v20, a1 + 1176);
      if ( v21 )
        v21[10] = 1;
      v22 = *(_OWORD **)&v39[0];
      *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
      while ( v22 != v39 )
      {
        v23 = v22;
        v24 = (char *)v22 - 88;
        v25 = *((_QWORD *)v22 - 3) == 1LL;
        v22 = *(_OWORD **)v22;
        v23[1] = v23;
        *v23 = v23;
        if ( v25 && !*((_DWORD *)v24 + 33) && ++v18 > (unsigned __int64)*(unsigned int *)(a1 + 16) )
        {
          if ( (*((_DWORD *)v24 + 30) & 0x40000) == 0 )
          {
            v26 = *(_DWORD *)(a1 + 1196) >> 5;
            v37 = *((_QWORD *)v24 + 1) & (-1LL << (*(_DWORD *)(a1 + 1196) & 0x1F));
            for ( j = (char *)(*(_QWORD *)(a1 + 1200)
                             + 8LL
                             * ((37
                               * (BYTE6(v37)
                                + 37
                                * (BYTE5(v37)
                                 + 37
                                 * (BYTE4(v37)
                                  + 37
                                  * (BYTE3(v37)
                                   + 37 * (BYTE2(v37) + 37 * (BYTE1(v37) + 37 * ((unsigned __int8)v37 + 11623883)))))))
                               + HIBYTE(v37)) & (unsigned int)(v26 - 1))); (*(_QWORD *)j & 1) == 0; j = *(char **)j )
            {
              if ( *(char **)j == v24 )
              {
                *(_QWORD *)j = *(_QWORD *)v24;
                --*(_DWORD *)(a1 + 1192);
                break;
              }
            }
            *(_QWORD *)v24 = 0LL;
          }
          v28 = v24 + 16;
          if ( *((_QWORD *)v24 + 2) )
          {
            v29 = *(_DWORD *)(a1 + 1212) >> 5;
            v37 = *((_QWORD *)v24 + 3) & (-1LL << (*(_DWORD *)(a1 + 1212) & 0x1F));
            for ( k = (_QWORD *)(*(_QWORD *)(a1 + 1216)
                               + 8LL
                               * ((37
                                 * (BYTE6(v37)
                                  + 37
                                  * (BYTE5(v37)
                                   + 37
                                   * (BYTE4(v37)
                                    + 37
                                    * (BYTE3(v37)
                                     + 37 * (BYTE2(v37) + 37 * (BYTE1(v37) + 37 * ((unsigned __int8)v37 + 11623883)))))))
                                 + HIBYTE(v37)) & (unsigned int)(v29 - 1))); (*k & 1) == 0; k = (_QWORD *)*k )
            {
              if ( (_QWORD *)*k == v28 )
              {
                *k = *v28;
                --*(_DWORD *)(a1 + 1208);
                break;
              }
            }
            *v28 = 0LL;
          }
          v31 = v24 + 72;
          v32 = *((_QWORD *)v24 + 9);
          if ( *(char **)(v32 + 8) != v24 + 72 )
            goto LABEL_62;
          v33 = (_QWORD *)*((_QWORD *)v24 + 10);
          if ( (_QWORD *)*v33 != v31 )
            goto LABEL_62;
          *v33 = v32;
          *(_QWORD *)(v32 + 8) = v33;
          v34 = (_OWORD **)*((_QWORD *)&v38 + 1);
          --*(_DWORD *)(a1 + 1240);
          if ( *v34 != &v38 )
            goto LABEL_62;
          *((_QWORD *)v24 + 10) = v34;
          *v31 = &v38;
          *v34 = v31;
          *((_QWORD *)&v38 + 1) = v24 + 72;
        }
      }
      *(_DWORD *)(a1 + 1244) = 0;
      *(_DWORD *)(a1 + 1636) = 0;
      *(_QWORD *)(a1 + 1184) = 0LL;
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
      KeAbPostRelease(a1 + 1176);
      KeLeaveCriticalRegion();
      while ( 1 )
      {
        result = v38;
        if ( (__int128 *)v38 == &v38 )
          break;
        if ( *(__int128 **)(v38 + 8) != &v38 )
          goto LABEL_62;
        v35 = *(_QWORD *)v38;
        if ( *(_QWORD *)(*(_QWORD *)v38 + 8LL) != (_QWORD)v38 )
          goto LABEL_62;
        *(_QWORD *)&v38 = *(_QWORD *)v38;
        v36 = (_QWORD *)(result - 72);
        *(_QWORD *)(v35 + 8) = &v38;
        *(_QWORD *)(result - 72 + 64) = 0LL;
        *(_QWORD *)(result + 8) = result;
        *(_QWORD *)result = result;
        EtwpCovSampModuleCleanup(result - 72);
        ExFreePoolWithTag(v36, 0x56777445u);
      }
      _InterlockedExchange((volatile __int32 *)(a1 + 1640), 0);
    }
  }
  return result;
}
