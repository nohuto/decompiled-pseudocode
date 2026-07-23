/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x1407B4710
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MmUnmapIoSpace @ 0x1402929D0 (MmUnmapIoSpace.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1408590B8 (ExpGetSystemFirmwareTableInformation.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3)
{
  void *v4; // r15
  char v5; // r12
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rdi
  int SystemFirmwareTableInformation; // edi
  _DWORD *Pool2; // rax
  struct _KTHREAD *v11; // rax
  char *v12; // rax
  char *v13; // rdi
  _QWORD *v14; // rbx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  void *v18; // rdi
  unsigned int Length; // [rsp+28h] [rbp-90h]
  unsigned int v22; // [rsp+30h] [rbp-88h]
  volatile void *Address; // [rsp+40h] [rbp-78h]
  volatile void *v24; // [rsp+48h] [rbp-70h]
  PVOID BaseAddress; // [rsp+50h] [rbp-68h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-60h]
  __int128 Src; // [rsp+80h] [rbp-38h] BYREF
  int v28; // [rsp+90h] [rbp-28h]

  Src = 0LL;
  v28 = 0;
  v4 = 0LL;
  v5 = 0;
  BaseAddress = 0LL;
  NumberOfBytes = 0LL;
  if ( a2 < 0x20 )
  {
LABEL_2:
    v6 = -1073741811;
    goto LABEL_50;
  }
  v22 = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v24 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (char *)KeAbPreAcquire((__int64)&ExpPlatformBinaryLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&ExpPlatformBinaryLock, 0, v8, (__int64)&ExpPlatformBinaryLock);
  if ( v8 )
    v8[10] = 1;
  v5 = 1;
  if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
    goto LABEL_8;
  if ( !ExpPlatformBinaryTableInformation )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v5 = 0;
    if ( Length || v22 )
      goto LABEL_2;
    *(_QWORD *)&Src = 0x141435049LL;
    *((_QWORD *)&Src + 1) = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(&Src);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v6 = ((SystemFirmwareTableInformation >> 31) & 0x40) - 1073741701;
      goto LABEL_50;
    }
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, 0LL, 0x54425057u);
    v4 = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_50;
    }
    *Pool2 = 1094930505;
    Pool2[1] = 1;
    Pool2[2] = 1413632087;
    Pool2[3] = -16;
    v6 = ExpGetSystemFirmwareTableInformation(Pool2);
    if ( v6 < 0 )
      goto LABEL_50;
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = (char *)KeAbPreAcquire((__int64)&ExpPlatformBinaryLock, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpPlatformBinaryLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpPlatformBinaryLock, v12, (__int64)&ExpPlatformBinaryLock);
    if ( v13 )
      v13[10] = 1;
    if ( ExpPlatformBinaryTableInformation )
    {
      if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
        KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_8:
        v6 = -1073741637;
        goto LABEL_50;
      }
    }
    else
    {
      ExpPlatformBinaryTableInformation = v4;
      v4 = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 1LL);
  }
  if ( (v22 & 1) == 0 )
  {
    v14 = ExpPlatformBinaryTableInformation;
    if ( *((_BYTE *)ExpPlatformBinaryTableInformation + 64) != 1
      || *((_BYTE *)ExpPlatformBinaryTableInformation + 65) != 1
      || (v15 = *((unsigned __int16 *)ExpPlatformBinaryTableInformation + 33), (v15 & 1) != 0)
      || (v16 = *((_QWORD *)ExpPlatformBinaryTableInformation + 7)) == 0
      || *((_DWORD *)ExpPlatformBinaryTableInformation + 10) != 1 )
    {
      v6 = -1073741701;
      goto LABEL_51;
    }
    v17 = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    if ( (unsigned int)v17 > Length || v15 > v22 )
    {
      v6 = -1073741789;
      *(_DWORD *)(a1 + 24) = v17;
      *(_DWORD *)(a1 + 28) = *((unsigned __int16 *)v14 + 33);
      goto LABEL_51;
    }
    NumberOfBytes = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    v18 = (void *)MmMapIoSpaceEx(v16, v17, 2LL);
    BaseAddress = v18;
    if ( !v18 )
    {
      v6 = -1073741670;
      goto LABEL_51;
    }
    *(_QWORD *)a1 = v14[7];
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v18, *((unsigned int *)v14 + 13));
    if ( *((_WORD *)v14 + 33) )
    {
      if ( a3 )
        ProbeForWrite(v24, v22, 2u);
      memmove((void *)v24, (char *)v14 + 68, *((unsigned __int16 *)v14 + 33));
    }
    v6 = 0;
    v5 = 1;
LABEL_50:
    if ( !v5 )
      goto LABEL_54;
    goto LABEL_51;
  }
  v6 = -1073741811;
LABEL_51:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_54:
  if ( BaseAddress )
    MmUnmapIoSpace(BaseAddress, NumberOfBytes);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
  return (unsigned int)v6;
}
