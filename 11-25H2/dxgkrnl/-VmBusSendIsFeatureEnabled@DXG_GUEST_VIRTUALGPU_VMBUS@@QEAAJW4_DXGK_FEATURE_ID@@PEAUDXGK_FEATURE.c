/*
 * XREFs of ?VmBusSendIsFeatureEnabled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x140225DDC
 * Callers:
 *     ?DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x14006869C (-DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUR.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsFeatureEnabled(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v12[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+50h] [rbp-B0h]
  _DWORD v15[2]; // [rsp+160h] [rbp+60h] BYREF
  __int16 v16; // [rsp+168h] [rbp+68h]
  int v17; // [rsp+16Ah] [rbp+6Ah]

  v14 = 0;
  v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v13, a1, 0x20u, 0LL, 0LL, 0LL);
  v8 = v13;
  if ( (_QWORD)v13 )
  {
    *(_QWORD *)v13 = 0LL;
    *(_DWORD *)(v8 + 8) = 0;
    *(_DWORD *)(v8 + 20) = 0;
    *(_BYTE *)(v8 + 12) = 0;
    *(_DWORD *)(v8 + 12) &= 0x1FFu;
    *(_DWORD *)(v8 + 16) = 68;
    *(_DWORD *)(v8 + 24) = a2;
    v12[0] = 16;
    v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(a1, (struct DXGVMBUSMESSAGE *)&v13, v15, v12);
    v9 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(3LL, v10);
      WdLogGlobalForLineNumber = 13153;
    }
    else
    {
      v9 = -1073741823;
      if ( v12[0] >= 0x10 )
      {
        v9 = v15[0];
        *(_DWORD *)a3 = v15[1];
        *(_WORD *)(a3 + 4) = v16;
        *a4 = v17;
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v13);
  return v9;
}
