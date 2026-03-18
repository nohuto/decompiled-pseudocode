/*
 * XREFs of ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x140185CFC
 * Callers:
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x14036C8A8 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYCLOCKCALIBRATION *a3)
{
  char *v6; // rdi
  int HostProcess; // eax
  __int128 v9; // xmm0
  int v10; // edi
  UINT32 v11; // eax
  ULONGLONG v12; // xmm1_8
  unsigned int v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B0h]
  char v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+160h] [rbp+60h] BYREF
  __int128 v18; // [rsp+164h] [rbp+64h]
  ULONGLONG v19; // [rsp+174h] [rbp+74h]
  UINT32 v20; // [rsp+17Ch] [rbp+7Ch]

  v15 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x40u, 0LL, 0LL, 0LL);
  v6 = (char *)P[0];
  if ( P[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v6 = 0LL;
    *((_DWORD *)v6 + 5) = 0;
    v6[12] = 0;
    *((_DWORD *)v6 + 3) &= 0x1FFu;
    *((_DWORD *)v6 + 2) = HostProcess;
    *((_DWORD *)v6 + 4) = 62;
    v9 = *(_OWORD *)&a3->hAdapter;
    v13[0] = 32;
    *(_OWORD *)(v6 + 24) = v9;
    *(_OWORD *)(v6 + 40) = *(_OWORD *)((char *)&a3->ClockData.GpuFrequency + 4);
    *((_QWORD *)v6 + 7) = *(ULONGLONG *)((char *)&a3->ClockData.CpuClockCounter + 4);
    v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, &v17, v13);
    if ( v10 >= 0 )
    {
      if ( v13[0] >= 0x20 )
      {
        v11 = v20;
        v12 = v19;
        v10 = v17;
        *(_OWORD *)&a3->ClockData.GpuFrequency = v18;
        a3->ClockData.CpuClockCounter = v12;
        a3->ClockData.Flags.Value = v11;
      }
      else
      {
        v10 = -1073741811;
      }
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v10;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v16 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
