/*
 * XREFs of HalpIommuUnblockDevice @ 0x1404B6140
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404ACCB0 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuCheckDpptException @ 0x1404B6368 (HalpIommuCheckDpptException.c)
 *     HalpIommuCheckExceptionList @ 0x1404BF1E4 (HalpIommuCheckExceptionList.c)
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1405511B0 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuGetAcpiDeviceMapCount @ 0x1405516BC (HalpIommuGetAcpiDeviceMapCount.c)
 *     HalpIommuJoinDmaDomain @ 0x1405519E8 (HalpIommuJoinDmaDomain.c)
 *     IommupHvAttachDeviceDomain @ 0x1405630BC (IommupHvAttachDeviceDomain.c)
 */

__int64 __fastcall HalpIommuUnblockDevice(__int128 *Src, int a2, _QWORD *a3)
{
  char v6; // si
  char v7; // r15
  _DWORD *v8; // rcx
  int AcpiDeviceMapping; // eax
  __int128 *v11; // rcx
  int Device; // eax
  int IncreaseAliasTrack; // edi
  char *v14; // rax
  char *v15; // rdi
  __int64 v16; // rbx
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h]
  char v19; // [rsp+90h] [rbp+40h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF

  v19 = 0;
  *a3 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( (unsigned __int8)HalpIommuCheckDpptException() || (unsigned __int8)HalpIommuCheckExceptionList() )
    return 0LL;
  if ( HalpHvIommu && !HalpHvIommuDeviceDomain )
    return 3221225659LL;
  if ( *v8 == 2 )
  {
    AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping((__int64)v8, (__int64)&v17);
    v11 = &v17;
    if ( AcpiDeviceMapping < 0 )
      v11 = Src;
    Src = v11;
  }
  Device = HalpIommuCreateDevice((_DWORD)Src, a2, 0, 2, (__int64)&v20);
  if ( Device >= 0 )
  {
    v6 = 1;
    if ( *(_DWORD *)Src != 1 || (unsigned int)HalpIommuGetAcpiDeviceMapCount(Src) <= 1 && (*((_BYTE *)Src + 4) & 1) == 0 )
      goto LABEL_28;
    v14 = (char *)KeAbPreAcquire((__int64)&HalpDeviceBlockUnblockPushLock, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&HalpDeviceBlockUnblockPushLock, v14, (__int64)&HalpDeviceBlockUnblockPushLock);
    if ( v15 )
      v15[10] = 1;
    v7 = 1;
    IncreaseAliasTrack = HalpIommuCreateIncreaseAliasTrack(Src);
    if ( IncreaseAliasTrack >= 0 && MEMORY[0x18] <= 1 )
    {
LABEL_28:
      v16 = v20;
      if ( HalpHvIommu )
      {
        IncreaseAliasTrack = IommupHvAttachDeviceDomain(*(_QWORD *)(v20 + 32), 0LL, 0LL);
      }
      else
      {
        IncreaseAliasTrack = HalpIommuJoinDmaDomain(v20, HalpIommuBypassDomain, &v19);
        if ( IncreaseAliasTrack == -1073741776 && (v19 & 1) != 0 )
        {
          IncreaseAliasTrack = 0;
          HalpIommuDeleteDevice(v16);
          v16 = 0LL;
          v20 = 0LL;
          v6 = 0;
        }
      }
      if ( !v7 )
        goto LABEL_33;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock);
    KeAbPostRelease((ULONG_PTR)&HalpDeviceBlockUnblockPushLock);
  }
  else
  {
    IncreaseAliasTrack = 0;
    if ( Device != -1073741275 )
      IncreaseAliasTrack = Device;
  }
  v16 = v20;
LABEL_33:
  if ( IncreaseAliasTrack >= 0 )
  {
    *a3 = v16;
  }
  else if ( v6 )
  {
    HalpIommuDeleteDevice(v16);
  }
  return (unsigned int)IncreaseAliasTrack;
}
