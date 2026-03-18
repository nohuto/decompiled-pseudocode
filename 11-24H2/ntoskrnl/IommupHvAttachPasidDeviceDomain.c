/*
 * XREFs of IommupHvAttachPasidDeviceDomain @ 0x14056580C
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054E124 (IommupDomainAttachPasidDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachPasidDeviceDomain(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned __int64 *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r14
  signed __int32 v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-50h] BYREF
  __int128 v23; // [rsp+28h] [rbp-48h] BYREF
  __int128 v24; // [rsp+38h] [rbp-38h]
  __int64 v25; // [rsp+48h] [rbp-28h]
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  int v27; // [rsp+58h] [rbp-18h]

  v22 = 0LL;
  v4 = 0;
  v26 = 0LL;
  v27 = 0;
  LODWORD(v25) = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( (_DWORD)a4 )
  {
    v20 = *(_QWORD *)(a1 + 32);
    LODWORD(v22) = *(_DWORD *)(a2 + 48);
    BYTE4(v22) = *(_BYTE *)(a2 + 52);
    return (unsigned int)guard_dispatch_icall_no_overrides(v20, &v22, a3, a4);
  }
  if ( *(_DWORD *)(a2 + 8) != 1 )
  {
    v7 = (unsigned __int64 *)(a2 + 104);
    v8 = KeAbPreAcquire(a2 + 104, 0LL);
    v12 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, (__int64)v8, (__int64)v7);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    if ( *(_DWORD *)(a2 + 92) )
      goto LABEL_13;
    if ( !*(_BYTE *)(a2 + 96) )
    {
      v13 = _InterlockedIncrement(&HalpIommuDomainId);
      *(_BYTE *)(a2 + 96) = 1;
      *(_DWORD *)(a2 + 48) = v13;
    }
    v14 = *(_DWORD *)(a2 + 48);
    v27 = 0;
    LODWORD(v22) = v14;
    BYTE4(v22) = 1;
    v26 = v22;
    v4 = guard_dispatch_icall_no_overrides(&v26, v9, v10, v11);
    if ( v4 < 0 )
      goto LABEL_14;
    v25 = 0LL;
    *(_QWORD *)&v23 = 1LL;
    v24 = 0LL;
    LOBYTE(v24) = 1;
    *((_QWORD *)&v23 + 1) = a3;
    v4 = guard_dispatch_icall_no_overrides(&v22, &v23, v15, v16);
    if ( v4 >= 0 )
LABEL_13:
      ++*(_DWORD *)(a2 + 92);
    else
      guard_dispatch_icall_no_overrides(&v22, v17, v18, v19);
LABEL_14:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
  }
  return (unsigned int)v4;
}
