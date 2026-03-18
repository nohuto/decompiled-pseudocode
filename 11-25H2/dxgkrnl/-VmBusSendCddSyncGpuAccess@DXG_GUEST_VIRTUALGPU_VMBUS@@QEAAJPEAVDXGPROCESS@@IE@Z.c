/*
 * XREFs of ?VmBusSendCddSyncGpuAccess@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IE@Z @ 0x1402215C8
 * Callers:
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x14037F5C0 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddSyncGpuAccess(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        char a4)
{
  struct DXGKVMB_COMMAND_BASE *v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  struct DXGKVMB_COMMAND_BASE *v12[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-128h]

  v13 = 0;
  *(_OWORD *)v12 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v12, this, 0x20u, 0LL, 0LL, 0LL);
  v8 = v12[0];
  if ( v12[0] )
  {
    v10 = *((_DWORD *)a2 + 122);
    *(_QWORD *)v12[0] = 0LL;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 12) = 0;
    *((_DWORD *)v8 + 3) &= 0x1FFu;
    *((_DWORD *)v8 + 2) = v10;
    *((_DWORD *)v8 + 4) = 47;
    *((_DWORD *)v8 + 6) = a3;
    *((_BYTE *)v8 + 28) = a4;
    v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v12[1], v12[0], v13);
  }
  else
  {
    v9 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v12);
  return v9;
}
