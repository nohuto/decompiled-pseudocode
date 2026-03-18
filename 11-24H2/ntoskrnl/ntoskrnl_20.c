/*
 * XREFs of ntoskrnl_20 @ 0x140972DB0
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1406557A0 (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x140655B24 (ExpSetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1407B8160 (ExSetLicenseTamperState.c)
 *     sub_1407B85B0 @ 0x1407B85B0 (sub_1407B85B0.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     sub_140972980 @ 0x140972980 (sub_140972980.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     sub_140800884 @ 0x140800884 (sub_140800884.c)
 *     sub_1409735B8 @ 0x1409735B8 (sub_1409735B8.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ntoskrnl_20(_QWORD *a1, __int64 a2, char a3, char a4)
{
  void *v7; // rcx
  __int64 *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 *v11; // rax
  __int64 Pool2; // rbx
  __int64 *v13; // rax
  __int64 *v14; // r12
  unsigned int v15; // ebx
  int v17; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+28h] [rbp-40h]
  __int64 *v19; // [rsp+30h] [rbp-38h]
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  v7 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v19 = 0LL;
  if ( !a2 )
  {
    v15 = -1073741811;
    goto LABEL_30;
  }
  if ( (a4 & 1) == 0 && !a1[5854] )
  {
    v15 = 0;
    goto LABEL_30;
  }
  v9 = KeAbPreAcquire((__int64)(a1 + 5878), 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 11756, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 5878, (__int64)v9, (__int64)(a1 + 5878));
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = (__int64 *)a1[5877];
  if ( v11 )
  {
    v20 = *v11;
    sub_1409735B8(&v20);
    Pool2 = v20;
    v17 = 0;
LABEL_15:
    if ( (a3 & 1) != 0 )
      *(_QWORD *)Pool2 = *(_QWORD *)a2;
    if ( (a3 & 2) != 0 )
      *(_DWORD *)(Pool2 + 8) = *(_DWORD *)(a2 + 8);
    if ( (a3 & 4) != 0 )
      *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a2 + 16);
    if ( (a3 & 8) != 0 )
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a2 + 24);
    if ( (a3 & 0x10) != 0 )
      *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a2 + 32);
    if ( (a3 & 0x20) != 0 )
      *(_BYTE *)(Pool2 + 40) = *(_BYTE *)(a2 + 40);
    goto LABEL_27;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  P = (PVOID)Pool2;
  if ( Pool2 && (v13 = (__int64 *)ExAllocatePool2(0x100uLL), v14 = v13, (v19 = v13) != 0LL) )
  {
    *v13 = Pool2;
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_DWORD *)(Pool2 + 8) = 4;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_BYTE *)(Pool2 + 40) = 1;
    v17 = sub_140800884(v13);
    if ( v17 >= 0 )
    {
      a1[5877] = v14;
      P = 0LL;
      v19 = 0LL;
      goto LABEL_15;
    }
  }
  else
  {
    v17 = -1073741801;
  }
LABEL_27:
  if ( (_InterlockedExchangeAdd64(a1 + 5878, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 5878);
  KeAbPostRelease((ULONG_PTR)(a1 + 5878));
  v15 = v17;
  v7 = P;
  v8 = v19;
LABEL_30:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v15;
}
