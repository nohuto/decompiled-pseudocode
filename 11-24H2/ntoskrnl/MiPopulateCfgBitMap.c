/*
 * XREFs of MiPopulateCfgBitMap @ 0x14091C830
 * Callers:
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 *     MiMarkPrivateImageCfgBits @ 0x14091BF74 (MiMarkPrivateImageCfgBits.c)
 *     MiCommitVadCfgBits @ 0x14091C360 (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1409E4A6C (MiCfgMarkValidEntries.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiPopulateCfgBitMap(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // r13d
  void *Src; // r14
  __int128 *v10; // rsi
  __int64 v11; // rbp
  volatile signed __int64 *v12; // rbx
  char *v13; // rax
  char *v14; // rdi
  int v15; // r8d
  unsigned int v16; // edi
  int v18; // [rsp+58h] [rbp-70h]
  __int128 v19; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+70h] [rbp-58h]
  int v21; // [rsp+78h] [rbp-50h]

  v7 = (int)a1;
  Src = (void *)(*a1 + ((2 * (a5 >> 4)) >> 3));
  v18 = a2;
  v20 = 0LL;
  v21 = 0;
  v19 = 0LL;
  if ( a2 <= 1 || a4 )
    v10 = 0LL;
  else
    v10 = &v19;
  v11 = a1[2];
  v12 = (volatile signed __int64 *)(v11 + 40);
  v13 = (char *)KeAbPreAcquire(v11 + 40, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 40), v13, v11 + 40);
  if ( v14 )
    v14[10] = 1;
  if ( (unsigned int)MiVadDeleted(v11) )
  {
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 40));
    KeAbPostRelease(v11 + 40);
    return 3221225738LL;
  }
  else
  {
    v16 = MiCopyToCfgBitMap(v7, v18, v15, a4, Src, v11, 0, (__int64)v10, (2 * ((a6 - a5) >> 4)) >> 3, a7);
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 40));
    KeAbPostRelease(v11 + 40);
    return v16;
  }
}
