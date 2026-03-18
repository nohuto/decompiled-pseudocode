/*
 * XREFs of ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z @ 0x14022D078
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x140192624 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        const struct _LUID *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // rdi
  unsigned int v12[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h]
  unsigned int v15; // [rsp+180h] [rbp+80h] BYREF
  int v16; // [rsp+184h] [rbp+84h]
  unsigned int v17; // [rsp+188h] [rbp+88h]

  v14 = 0;
  v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v13, this, 0x28u, 0LL, 0LL, 0LL);
  v4 = v13;
  if ( (_QWORD)v13 )
  {
    *(_QWORD *)v13 = 0LL;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 20) = 0;
    *(_BYTE *)(v4 + 12) = 0;
    v9 = 16;
    *(_DWORD *)(v4 + 12) &= 0x1FFu;
    v10 = 16;
    *(_DWORD *)(v4 + 28) = 16;
    *(_DWORD *)(v4 + 16) = 14;
    *(_DWORD *)(v4 + 24) = 44;
    *(struct _LUID *)(v4 + 32) = *a2;
    v11 = v13;
    v12[0] = 16;
    v5 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v13, &v15, v12);
    if ( v5 >= 0 )
    {
      if ( v12[0] < 0x10 )
      {
        *(_DWORD *)(v11 + 24) = 16;
        v10 = 4;
      }
      else
      {
        if ( v16 >= 0 )
          goto LABEL_15;
        if ( v16 != -1073741637 )
          goto LABEL_3;
        *(_DWORD *)(v11 + 24) = v17;
        v9 = v17;
      }
      *(_DWORD *)(v11 + 28) = v9;
      v9 = v10;
    }
    v12[0] = v9;
    v5 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v13, &v15, v12);
    if ( v5 < 0 || v12[0] < v10 )
      goto LABEL_3;
    *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) = *(_DWORD *)(v11 + 24);
LABEL_15:
    v7 = v15;
    goto LABEL_4;
  }
  v5 = -1073741801;
LABEL_3:
  v6 = v5;
  WdLogSingleEntry1(2LL, v5);
  WdLogGlobalForLineNumber = 9923;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"VmBusSendOpenAdapter failed: 0x%I64x",
    v6,
    0LL,
    0LL,
    0LL,
    0LL);
  v7 = 0;
LABEL_4:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v13);
  return v7;
}
