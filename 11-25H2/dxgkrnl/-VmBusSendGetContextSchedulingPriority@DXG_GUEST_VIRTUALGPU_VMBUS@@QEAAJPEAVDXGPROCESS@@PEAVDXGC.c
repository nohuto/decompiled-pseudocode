/*
 * XREFs of ?VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAHE@Z @ 0x140224C6C
 * Callers:
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1401BA6B0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetContextSchedulingPriority @ 0x140407F90 (DxgkGetContextSchedulingPriority.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetContextSchedulingPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int *a4,
        unsigned __int8 a5)
{
  __int64 v10; // rbx
  int v11; // ebx
  int HostProcess; // eax
  unsigned int v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B0h]
  _DWORD v16[2]; // [rsp+160h] [rbp+60h] BYREF

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 426) <= 0x10u )
    return 0LL;
  v15 = 0;
  v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v14, this, 0x20u, 0LL, 0LL, 0LL);
  v10 = v14;
  if ( (_QWORD)v14 )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v10 = 0LL;
    *(_DWORD *)(v10 + 20) = 0;
    *(_BYTE *)(v10 + 12) = 0;
    *(_DWORD *)(v10 + 12) &= 0x1FFu;
    *(_DWORD *)(v10 + 8) = HostProcess;
    *(_DWORD *)(v10 + 16) = 61;
    *(_DWORD *)(v10 + 24) = *((_DWORD *)a3 + 7);
    *(_BYTE *)(v10 + 28) = a5;
    v13[0] = 8;
    v11 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v14, v16, v13);
    if ( v11 >= 0 )
    {
      if ( v13[0] >= 8 )
      {
        v11 = v16[0];
        if ( v16[0] >= 0 )
          *a4 = v16[1];
      }
      else
      {
        v11 = -1073741811;
      }
    }
  }
  else
  {
    v11 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v14);
  return (unsigned int)v11;
}
