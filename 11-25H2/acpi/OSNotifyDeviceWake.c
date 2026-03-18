/*
 * XREFs of OSNotifyDeviceWake @ 0x140018190
 * Callers:
 *     NotifyHandler @ 0x140017F80 (NotifyHandler.c)
 *     ACPICMButtonSetPower @ 0x14004BAF0 (ACPICMButtonSetPower.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x140019370 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeDisableAsync @ 0x140031C68 (ACPIWakeDisableAsync.c)
 *     OSNotifyDeviceWakeCallBack @ 0x140033440 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_qsqss @ 0x140035FA4 (WPP_RECORDER_SF_qsqss.c)
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 */

__int64 __fastcall OSNotifyDeviceWake(__int64 *a1)
{
  __int64 v1; // r8
  const char *v2; // rbp
  char v3; // si
  __int64 v4; // r9
  const char *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *Pool2; // rax
  int v9; // edx
  _QWORD *v10; // rdi
  __int64 v11; // r8
  unsigned int v13; // eax
  int v14; // edx
  char v15; // r14
  const char *v16; // rcx
  __int64 v17; // rax
  const char *v18; // rax
  __int64 v19; // rcx
  KIRQL Irql; // [rsp+80h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = byte_140075488;
  v3 = 0;
  Irql = 0;
  LODWORD(v4) = 0;
  v5 = byte_140075488;
  v6 = *(_QWORD **)(v1 + 104);
  if ( v6 )
  {
    v7 = v6[1];
    v4 = *(_QWORD *)(v1 + 104);
    if ( (v7 & 0x200000000000LL) != 0 && (v7 & 0x400000000000LL) != 0 )
      v5 = (const char *)v6[77];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_140088A80 = *(_DWORD *)(v1 + 40);
    byte_140088A84 = 0;
    WPP_RECORDER_SF_qsqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v5, v1, v4);
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1299211073LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate(v6, v10);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v10 == v10 )
    {
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      v13 = ACPIWakeDisableAsync(v6, v10, v11, v10);
      v15 = v13;
      if ( v13 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v13, 0LL, v10);
      v16 = byte_140075488;
      if ( v6 )
      {
        v17 = v6[1];
        v3 = (char)v6;
        if ( (v17 & 0x200000000000LL) != 0 )
        {
          v2 = (const char *)v6[76];
          if ( (v17 & 0x400000000000LL) != 0 )
            v16 = (const char *)v6[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          17,
          28,
          (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
          v15,
          v3,
          (__int64)v2,
          (__int64)v16);
      }
    }
  }
  else
  {
    v18 = byte_140075488;
    if ( v6 )
    {
      v19 = v6[1];
      v3 = (char)v6;
      if ( (v19 & 0x200000000000LL) != 0 )
      {
        v2 = (const char *)v6[76];
        if ( (v19 & 0x400000000000LL) != 0 )
          v18 = (const char *)v6[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        17,
        27,
        (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
        v3,
        (__int64)v2,
        (__int64)v18);
    }
  }
  return 0LL;
}
