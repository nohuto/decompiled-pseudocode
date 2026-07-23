/*
 * XREFs of AlpcpFlushCancelQueue @ 0x14088E278
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x14088EE5C (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpFlushCancelQueue(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD **v5; // rsi
  char *v6; // rax
  char *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD **v10; // r9
  ULONG_PTR v11; // r8

  v2 = (unsigned __int64 *)(a1 + 136);
  v5 = (_QWORD **)(a1 + 384);
  v6 = (char *)KeAbPreAcquire(a1 + 136, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v6, (__int64)v2);
  if ( v7 )
    v7[10] = 1;
  v8 = *v5;
  while ( v8 != v5 )
  {
    v10 = (_QWORD **)v8;
    v11 = (ULONG_PTR)(v8 - 10);
    v8 = (_QWORD *)*v8;
    if ( !a2 || *(_QWORD *)(v11 + 56) == a2 )
    {
      *(_DWORD *)(v11 + 40) &= ~0x20000u;
      *v10[1] = *v10;
      (*v10)[1] = v10[1];
      --*(_DWORD *)(a1 + 464);
      *(_QWORD *)(v11 + 56) = 0LL;
      *(_QWORD *)(v11 + 64) = 0LL;
      AlpcpDereferenceBlobEx(v11);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
