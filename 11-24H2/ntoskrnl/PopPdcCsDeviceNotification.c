/*
 * XREFs of PopPdcCsDeviceNotification @ 0x140A89968
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140C328E4 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopNetCompliantNicUpdate @ 0x14075C6B4 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x14075C920 (PopNetNonCompliantDeviceUpdate.c)
 *     PopPdcUpdateDeviceCompliance @ 0x140A89B24 (PopPdcUpdateDeviceCompliance.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x140A89BD4 (PopNetUpdateCsConsumptionFlags.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  signed __int8 v6; // cf
  _QWORD *v7; // rbp
  _DWORD *v8; // rcx
  _DWORD *v9; // r8
  char v10; // dl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  int *v17; // rcx
  _QWORD *v18; // rdx
  void **v19; // rax
  __int64 Pool2; // rax
  __int64 *v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-8h]

  v2 = 0;
  if ( !SSHSupportIsPlatformAoAc() )
    return v2;
  if ( *(_DWORD *)(v3 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&PopPdcDeviceListLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopPdcDeviceListLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&PopPdcDeviceListLock, (__int64)v5, (__int64)&PopPdcDeviceListLock);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = PopPdcDeviceList;
  v9 = 0LL;
  v10 = 0;
  while ( v8 != (_DWORD *)&PopPdcDeviceList )
  {
    v9 = v8;
    if ( *((_QWORD *)v8 + 2) == *(_QWORD *)a1 )
    {
      v10 = 1;
      break;
    }
    v8 = *(_DWORD **)v8;
  }
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v10 )
    {
      ++v9[7];
      goto LABEL_14;
    }
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v2 = -1073741801;
      goto LABEL_14;
    }
    *(_QWORD *)(Pool2 + 16) = *(_QWORD *)a1;
    *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(a1 + 8);
    *(_BYTE *)(Pool2 + 32) = *(_BYTE *)(a1 + 13);
    *(_DWORD *)(Pool2 + 28) = 1;
    v21 = (__int64 *)off_140E081A8;
    if ( *off_140E081A8 == (_UNKNOWN *)&PopPdcDeviceList )
    {
      *(_QWORD *)Pool2 = &PopPdcDeviceList;
      *(_QWORD *)(Pool2 + 8) = v21;
      *v21 = Pool2;
      off_140E081A8 = (_UNKNOWN **)Pool2;
LABEL_18:
      PopPdcUpdateDeviceCompliance();
      PopAcquirePolicyLock(v13, v12);
      v16 = *(int *)(a1 + 8);
      if ( (((_DWORD)v16 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v16 == 3 )
      {
        v17 = PopCsDeviceCompliance;
        if ( PopCsDeviceCompliance[v16] == -1 )
          PopNetNonCompliantDeviceUpdate(*(_BYTE *)(a1 + 12), v16);
      }
      else
      {
        if ( *(_BYTE *)(a1 + 13) )
          PopNetCompliantNicUpdate(*(_BYTE *)(a1 + 12));
        PopNetUpdateCsConsumptionFlags();
      }
      PopReleasePolicyLock(v17, v16, v14, v15, v22);
      goto LABEL_14;
    }
LABEL_38:
    __fastfail(3u);
  }
  if ( v10 )
  {
    if ( (int)--v9[7] > 0 )
      goto LABEL_14;
    v18 = *(_QWORD **)v8;
    if ( *(_DWORD **)(*(_QWORD *)v8 + 8LL) == v8 )
    {
      v19 = (void **)*((_QWORD *)v8 + 1);
      if ( *v19 == v8 )
      {
        *v19 = v18;
        v18[1] = v19;
        ExFreePoolWithTag(v9, 0x6F435343u);
        goto LABEL_18;
      }
    }
    goto LABEL_38;
  }
  v2 = -1073741811;
LABEL_14:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPdcDeviceListLock);
  KeLeaveCriticalRegion();
  return v2;
}
