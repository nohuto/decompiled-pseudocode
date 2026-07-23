/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x14091C554
 * Callers:
 *     MiCommitVadCfgBits @ 0x14091C360 (MiCommitVadCfgBits.c)
 * Callees:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiGetControlAreaLoadConfig @ 0x14045AB84 (MiGetControlAreaLoadConfig.c)
 *     MiIsCfgBitMapPageShared @ 0x14046208C (MiIsCfgBitMapPageShared.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 *v4; // rcx
  _KPROCESS *Process; // rax
  __int64 ControlAreaLoadConfig; // rax
  _QWORD *v7; // r8
  __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 *v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  char *v16; // rax
  char *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rbx
  int IsCfgBitMapPageShared; // eax
  unsigned __int64 v24; // rsi
  int v25; // ebp
  unsigned int v26; // eax
  unsigned int v28; // r8d
  int v29; // [rsp+50h] [rbp-88h] BYREF
  int v30; // [rsp+54h] [rbp-84h] BYREF
  __int64 v31; // [rsp+58h] [rbp-80h]
  int v32[2]; // [rsp+60h] [rbp-78h]
  int v33[2]; // [rsp+68h] [rbp-70h]
  _KPROCESS *v34; // [rsp+70h] [rbp-68h]
  __int64 v35[2]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v36; // [rsp+88h] [rbp-50h]
  int v37; // [rsp+90h] [rbp-48h]

  v30 = 0;
  v3 = a3;
  *(_QWORD *)v33 = a1;
  v31 = a3;
  v4 = *(__int64 **)(a3 + 72);
  Process = KeGetCurrentThread()->ApcState.Process;
  v29 = 0;
  v34 = Process;
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(*v4);
  v8 = v7[2];
  v9 = (unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32;
  v10 = (unsigned __int64 *)(v8 + 40);
  v11 = (unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32;
  *(_QWORD *)v32 = *(_QWORD *)(ControlAreaLoadConfig + 8);
  v12 = (*(unsigned int *)(v3 + 24) | v11) << 12;
  v13 = 2 * (((((*(unsigned int *)(v3 + 28) | v9) << 12) | 0xFFF) - v12 + 1) >> 4);
  v14 = *v7 + ((2 * (v12 >> 4)) >> 3);
  v15 = v13 >> 3;
  v16 = (char *)KeAbPreAcquire(v8 + 40, 0LL);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v16, (__int64)v10);
  if ( v17 )
    v17[10] = 1;
  if ( (unsigned int)MiVadDeleted(v8) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    return 3221225738LL;
  }
  v20 = v15 + v14;
  v36 = 0LL;
  v21 = (v15 + v14 - 1) | 0xFFF;
  v37 = 0;
  v22 = v14 & 0xFFFFFFFFFFFFF000uLL;
  *(_OWORD *)v35 = 0LL;
  while ( v22 <= v21 )
  {
    IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v22, v8, v18, v19);
    if ( IsCfgBitMapPageShared == 2 )
    {
      v24 = v22 | 0xFFF;
      goto LABEL_10;
    }
    if ( IsCfgBitMapPageShared != 1 )
    {
      if ( IsCfgBitMapPageShared == 3 )
      {
        v24 = v21;
        if ( (v22 | 0x1FFFFF) <= v21 )
          v24 = v22 | 0x1FFFFF;
LABEL_10:
        v25 = MiSetProtectionOnSection((__int64)v34, v8, v22, v24, 2u, 0, &v30, &v29);
        if ( v25 < 0 )
          goto LABEL_22;
        v22 = v24 - 4095;
      }
      else
      {
        if ( v22 >= v14 )
          v28 = 0;
        else
          v28 = v14 - v22;
        if ( v22 + 4096 <= v20 )
        {
          v26 = 4096 - v28;
        }
        else
        {
          v26 = v20 - v22 - v28;
          if ( (_DWORD)v20 - (_DWORD)v22 == v28 )
            break;
        }
        v25 = MiCopyToCfgBitMap(
                v33[0],
                v32[0],
                v28,
                0,
                (void *)(v22 + v28),
                v8,
                (v28 + (_DWORD)v22 - (_DWORD)v14) >> 1 << 7,
                (__int64)v35,
                v26,
                v3);
        if ( v25 < 0 )
          goto LABEL_22;
      }
      v3 = v31;
    }
    v22 += 4096LL;
  }
  v25 = 0;
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
  KeAbPostRelease(v8 + 40);
  return (unsigned int)v25;
}
