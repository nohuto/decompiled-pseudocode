/*
 * XREFs of ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x14022C8D0
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401BB7FC (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1403F7B50 (DxgkMarkDeviceAsError.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018462C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        const struct _D3DKMT_MARKDEVICEASERROR *a4)
{
  struct DXGKVMB_COMMAND_BASE *v8; // rbx
  __int64 v9; // rdi
  int HostProcess; // eax
  int v11; // eax
  struct DXGKVMB_COMMAND_BASE *v13[2]; // [rsp+50h] [rbp-148h] BYREF
  unsigned int v14; // [rsp+60h] [rbp-138h]

  v14 = 0;
  *(_OWORD *)v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v13, this, 0x20u, 0LL, 0LL, 0LL);
  v8 = v13[0];
  if ( v13[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v8 = 0LL;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 12) = 0;
    *((_DWORD *)v8 + 3) &= 0x1FFu;
    *((_DWORD *)v8 + 2) = HostProcess;
    *((_DWORD *)v8 + 4) = 29;
    *((struct _D3DKMT_MARKDEVICEASERROR *)v8 + 3) = *a4;
    *((_DWORD *)v8 + 6) = *((_DWORD *)a3 + 118);
    v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v13[1], v13[0], v14);
    v9 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 8909;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VmBusSendSyncMessageStatusReturn failed: 0x%I64x",
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
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v13);
  return (unsigned int)v9;
}
