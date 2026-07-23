/*
 * XREFs of PfpRpFileKeyUpdate @ 0x14083FEE0
 * Callers:
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     PfpRpRehashIfNeeded @ 0x140A2EC24 (PfpRpRehashIfNeeded.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r15d
  int v5; // eax
  __int64 v7; // r12
  _QWORD *v8; // rdi
  struct _EX_RUNDOWN_REF *v9; // r14
  unsigned __int64 v10; // rtt
  _QWORD *v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // r12d
  WCHAR *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  WCHAR *j; // rbp
  unsigned __int8 v18; // al
  volatile signed __int64 *v19; // rbp
  unsigned int v20; // r11d
  char v21; // cl
  unsigned int v22; // r11d
  unsigned __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r14
  _DWORD *v26; // r15
  __int64 v27; // rdx
  unsigned __int64 v28; // rtt
  void *v30; // rcx
  unsigned __int64 v31; // r10
  _QWORD *i; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // rcx
  __int64 v35; // [rsp+20h] [rbp-88h]
  unsigned __int64 v36; // [rsp+20h] [rbp-88h]
  PEX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp-78h]
  PVOID v38; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *Pool2; // [rsp+40h] [rbp-68h]
  PVOID P; // [rsp+48h] [rbp-60h]
  unsigned __int64 v41; // [rsp+50h] [rbp-58h]
  _DWORD *v42; // [rsp+58h] [rbp-50h]
  __int64 v43; // [rsp+60h] [rbp-48h]
  unsigned int v45; // [rsp+C8h] [rbp+20h]

  v3 = 0;
  v35 = *(_QWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a1 + 152);
  v38 = 0LL;
  v7 = a1;
  v45 = 0;
  v8 = 0LL;
  if ( (v5 & 1) == 0 )
    return 3221225600LL;
  v9 = (struct _EX_RUNDOWN_REF *)(a1 + 136);
  RunRef = (PEX_RUNDOWN_REF)(a1 + 136);
  _m_prefetchw((const void *)(a1 + 136));
  v10 = *(_QWORD *)(a1 + 136) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v10 + 2, v10)
    && !ExfAcquireRundownProtection(v9) )
  {
    return 3221225600LL;
  }
  if ( !a3 )
  {
    v19 = (volatile signed __int64 *)(v7 + 48);
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)(v7 + 48));
    v11 = 0LL;
LABEL_33:
    if ( *(_DWORD *)v7 )
    {
      v31 = v35 & (-1LL << (*(_DWORD *)(v7 + 4) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(v7 + 8)
                         + 8
                         * ((37
                           * (BYTE6(v31)
                            + 37
                            * (BYTE5(v31)
                             + 37
                             * (BYTE4(v31)
                              + 37
                              * ((((unsigned int)v35 & (-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 24)
                               + 37
                               * ((unsigned __int8)(((unsigned int)v35 & (-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 16)
                                + 37
                                * (37 * ((unsigned __int8)v31 + 11623883)
                                 + (unsigned __int8)((unsigned __int16)(v35 & (-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 8)))))))
                           + HIBYTE(v31)) & ((*(_DWORD *)(v7 + 4) >> 5) - 1))); ; i = (_QWORD *)*i )
      {
        v33 = (_QWORD *)*i;
        if ( (*i & 1) != 0 )
          break;
        if ( ((-1LL << (*(_DWORD *)(v7 + 4) & 0x1F)) & v33[1]) == v31 )
        {
          *i = *v33;
          --*(_DWORD *)v7;
          *v33 |= 0x8000000000000002uLL;
          if ( *(_QWORD **)(v7 + 16) == v33 )
            *(_QWORD *)(v7 + 16) = v7 + 24;
          *v33 = v8;
          v8 = v33;
          goto LABEL_33;
        }
      }
    }
    goto LABEL_19;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x18uLL, 0x4B466650u);
  v11 = Pool2;
  if ( Pool2 )
  {
    v42 = (_DWORD *)(v7 + 4);
    v12 = 2 * (*(_DWORD *)(v7 + 4) >> 5);
    if ( *(_DWORD *)v7 >= v12 )
    {
      v13 = 2 * (*(_DWORD *)(v7 + 4) >> 5);
      if ( !v12 )
        v13 = 64;
      v38 = (PVOID)ExAllocatePool2(0x100uLL, 8LL * v13, 0x48466650u);
      if ( !v38 )
        v13 = 0;
      v45 = v13;
      v7 = a1;
    }
    v14 = *(WCHAR **)(a2 + 24);
    v15 = *(unsigned __int16 *)(a2 + 34);
    v16 = 314159LL;
    for ( j = &v14[v15]; v14 < j; v16 = 37 * (v18 + 37 * v16) )
      v18 = RtlUpcaseUnicodeChar(*v14++);
    if ( v16 )
    {
      v19 = (volatile signed __int64 *)(v7 + 48);
      FsRtlAcquirePushLockExclusive((unsigned __int64 *)(v7 + 48));
      v20 = *(_DWORD *)(v7 + 4);
      P = Pool2;
      v21 = v20 & 0x1F;
      v22 = v20 >> 5;
      v23 = v35 & (-1LL << v21);
      v41 = v23 >> 16;
      if ( v22 )
      {
        v43 = v35 & (-1LL << v21);
        v24 = v45;
        v25 = a1;
        v26 = (_DWORD *)(a1 + 4);
        v27 = *(_QWORD *)(a1 + 8)
            + 8
            * ((HIBYTE(v23)
              + 37
              * (BYTE6(v23)
               + 37
               * (BYTE5(v23)
                + 37
                * (BYTE4(v23)
                 + 37
                 * (BYTE3(v23) + 37
                               * ((unsigned __int8)v41 + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))) & (v22 - 1));
        while ( 1 )
        {
          v27 = *(_QWORD *)v27;
          if ( (v27 & 1) != 0 )
            break;
          if ( v23 == ((-1LL << v21) & *(_QWORD *)(v27 + 8)) )
          {
            v11 = P;
            v3 = 0;
            *(_QWORD *)(v27 + 16) = v16;
            goto LABEL_19;
          }
        }
        v11 = P;
      }
      else
      {
        v11 = Pool2;
        v24 = v45;
        v25 = a1;
        v26 = v42;
      }
      *(_OWORD *)v11 = 0LL;
      v11[1] = v35;
      v11[2] = v16;
      if ( (unsigned int)PfpRpRehashIfNeeded(v25, &v38, v24) )
      {
        v36 = v11[1] & (-1LL << (*v26 & 0x1F));
        v34 = (_QWORD *)(*(_QWORD *)(v25 + 8)
                       + 8
                       * ((HIBYTE(v36)
                         + 37
                         * (BYTE6(v36)
                          + 37
                          * (BYTE5(v36)
                           + 37
                           * (BYTE4(v36)
                            + 37
                            * (BYTE3(v36)
                             + 37 * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v36 + 11623883)))))))) & (unsigned int)((*v26 >> 5) - 1)));
        *v11 = *v34;
        *v34 = v11;
        ++*(_DWORD *)v25;
        v3 = 0;
        v11 = 0LL;
      }
      else
      {
        v3 = -1073741670;
      }
LABEL_19:
      v9 = RunRef;
      if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v19);
      KeAbPostRelease((ULONG_PTR)v19);
      KeLeaveCriticalRegionThread();
      goto LABEL_22;
    }
    v3 = -1073741747;
  }
  else
  {
    v3 = -1073741670;
  }
LABEL_22:
  _m_prefetchw(v9);
  v28 = v9->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v28 - 2, v28) )
    ExfReleaseRundownProtection(v9);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  while ( v8 )
  {
    v30 = v8;
    v8 = (_QWORD *)*v8;
    ExFreePoolWithTag(v30, 0);
  }
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
  return v3;
}
