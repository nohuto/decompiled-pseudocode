/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x1407A4EF0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MmUnmapIoSpace @ 0x1402AA7A0 (MmUnmapIoSpace.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409699F8 (ExpGetSystemFirmwareTableInformation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3)
{
  void *v4; // r15
  char v5; // r12
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int SystemFirmwareTableInformation; // edi
  _DWORD *Pool2; // rax
  struct _KTHREAD *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rbx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  void *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int Length; // [rsp+28h] [rbp-90h]
  unsigned int v31; // [rsp+30h] [rbp-88h]
  volatile void *Address; // [rsp+40h] [rbp-78h]
  volatile void *v33; // [rsp+48h] [rbp-70h]
  PVOID BaseAddress; // [rsp+50h] [rbp-68h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-60h]
  __int128 Src; // [rsp+80h] [rbp-38h] BYREF
  int v37; // [rsp+90h] [rbp-28h]

  Src = 0LL;
  v37 = 0;
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
  v31 = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v33 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((__int64)&ExpPlatformBinaryLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&ExpPlatformBinaryLock,
      0,
      v8,
      (unsigned __int64)&ExpPlatformBinaryLock);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v5 = 1;
  if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
    goto LABEL_8;
  if ( !ExpPlatformBinaryTableInformation )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    v5 = 0;
    if ( Length || v31 )
      goto LABEL_2;
    *(_QWORD *)&Src = 0x141435049LL;
    *((_QWORD *)&Src + 1) = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(&Src);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v6 = ((SystemFirmwareTableInformation >> 31) & 0x40) - 1073741701;
      goto LABEL_50;
    }
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
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
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v15 = KeAbPreAcquire((__int64)&ExpPlatformBinaryLock, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpPlatformBinaryLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpPlatformBinaryLock, v15, (__int64)&ExpPlatformBinaryLock);
    if ( v16 )
      *((_BYTE *)v16 + 10) = 1;
    if ( ExpPlatformBinaryTableInformation )
    {
      if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
        KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
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
  if ( (v31 & 1) == 0 )
  {
    v20 = ExpPlatformBinaryTableInformation;
    if ( *((_BYTE *)ExpPlatformBinaryTableInformation + 64) != 1
      || *((_BYTE *)ExpPlatformBinaryTableInformation + 65) != 1
      || (v21 = *((unsigned __int16 *)ExpPlatformBinaryTableInformation + 33), (v21 & 1) != 0)
      || (v22 = *((_QWORD *)ExpPlatformBinaryTableInformation + 7)) == 0
      || *((_DWORD *)ExpPlatformBinaryTableInformation + 10) != 1 )
    {
      v6 = -1073741701;
      goto LABEL_51;
    }
    v23 = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    if ( (unsigned int)v23 > Length || v21 > v31 )
    {
      v6 = -1073741789;
      *(_DWORD *)(a1 + 24) = v23;
      *(_DWORD *)(a1 + 28) = *((unsigned __int16 *)v20 + 33);
      goto LABEL_51;
    }
    NumberOfBytes = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    v24 = (void *)MmMapIoSpaceEx(v22, v23, 2u);
    BaseAddress = v24;
    if ( !v24 )
    {
      v6 = -1073741670;
      goto LABEL_51;
    }
    *(_QWORD *)a1 = v20[7];
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v24, *((unsigned int *)v20 + 13));
    if ( *((_WORD *)v20 + 33) )
    {
      if ( a3 )
        ProbeForWrite(v33, v31, 2u);
      memmove((void *)v33, (char *)v20 + 68, *((unsigned __int16 *)v20 + 33));
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
LABEL_54:
  if ( BaseAddress )
    MmUnmapIoSpace(BaseAddress, NumberOfBytes);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
  return (unsigned int)v6;
}
