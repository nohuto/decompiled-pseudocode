/*
 * XREFs of ExDestroyHandle @ 0x1408961C0
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     AlpcpFreeMessageFunction @ 0x140896B30 (AlpcpFreeMessageFunction.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     RtlpInsertStringAtom @ 0x140A249F0 (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x140A34188 (RtlpFreeHandleForAtom.c)
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x1408497E8 (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int Number; // ebx
  unsigned int v7; // r14d
  _QWORD *HandleExtraInfo; // rax
  char v9; // bp
  ULONG_PTR v10; // rbx
  char *v11; // rax
  char *v12; // rdi
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
  v11 = (char *)KeAbPreAcquire(v10, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v11, v10);
  if ( v12 )
    v12[10] = 1;
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
