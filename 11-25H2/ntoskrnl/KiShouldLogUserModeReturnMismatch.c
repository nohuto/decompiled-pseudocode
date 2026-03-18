/*
 * XREFs of KiShouldLogUserModeReturnMismatch @ 0x140A3488C
 * Callers:
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x14043E4E0 (KiLogControlProtectionUserModeReturnMismatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

char __fastcall KiShouldLogUserModeReturnMismatch(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  char v4; // bp
  int v6; // edx
  int v7; // edx
  __int64 v8; // rsi
  unsigned int v9; // r8d
  int v10; // r12d
  unsigned int i; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned int j; // ecx

  v3 = *(unsigned __int64 **)(a1 + 424);
  v4 = 0;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 0;
      v8 = 7LL;
    }
    else
    {
      v8 = 4LL;
    }
  }
  else
  {
    v8 = 1LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)&v3[v8 + 2]);
  v9 = v3[v8 + 1];
  v10 = HIDWORD(v3[v8 + 1]);
  if ( v9 != v10 )
  {
    for ( i = 0; i < v9; ++i )
    {
      if ( *(_QWORD *)(v3[v8] + 8LL * i) == a3 )
        return v4;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = KeAbPreAcquire((__int64)v3, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v14, (__int64)v3);
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
    v16 = LODWORD(v3[v8 + 1]);
    if ( (_DWORD)v16 != v10 )
    {
      v17 = v3[v8];
      for ( j = 0; j < (unsigned int)v16; ++j )
      {
        if ( *(_QWORD *)(v17 + 8LL * j) == a3 )
          goto LABEL_24;
      }
      *(_QWORD *)(v17 + 8 * v16) = a3;
      v4 = 1;
      ++LODWORD(v3[v8 + 1]);
    }
LABEL_24:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegion();
  }
  return v4;
}
