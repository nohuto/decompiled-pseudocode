/*
 * XREFs of ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@HE@Z @ 0x140185788
 * Callers:
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1403C11E0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1403E2600 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018462C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned __int8 a5)
{
  _DWORD *v9; // rbx
  int HostProcess; // eax
  unsigned int v12; // ebx
  PVOID P[2]; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-138h]
  char v15; // [rsp+44h] [rbp-134h] BYREF

  v14 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x28u, 0LL, 0LL, 0LL);
  v9 = P[0];
  if ( P[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v9 = 0LL;
    v9[5] = 0;
    *((_BYTE *)v9 + 12) = 0;
    v9[3] &= 0x1FFu;
    v9[2] = HostProcess;
    v9[4] = 33;
    v9[6] = *((_DWORD *)a3 + 7);
    *((_BYTE *)v9 + 32) = a5;
    v9[7] = a4;
    v12 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            this,
            (unsigned __int8 *)P[1],
            (struct DXGKVMB_COMMAND_BASE *)P[0],
            v14);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return v12;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v15 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
