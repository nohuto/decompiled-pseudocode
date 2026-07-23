/*
 * XREFs of CcFlushCacheAcquireRange @ 0x140276EF0
 * Callers:
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x140279FE0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x14027B44C (CcWriteBehindAsync.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x14057B7CC (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CcAcquireByteRangeForWrite @ 0x1404D5E90 (CcAcquireByteRangeForWrite.c)
 */

__int64 __fastcall CcFlushCacheAcquireRange(__int64 a1)
{
  unsigned __int8 v2; // cl
  __int64 v3; // rbp
  char v4; // r14
  char v5; // r12
  int v6; // esi
  __int64 v7; // r13
  volatile signed __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r15
  bool v11; // r15
  char v12; // dl
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v16; // [rsp+90h] [rbp+8h]
  __int64 v17; // [rsp+98h] [rbp+10h]
  __int64 v18; // [rsp+A0h] [rbp+18h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_BYTE *)(a1 + 132);
  v5 = *(_BYTE *)(a1 + 133);
  v17 = *(_QWORD *)(a1 + 96);
  v18 = *(_QWORD *)(a1 + 88);
  if ( (*(_DWORD *)(v3 + 200) || !v4 || v5)
    && (*(_QWORD *)(v3 + 8) || (*(_DWORD *)(v3 + 152) & 4) != 0 || *(_DWORD *)(v3 + 112))
    && !*(_DWORD *)(a1 + 64) )
  {
    v6 = 0;
    v7 = a1 + 208;
    if ( !*(_BYTE *)(a1 + 201) )
      v7 = 0LL;
    if ( !v4 )
      goto LABEL_19;
    v16 = *(_QWORD *)(v3 + 536);
    v8 = (volatile signed __int64 *)(v16 + 1280);
    v9 = KeAbPreAcquire(v16 + 1280, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 1280), 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, v8);
    if ( v10 )
      *(_BYTE *)(v10 + 10) = 1;
    v11 = *(_QWORD *)(v16 + 1256) == (_QWORD)KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    if ( v11 )
    {
      v12 = 1;
    }
    else
    {
LABEL_19:
      v12 = 0;
      if ( !v4 )
        goto LABEL_22;
    }
    if ( !v5 )
    {
      v13 = 0;
      v14 = a1 + 48;
      return (unsigned __int8)CcAcquireByteRangeForWrite(v3, v6, v13, v18, a1 + 40, v14, a1 + 120, v12, v7) != 0;
    }
LABEL_22:
    v13 = *(_DWORD *)(a1 + 48);
    v14 = a1 + 48;
    if ( !v4 || v5 )
    {
      if ( v17 )
        v6 = a1 + 32;
    }
    return (unsigned __int8)CcAcquireByteRangeForWrite(v3, v6, v13, v18, a1 + 40, v14, a1 + 120, v12, v7) != 0;
  }
  return v2;
}
