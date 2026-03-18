/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x140905BC4
 * Callers:
 *     MiCommitVadCfgBits @ 0x1409059D0 (MiCommitVadCfgBits.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiGetControlAreaLoadConfig @ 0x140465A8C (MiGetControlAreaLoadConfig.c)
 *     MiIsCfgBitMapPageShared @ 0x14047031C (MiIsCfgBitMapPageShared.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x14090603C (MiCopyToCfgBitMap.c)
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
  __int64 *v16; // rax
  __int64 *v17; // rbx
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rbx
  int IsCfgBitMapPageShared; // eax
  unsigned __int64 v22; // rsi
  int v23; // ebp
  unsigned int v24; // r8d
  unsigned int v25; // eax
  int v27; // [rsp+50h] [rbp-88h] BYREF
  int v28; // [rsp+54h] [rbp-84h] BYREF
  __int64 v29; // [rsp+58h] [rbp-80h]
  int v30[2]; // [rsp+60h] [rbp-78h]
  int v31[2]; // [rsp+68h] [rbp-70h]
  _KPROCESS *v32; // [rsp+70h] [rbp-68h]
  __int64 v33[2]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v34; // [rsp+88h] [rbp-50h]
  int v35; // [rsp+90h] [rbp-48h]

  v28 = 0;
  v3 = a3;
  *(_QWORD *)v31 = a1;
  v29 = a3;
  v4 = *(__int64 **)(a3 + 72);
  Process = KeGetCurrentThread()->ApcState.Process;
  v27 = 0;
  v32 = Process;
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(*v4);
  v8 = v7[2];
  v9 = (unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32;
  v10 = (unsigned __int64 *)(v8 + 40);
  v11 = (unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32;
  *(_QWORD *)v30 = *(_QWORD *)(ControlAreaLoadConfig + 8);
  v12 = (*(unsigned int *)(v3 + 24) | v11) << 12;
  v13 = 2 * (((((*(unsigned int *)(v3 + 28) | v9) << 12) | 0xFFF) - v12 + 1) >> 4);
  v14 = *v7 + ((2 * (v12 >> 4)) >> 3);
  v15 = v13 >> 3;
  v16 = KeAbPreAcquire(v8 + 40, 0LL);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v16, (__int64)v10);
  if ( v17 )
    *((_BYTE *)v17 + 10) = 1;
  if ( (unsigned int)MiVadDeleted(v8) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    return 3221225738LL;
  }
  v18 = v15 + v14;
  v34 = 0LL;
  v19 = (v15 + v14 - 1) | 0xFFF;
  v35 = 0;
  v20 = v14 & 0xFFFFFFFFFFFFF000uLL;
  *(_OWORD *)v33 = 0LL;
  while ( v20 <= v19 )
  {
    IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v20, v8);
    if ( IsCfgBitMapPageShared == 2 )
    {
      v22 = v20 | 0xFFF;
      goto LABEL_10;
    }
    if ( IsCfgBitMapPageShared != 1 )
    {
      if ( IsCfgBitMapPageShared != 3 )
      {
        if ( v20 < v14 )
          v24 = v14 - v20;
        else
          v24 = 0;
        if ( v20 + 4096 <= v18 )
        {
          v25 = 4096 - v24;
        }
        else
        {
          v25 = v18 - v20 - v24;
          if ( (_DWORD)v18 - (_DWORD)v20 == v24 )
            break;
        }
        v23 = MiCopyToCfgBitMap(
                v31[0],
                v30[0],
                v24,
                0,
                (void *)(v20 + v24),
                v8,
                (v24 + (_DWORD)v20 - (_DWORD)v14) >> 1 << 7,
                (__int64)v33,
                v25,
                v3);
        if ( v23 < 0 )
          goto LABEL_18;
        goto LABEL_12;
      }
      v22 = v19;
      if ( (v20 | 0x1FFFFF) <= v19 )
        v22 = v20 | 0x1FFFFF;
LABEL_10:
      v23 = MiSetProtectionOnSection((__int64)v32, v8, v20, v22, 2u, 0, &v28, &v27);
      if ( v23 < 0 )
        goto LABEL_18;
      v20 = v22 - 4095;
LABEL_12:
      v3 = v29;
    }
    v20 += 4096LL;
  }
  v23 = 0;
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
  KeAbPostRelease(v8 + 40);
  return (unsigned int)v23;
}
