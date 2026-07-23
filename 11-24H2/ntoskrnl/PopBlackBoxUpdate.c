/*
 * XREFs of PopBlackBoxUpdate @ 0x140A13418
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlTestProtectedAccess @ 0x1409E37B0 (RtlTestProtectedAccess.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBlackBoxUpdate(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 (**v4)[2]; // rsi
  char v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rax
  char *v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  size_t v11; // r14
  unsigned int v12; // edi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 Pool2; // rax
  char v17; // [rsp+50h] [rbp+8h]

  v17 = 0;
  v3 = *(int *)(a1 + 24);
  if ( (unsigned int)v3 > 0x18 )
  {
    v12 = -1073741811;
    goto LABEL_16;
  }
  v4 = &PopBlackBoxEntries + 13 * v3;
  if ( a2
    && ((_DWORD)v4[2] & 1) != 0
    && !RtlTestProtectedAccess(
          (PS_PROTECTION)SBYTE2(KeGetCurrentThread()->Process[3].ActiveGroupsMask.Masks[1]),
          (PS_PROTECTION)97) )
  {
    v12 = -1073741790;
    goto LABEL_16;
  }
  v5 = *(_BYTE *)(a1 + 28) & 1;
  v17 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (char *)KeAbPreAcquire((__int64)&PopBlackBoxLock, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopBlackBoxLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PopBlackBoxLock, v7, (__int64)&PopBlackBoxLock);
  if ( v8 )
    v8[10] = 1;
  if ( ((_DWORD)v4[2] & 2) != 0 )
  {
    v12 = -1073741790;
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
  {
    v10 = 0LL;
    v11 = 4096LL;
    if ( v9 < 0x1000 )
      v11 = *(_QWORD *)(a1 + 8);
    v4[12] = (__int64 (*)[2])v9;
    v4[11] = (__int64 (*)[2])v11;
LABEL_12:
    if ( v4[10] || (Pool2 = ExAllocatePool2(0x40uLL, 0x1000uLL, 0x206D654Du), (v4[10] = (__int64 (*)[2])Pool2) != 0LL) )
    {
      v4[9] = (__int64 (*)[2])(MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
      if ( v11 )
        memmove((char *)v4[10] + v10, *(const void **)a1, v11);
      v12 = 0;
    }
    else
    {
      v12 = -1073741670;
    }
    goto LABEL_16;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( !v9 )
  {
LABEL_37:
    v12 = -1073741811;
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v14 = v10 + v9;
  v15 = -1LL;
  if ( v14 >= v10 )
    v15 = v14;
  v12 = v14 < v10 ? 0xC0000095 : 0;
  if ( v14 >= v10 )
  {
    if ( v15 <= (unsigned __int64)v4[12] )
    {
      if ( v10 < 0x1000 )
      {
        if ( v15 > 0x1000 )
          v11 = 4096 - v10;
      }
      else
      {
        v11 = 0LL;
      }
      goto LABEL_12;
    }
    goto LABEL_37;
  }
LABEL_16:
  if ( v17 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBlackBoxLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBlackBoxLock);
    KeAbPostRelease((ULONG_PTR)&PopBlackBoxLock);
    KeLeaveCriticalRegion();
  }
  return v12;
}
