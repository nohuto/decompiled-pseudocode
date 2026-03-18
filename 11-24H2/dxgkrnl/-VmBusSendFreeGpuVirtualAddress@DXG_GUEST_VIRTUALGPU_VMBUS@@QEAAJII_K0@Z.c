/*
 * XREFs of ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x14022B108
 * Callers:
 *     DxgkFreeGpuVirtualAddress @ 0x14039BD40 (DxgkFreeGpuVirtualAddress.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018462C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  struct DXGKVMB_COMMAND_BASE *v9; // rcx
  unsigned int v10; // ebx
  struct DXGKVMB_COMMAND_BASE *v12[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-128h]

  v13 = 0;
  *(_OWORD *)v12 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v12, this, 0x30u, 0LL, 0LL, 0LL);
  v9 = v12[0];
  if ( v12[0] )
  {
    *(_QWORD *)v12[0] = 0LL;
    *((_DWORD *)v9 + 5) = 0;
    *((_BYTE *)v9 + 12) = 0;
    *((_DWORD *)v9 + 3) &= 0x1FFu;
    *((_QWORD *)v9 + 5) = a5;
    *((_DWORD *)v9 + 2) = a2;
    *((_DWORD *)v9 + 4) = 16;
    *((_QWORD *)v9 + 4) = a4;
    *((_DWORD *)v9 + 6) = a3;
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v12[1], v12[0], v13);
  }
  else
  {
    v10 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v12);
  return v10;
}
