/*
 * XREFs of ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1401851AC
 * Callers:
 *     DxgkSetQueuedLimit @ 0x14029A720 (DxgkSetQueuedLimit.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_SETQUEUEDLIMIT *a4)
{
  char *v8; // rbx
  int HostProcess; // eax
  __int128 v11; // xmm0
  int v12; // ebx
  D3DKMT_HANDLE hDevice; // eax
  unsigned int v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h]
  char v17; // [rsp+54h] [rbp-ACh] BYREF
  struct _D3DKMT_SETQUEUEDLIMIT v18; // [rsp+160h] [rbp+60h] BYREF
  int v19; // [rsp+170h] [rbp+70h]

  v16 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x28u, 0LL, 0LL, 0LL);
  v8 = (char *)P[0];
  if ( P[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v8 = 0LL;
    *((_DWORD *)v8 + 5) = 0;
    v8[12] = 0;
    *((_DWORD *)v8 + 3) &= 0x1FFu;
    *((_DWORD *)v8 + 2) = HostProcess;
    *((_DWORD *)v8 + 4) = 31;
    v11 = (__int128)*a4;
    v14[0] = 24;
    *(_OWORD *)(v8 + 24) = v11;
    *((_DWORD *)v8 + 6) = *((_DWORD *)a3 + 118);
    v12 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, &v18, v14);
    if ( v12 < 0
      || a4->Type == D3DKMT_GET_QUEUEDLIMIT_PRESENT
      && ((v12 = -1073741823, v14[0] < 0x14)
       || (hDevice = a4->hDevice, v12 = v19, *a4 = v18, a4->hDevice = hDevice, v12 < 0)) )
    {
      WdLogSingleEntry1(3LL, v12);
      WdLogGlobalForLineNumber = 12139;
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v12;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v17 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
