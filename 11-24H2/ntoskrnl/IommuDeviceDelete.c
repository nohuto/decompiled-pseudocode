/*
 * XREFs of IommuDeviceDelete @ 0x140701590
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 *     IommupDeviceGetPasidDevice @ 0x14054B87C (IommupDeviceGetPasidDevice.c)
 */

__int64 __fastcall IommuDeviceDelete(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 *v3; // rbp
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  char *v8; // rax
  char *v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 **v12; // rcx
  __int64 *v13; // rax
  __int64 *v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v15 = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
    return 3221227272LL;
  v3 = (unsigned __int64 *)(a1 + 416);
  v4 = (char *)KeAbPreAcquire(a1 + 416, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
  if ( v5 )
    v5[10] = 1;
  v6 = *(_QWORD *)(a1 + 80);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( v6 )
    return 3221227272LL;
  if ( *(_BYTE *)(a1 + 274) )
  {
    IommupDeviceGetPasidDevice(a1, v7, 1, &v15);
    v8 = (char *)KeAbPreAcquire(a1 + 376, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 376), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 376), v8, a1 + 376);
    if ( v9 )
      v9[10] = 1;
    v10 = a1 + 360;
    v11 = *(_QWORD *)(a1 + 360);
    v12 = *(__int64 ***)(a1 + 368);
    if ( *v12 != (__int64 *)(a1 + 360) )
      __fastfail(3u);
    v13 = v15;
    *v15 = v10;
    v13[1] = (__int64)v12;
    *v12 = v13;
    *(_QWORD *)(a1 + 368) = v13;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 376), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 376));
    KeAbPostRelease(a1 + 376);
    v1 = a1 + 360 != v11 ? 0xC0000708 : 0;
    if ( v11 != v10 )
      return a1 + 360 != v11 ? 0xC0000708 : 0;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 16), 1) != 2 )
    return (unsigned int)HalpIommuDeleteDevice((__int64 *)a1);
  return v1;
}
