/*
 * XREFs of AlpcpCleanupProcessViews @ 0x1408A977C
 * Callers:
 *     LpcExitProcess @ 0x1408A9738 (LpcExitProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     AlpcpForceUnlinkSecureView @ 0x140741D24 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 */

void __fastcall AlpcpCleanupProcessViews(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rsi
  unsigned int v4; // r14d
  __int64 v5; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // r13
  __int64 v9; // rax
  ULONG_PTR v10; // rdi
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rax
  ULONG_PTR v14; // r15
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  const void *v19; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 1408);
  v19 = 0LL;
  --CurrentThread->KernelApcDisable;
  v4 = 0;
  v5 = 0LL;
  v6 = KeAbPreAcquire(a1 + 1408, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v6, (__int64)v2);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = (_QWORD *)(a1 + 1416);
  while ( (_QWORD *)*v8 != v8 )
  {
    v9 = 0LL;
    v10 = *v8 - 80LL;
    if ( v19 == (const void *)v10 )
      v9 = v5;
    v5 = v9;
    v11 = v9;
    v12 = v4 + 1;
    v4 = 0;
    if ( v19 == (const void *)v10 )
      v4 = v12;
    v13 = *v8 - 80LL;
    if ( v19 == (const void *)v10 )
      v13 = (__int64)v19;
    v19 = (const void *)v13;
    v14 = v10 & -(__int64)(AlpcpReferenceBlob(v10) != 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    if ( v5 )
    {
      if ( v4 > 0x64 && (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v11 - MEMORY[0xFFFFF780000003B0]) > 0x23C34600 )
      {
        DbgPrintEx(0x69u, 0, "ALPC: View @ %p is stuck.\n", v19);
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
      AlpcpDereferenceBlobEx(v14, 1, v15, v16);
    }
    v17 = KeAbPreAcquire((__int64)v2, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, (__int64)v17, (__int64)v2);
    if ( v18 )
      *((_BYTE *)v18 + 10) = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
}
