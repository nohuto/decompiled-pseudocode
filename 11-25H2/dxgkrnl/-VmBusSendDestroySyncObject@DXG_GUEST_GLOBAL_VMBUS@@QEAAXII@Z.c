/*
 * XREFs of ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022400C
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x14033BE70 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x14033DE0C (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140228588 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(DXG_GUEST_GLOBAL_VMBUS *this, int a2, int a3)
{
  struct DXGKVMB_COMMAND_BASE *v6; // rax
  struct _MDL *v7; // [rsp+30h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v8[2]; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v9; // [rsp+50h] [rbp-128h]

  v9 = 0;
  *(_OWORD *)v8 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v8, this, 0x20u, 0LL, 0LL, 0LL);
  v6 = v8[0];
  *(_QWORD *)v8[0] = 0LL;
  *((_DWORD *)v6 + 5) = 0;
  *((_BYTE *)v6 + 12) = 1;
  *((_DWORD *)v6 + 3) &= 0x1FFu;
  *((_DWORD *)v6 + 2) = a2;
  *((_DWORD *)v6 + 4) = 1003;
  *((_DWORD *)v6 + 6) = a3;
  DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v8[1], v8[0], v9, 0LL, 0LL, v7);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v8);
}
