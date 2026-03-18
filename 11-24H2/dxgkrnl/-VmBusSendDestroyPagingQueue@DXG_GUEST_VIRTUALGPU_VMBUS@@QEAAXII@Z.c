/*
 * XREFs of ?VmBusSendDestroyPagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x14022A75C
 * Callers:
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1403C2580 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyPagingQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3)
{
  __int64 v6; // rax
  __int128 v7; // [rsp+30h] [rbp-138h] BYREF
  int v8; // [rsp+40h] [rbp-128h]

  v8 = 0;
  v7 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v7, this, 0x20u, 0LL, 0LL, 0LL);
  v6 = v7;
  if ( (_QWORD)v7 )
  {
    *(_QWORD *)v7 = 0LL;
    *(_DWORD *)(v6 + 20) = 0;
    *(_BYTE *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 12) &= 0x1FFu;
    *(_DWORD *)(v6 + 8) = a2;
    *(_DWORD *)(v6 + 16) = 10;
    *(_DWORD *)(v6 + 24) = a3;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v7, 0LL, 0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v7);
}
