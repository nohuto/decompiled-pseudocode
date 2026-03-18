/*
 * XREFs of ?VmBusSendAdapterStop@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x14018AD3C
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendAdapterStop(DXG_GUEST_VIRTUALGPU_VMBUS *this)
{
  _DWORD *v2; // rax
  PVOID P[2]; // [rsp+30h] [rbp-138h] BYREF
  int v4; // [rsp+40h] [rbp-128h]
  char v5; // [rsp+44h] [rbp-124h] BYREF

  v4 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x18u, 0LL, 0LL, 0LL);
  v2 = P[0];
  if ( P[0] )
  {
    *(_QWORD *)P[0] = 0LL;
    v2[2] = 0;
    v2[5] = 0;
    *((_BYTE *)v2 + 12) = 0;
    v2[3] &= 0x1FFu;
    v2[4] = 30;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, 0LL, 0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
  }
  else if ( P[1] )
  {
    if ( P[1] != &v5 )
      ExFreePoolWithTag(P[1], 0x4D767844u);
  }
}
