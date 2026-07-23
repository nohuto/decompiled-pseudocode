/*
 * XREFs of IommupHvAttachPasidDeviceDomain @ 0x14056343C
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B9D4 (IommupDomainAttachPasidDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachPasidDeviceDomain(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // esi
  unsigned __int64 *v7; // rdi
  char *v8; // rax
  __int64 v9; // rdx
  char *v10; // r14
  signed __int32 v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  __int128 v17; // [rsp+28h] [rbp-48h] BYREF
  __int128 v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+58h] [rbp-18h]

  v16 = 0LL;
  v4 = 0;
  v20 = 0LL;
  v21 = 0;
  LODWORD(v19) = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( a4 )
  {
    v14 = *(_QWORD *)(a1 + 32);
    LODWORD(v16) = *(_DWORD *)(a2 + 48);
    BYTE4(v16) = *(_BYTE *)(a2 + 52);
    return (unsigned int)guard_dispatch_icall_no_overrides(v14, &v16);
  }
  if ( *(_DWORD *)(a2 + 8) != 1 )
  {
    v7 = (unsigned __int64 *)(a2 + 104);
    v8 = (char *)KeAbPreAcquire(a2 + 104, 0LL);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v10 )
      v10[10] = 1;
    if ( *(_DWORD *)(a2 + 92) )
      goto LABEL_13;
    if ( !*(_BYTE *)(a2 + 96) )
    {
      v11 = _InterlockedIncrement(&HalpIommuDomainId);
      *(_BYTE *)(a2 + 96) = 1;
      *(_DWORD *)(a2 + 48) = v11;
    }
    v12 = *(_DWORD *)(a2 + 48);
    v21 = 0;
    LODWORD(v16) = v12;
    BYTE4(v16) = 1;
    v20 = v16;
    v4 = guard_dispatch_icall_no_overrides(&v20, v9);
    if ( v4 < 0 )
      goto LABEL_14;
    v19 = 0LL;
    *(_QWORD *)&v17 = 1LL;
    v18 = 0LL;
    LOBYTE(v18) = 1;
    *((_QWORD *)&v17 + 1) = a3;
    v4 = guard_dispatch_icall_no_overrides(&v16, &v17);
    if ( v4 >= 0 )
LABEL_13:
      ++*(_DWORD *)(a2 + 92);
    else
      guard_dispatch_icall_no_overrides(&v16, v13);
LABEL_14:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
  }
  return (unsigned int)v4;
}
