/*
 * XREFs of AlpcpCleanupProcessViews @ 0x1408FF9DC
 * Callers:
 *     LpcExitProcess @ 0x1408FF998 (LpcExitProcess.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     AlpcpForceUnlinkSecureView @ 0x14073FC54 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpCleanupProcessViews(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rsi
  unsigned int v4; // r14d
  __int64 v5; // rbp
  char *v6; // rax
  char *v7; // rdi
  _QWORD *v8; // r13
  __int64 v9; // rax
  ULONG_PTR v10; // rdi
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rax
  ULONG_PTR v14; // r15
  char *v15; // rax
  char *v16; // rdi
  const void *v17; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 1408);
  v17 = 0LL;
  --CurrentThread->KernelApcDisable;
  v4 = 0;
  v5 = 0LL;
  v6 = (char *)KeAbPreAcquire(a1 + 1408, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v6, (__int64)v2);
  if ( v7 )
    v7[10] = 1;
  v8 = (_QWORD *)(a1 + 1416);
  while ( (_QWORD *)*v8 != v8 )
  {
    v9 = 0LL;
    v10 = *v8 - 80LL;
    if ( v17 == (const void *)v10 )
      v9 = v5;
    v5 = v9;
    v11 = v9;
    v12 = v4 + 1;
    v4 = 0;
    if ( v17 == (const void *)v10 )
      v4 = v12;
    v13 = *v8 - 80LL;
    if ( v17 == (const void *)v10 )
      v13 = (__int64)v17;
    v17 = (const void *)v13;
    v14 = v10 & -(__int64)(AlpcpReferenceBlob(v10) != 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    if ( v5 )
    {
      if ( v4 > 0x64 && (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v11 - MEMORY[0xFFFFF780000003B0]) > 0x23C34600 )
      {
        DbgPrintEx(0x69u, 0, "ALPC: View @ %p is stuck.\n", v17);
        if ( (_BYTE)KdDebuggerEnabled )
          __debugbreak();
        v4 = 0;
        v5 = 0LL;
      }
    }
    else
    {
      v5 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    }
    if ( v14 )
    {
      AlpcpForceUnlinkSecureView(v14);
      AlpcpDereferenceBlobEx(v14, 1);
    }
    v15 = (char *)KeAbPreAcquire((__int64)v2, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, v15, (__int64)v2);
    if ( v16 )
      v16[10] = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
}
