/*
 * XREFs of HalpIommuBlockDevice @ 0x1404B9A40
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404ACCB0 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404AF300 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 *     HalpIommuDecreaseAliasTrack @ 0x1405512BC (HalpIommuDecreaseAliasTrack.c)
 */

__int64 __fastcall HalpIommuBlockDevice(__int64 *a1)
{
  __int64 result; // rax
  char v2; // bp
  __int128 *v4; // rbx
  int AcpiDeviceMapping; // eax
  __int128 *v6; // rcx
  char *v7; // rax
  signed __int8 v8; // cf
  char *v9; // rsi
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  result = 0LL;
  v2 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( !a1 )
    return result;
  v4 = (__int128 *)*a1;
  if ( *(_DWORD *)*a1 == 2 )
  {
    AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping(*a1, (__int64)&v14);
    v6 = &v14;
    if ( AcpiDeviceMapping < 0 )
      v6 = v4;
    v4 = v6;
  }
  if ( *(_DWORD *)v4 != 1 )
    goto LABEL_14;
  v7 = (char *)KeAbPreAcquire((__int64)&HalpDeviceBlockUnblockPushLock, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&HalpDeviceBlockUnblockPushLock, v7, (__int64)&HalpDeviceBlockUnblockPushLock);
  if ( v9 )
    v9[10] = 1;
  v2 = 1;
  v11 = HalpIommuDecreaseAliasTrack(v4, &v16);
  if ( v11 < 0 )
    goto LABEL_14;
  v12 = v16;
  if ( *(__int64 *)(v16 + 24) <= 0 )
  {
    HalpMmAllocCtxFree(v10, *(_QWORD *)(v16 + 16));
    HalpMmAllocCtxFree(v13, v12);
LABEL_14:
    v11 = HalpIommuLeaveDmaDomain((__int64)a1, HalpIommuBypassDomain);
  }
  HalpIommuDeleteDevice(a1);
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock);
    KeAbPostRelease((ULONG_PTR)&HalpDeviceBlockUnblockPushLock);
  }
  return (unsigned int)v11;
}
