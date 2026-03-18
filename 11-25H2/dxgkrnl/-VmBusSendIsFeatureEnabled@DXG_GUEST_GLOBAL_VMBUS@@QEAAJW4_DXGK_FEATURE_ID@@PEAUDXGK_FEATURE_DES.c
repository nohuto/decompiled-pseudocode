/*
 * XREFs of ?VmBusSendIsFeatureEnabled@DXG_GUEST_GLOBAL_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x140225C98
 * Callers:
 *     ?DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x14006869C (-DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUR.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140228588 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendIsFeatureEnabled(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  struct DXGKVMB_COMMAND_BASE *v8; // rax
  unsigned int v9; // ebx
  int v10; // eax
  struct _MDL *v12; // [rsp+30h] [rbp-D0h]
  unsigned int v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v15; // [rsp+60h] [rbp-A0h]
  _DWORD v16[2]; // [rsp+170h] [rbp+70h] BYREF
  __int16 v17; // [rsp+178h] [rbp+78h]
  int v18; // [rsp+17Ah] [rbp+7Ah]

  v15 = 0;
  *(_OWORD *)v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v14, a1, 0x20u, 0LL, 0LL, 0LL);
  v8 = v14[0];
  if ( v14[0] )
  {
    *(_QWORD *)v14[0] = 0LL;
    *((_DWORD *)v8 + 2) = 0;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 12) = 1;
    *((_DWORD *)v8 + 3) &= 0x1FFu;
    *((_DWORD *)v8 + 4) = 1022;
    *((_DWORD *)v8 + 6) = a2;
    v13[0] = 16;
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(a1, (unsigned __int8 *)v14[1], v14[0], v15, v16, v13, v12);
    v9 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(3LL, v10);
      WdLogGlobalForLineNumber = 14106;
    }
    else
    {
      v9 = -1073741823;
      if ( v13[0] >= 0x10 )
      {
        v9 = v16[0];
        *(_DWORD *)a3 = v16[1];
        *(_WORD *)(a3 + 4) = v17;
        *a4 = v18;
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v14);
  return v9;
}
