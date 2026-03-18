/*
 * XREFs of ?VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ @ 0x1401869CC
 * Callers:
 *     DxgkFlushHeapTransitions @ 0x1403AE250 (DxgkFlushHeapTransitions.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018462C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushHeapTransitions(DXG_GUEST_VIRTUALGPU_VMBUS *this)
{
  _DWORD *v2; // rax
  int v4; // eax
  __int64 v5; // rdi
  PVOID P[2]; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v7; // [rsp+60h] [rbp-128h]
  char v8; // [rsp+64h] [rbp-124h] BYREF

  v7 = 0;
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
    v2[4] = 37;
    v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
           this,
           (unsigned __int8 *)P[1],
           (struct DXGKVMB_COMMAND_BASE *)P[0],
           v7);
    v5 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(2LL, v4);
      WdLogGlobalForLineNumber = 9951;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VmBusSendFlushHeapTransitions failed: 0x%I64x",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v5;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v8 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
