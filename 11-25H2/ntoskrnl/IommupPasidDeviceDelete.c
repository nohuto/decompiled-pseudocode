/*
 * XREFs of IommupPasidDeviceDelete @ 0x14054BDCC
 * Callers:
 *     IommupDeviceDisableSvm @ 0x1406F34B8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406F3754 (IommupDeviceEnableSvm.c)
 *     IommuPasidDeviceDelete @ 0x1406F7F20 (IommuPasidDeviceDelete.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     IommuFreeLibraryContext @ 0x1405618E4 (IommuFreeLibraryContext.c)
 *     ExpFreeAsid @ 0x14064CDF8 (ExpFreeAsid.c)
 */

__int64 __fastcall IommupPasidDeviceDelete(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 *v4; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 24) )
    return 3221227272LL;
  v4 = (unsigned __int64 *)(*(_QWORD *)(a1 + 16) + 376LL);
  v5 = KeAbPreAcquire((__int64)v4, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v8 = *(_QWORD **)(a1 + 8), *v8 != a1) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( !HalpHvIommu )
  {
    v9 = IommuFreeLibraryContext(*(_QWORD *)(a1 + 56));
    *(_QWORD *)(a1 + 56) = 0LL;
    v1 = v9;
  }
  v10 = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)v10 )
    ExpFreeAsid((unsigned int)(v10 - 1), 0LL);
  HalpMmAllocCtxFree(v10, a1);
  return v1;
}
