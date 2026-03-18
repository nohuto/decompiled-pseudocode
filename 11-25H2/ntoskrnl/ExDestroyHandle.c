/*
 * XREFs of ExDestroyHandle @ 0x1408B4AF0
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     AlpcpFreeMessageFunction @ 0x1408B4800 (AlpcpFreeMessageFunction.c)
 *     RtlpFreeHandleForAtom @ 0x1408B5F88 (RtlpFreeHandleForAtom.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     RtlpInsertStringAtom @ 0x140A2A858 (RtlpInsertStringAtom.c)
 *     PspThreadDelete @ 0x140AC7750 (PspThreadDelete.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpUpdateDebugInfo @ 0x140851530 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x140851804 (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int Number; // ebx
  unsigned int v7; // r14d
  _QWORD *HandleExtraInfo; // rax
  char v9; // bp
  ULONG_PTR v10; // rbx
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v15; // rax
  signed __int32 v16[14]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 96) )
    ExpUpdateDebugInfo(a1, (__int64)KeGetCurrentThread(), a2, 2);
  Number = 0;
  v7 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a3 >> 1);
  *a3 = 0LL;
  _InterlockedOr(v16, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock(a1 + 48, 0LL);
  HIDWORD(v17) = HIDWORD(a2);
  if ( *(_DWORD *)(a1 + 4) )
  {
    LODWORD(v17) = a2 & 0xFFFFFFFC;
    HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo((unsigned int *)a1, v17);
    if ( HandleExtraInfo )
      *HandleExtraInfo = 0LL;
  }
  a3[1] = 0LL;
  v9 = *(_BYTE *)(a1 + 44) & 1;
  if ( !v9 )
    Number = KeGetPcr()->Prcb.Number;
  v10 = a1 + ((Number + 1LL) << 6);
  v11 = KeAbPreAcquire(v10, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v11, v10);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  if ( v9 )
  {
    v15 = *(_QWORD *)(v10 + 16);
    if ( v15 )
      *(_QWORD *)(v15 + 8) = a3;
    else
      *(_QWORD *)(v10 + 8) = a3;
    *(_QWORD *)(v10 + 16) = a3;
  }
  else
  {
    v13 = *(_QWORD *)(v10 + 8);
    a3[1] = v13;
    if ( !v13 )
      *(_QWORD *)(v10 + 16) = a3;
    *(_QWORD *)(v10 + 8) = a3;
  }
  --*(_DWORD *)(v10 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease(v10);
  return v7;
}
