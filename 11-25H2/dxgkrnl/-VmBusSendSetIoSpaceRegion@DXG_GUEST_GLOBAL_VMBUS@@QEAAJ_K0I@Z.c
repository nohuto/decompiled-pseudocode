/*
 * XREFs of ?VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z @ 0x140227A90
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1401902D4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendSetIoSpaceRegion(
        DXG_GUEST_GLOBAL_VMBUS *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  struct DXGKVMB_COMMAND_BASE *v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  struct DXGKVMB_COMMAND_BASE *v12[2]; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v13; // [rsp+60h] [rbp-128h]

  v13 = 0;
  *(_OWORD *)v12 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v12, this, 0x30u, 0LL, 0LL, 0LL);
  v8 = v12[0];
  if ( v12[0] )
  {
    *(_QWORD *)v12[0] = 0LL;
    *((_DWORD *)v8 + 2) = 0;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 12) = 1;
    *((_DWORD *)v8 + 3) &= 0x1FFu;
    *((_DWORD *)v8 + 4) = 1010;
    *((_QWORD *)v8 + 3) = a2;
    *((_QWORD *)v8 + 4) = a3;
    *((_DWORD *)v8 + 10) = a4;
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v12[1], v12[0], v13);
    v9 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 13667;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"VmBusSendSetIoSpaceRegion failed: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    LODWORD(v9) = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v12);
  return (unsigned int)v9;
}
