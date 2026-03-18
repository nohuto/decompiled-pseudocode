/*
 * XREFs of IommupHvAttachPasidDeviceDomain @ 0x140562FFC
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B814 (IommupDomainAttachPasidDevice.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachPasidDeviceDomain(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // esi
  unsigned __int64 *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // r14
  signed __int32 v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+28h] [rbp-48h]
  __int128 v16; // [rsp+38h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]

  v14 = 0LL;
  v4 = 0;
  v18 = 0LL;
  v19 = 0;
  LODWORD(v17) = 0;
  v15 = 0LL;
  v16 = 0LL;
  if ( a4 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    LODWORD(v14) = *(_DWORD *)(a2 + 48);
    BYTE4(v14) = *(_BYTE *)(a2 + 52);
    return (unsigned int)guard_dispatch_icall_no_overrides(v12);
  }
  if ( *(_DWORD *)(a2 + 8) != 1 )
  {
    v7 = (unsigned __int64 *)(a2 + 104);
    v8 = KeAbPreAcquire(a2 + 104, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    if ( *(_DWORD *)(a2 + 92) )
      goto LABEL_13;
    if ( !*(_BYTE *)(a2 + 96) )
    {
      v10 = _InterlockedIncrement(&HalpIommuDomainId);
      *(_BYTE *)(a2 + 96) = 1;
      *(_DWORD *)(a2 + 48) = v10;
    }
    v11 = *(_DWORD *)(a2 + 48);
    v19 = 0;
    LODWORD(v14) = v11;
    BYTE4(v14) = 1;
    v18 = v14;
    v4 = guard_dispatch_icall_no_overrides(&v18);
    if ( v4 < 0 )
      goto LABEL_14;
    v17 = 0LL;
    *(_QWORD *)&v15 = 1LL;
    v16 = 0LL;
    LOBYTE(v16) = 1;
    *((_QWORD *)&v15 + 1) = a3;
    v4 = guard_dispatch_icall_no_overrides(&v14);
    if ( v4 >= 0 )
LABEL_13:
      ++*(_DWORD *)(a2 + 92);
    else
      guard_dispatch_icall_no_overrides(&v14);
LABEL_14:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
  }
  return (unsigned int)v4;
}
