/*
 * XREFs of HalpIommuBlockDevice @ 0x1404BE880
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404B2420 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404B4B04 (HalpIommuLeaveDmaDomain.c)
 *     HalpIommuDeleteDevice @ 0x14054DC10 (HalpIommuDeleteDevice.c)
 *     HalpIommuDecreaseAliasTrack @ 0x14055397C (HalpIommuDecreaseAliasTrack.c)
 */

__int64 __fastcall HalpIommuBlockDevice(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char v5; // bp
  __int128 *v7; // rbx
  int AcpiDeviceMapping; // eax
  __int128 *v9; // rcx
  _QWORD *v10; // rax
  signed __int8 v11; // cf
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0LL;
  result = 0LL;
  v5 = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( !a1 )
    return result;
  v7 = (__int128 *)*a1;
  if ( *(_DWORD *)*a1 == 2 )
  {
    AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping(*a1, (__int64)&v17);
    v9 = &v17;
    if ( AcpiDeviceMapping < 0 )
      v9 = v7;
    v7 = v9;
  }
  if ( *(_DWORD *)v7 != 1 )
    goto LABEL_14;
  v10 = KeAbPreAcquire((__int64)&HalpDeviceBlockUnblockPushLock, 0LL);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock, 0LL);
  v12 = v10;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(
      &HalpDeviceBlockUnblockPushLock,
      (__int64)v10,
      (__int64)&HalpDeviceBlockUnblockPushLock);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  v5 = 1;
  v14 = HalpIommuDecreaseAliasTrack(v7, &v19);
  if ( v14 < 0 )
    goto LABEL_14;
  v15 = v19;
  if ( *(__int64 *)(v19 + 24) <= 0 )
  {
    HalpMmAllocCtxFree(v13, *(_QWORD *)(v19 + 16));
    HalpMmAllocCtxFree(v16, v15);
LABEL_14:
    v14 = HalpIommuLeaveDmaDomain((__int64)a1, HalpIommuBypassDomain, a3, a4);
  }
  HalpIommuDeleteDevice(a1);
  if ( v5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock);
    KeAbPostRelease((ULONG_PTR)&HalpDeviceBlockUnblockPushLock);
  }
  return (unsigned int)v14;
}
