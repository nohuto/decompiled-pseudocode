/*
 * XREFs of ?VmBusSendInvalidateCache@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@II_K1@Z @ 0x140225B64
 * Callers:
 *     DxgkInvalidateCache @ 0x1401B0FF0 (DxgkInvalidateCache.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendInvalidateCache(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  struct DXGKVMB_COMMAND_BASE *v10; // rbx
  unsigned int v11; // ebx
  int HostProcess; // eax
  int v13; // eax
  struct DXGKVMB_COMMAND_BASE *v15[2]; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-138h]

  v16 = 0;
  *(_OWORD *)v15 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v15, this, 0x38u, 0LL, 0LL, 0LL);
  v10 = v15[0];
  if ( v15[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 5) = 0;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_DWORD *)v10 + 2) = HostProcess;
    *((_QWORD *)v10 + 4) = a5;
    *((_BYTE *)v10 + 12) = 0;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *((_QWORD *)v10 + 5) = a6;
    *((_DWORD *)v10 + 4) = 67;
    *((_DWORD *)v10 + 6) = a3;
    *((_DWORD *)v10 + 7) = a4;
    v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v15[1], v15[0], v16);
    v11 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(3LL, v13);
      WdLogGlobalForLineNumber = 13116;
    }
  }
  else
  {
    v11 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v15);
  return v11;
}
