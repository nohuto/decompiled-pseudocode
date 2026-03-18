/*
 * XREFs of ?VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z @ 0x14007B498
 * Callers:
 *     _lambda_45359a313f17151045e4a29f2155e221_::operator() @ 0x140078040 (_lambda_45359a313f17151045e4a29f2155e221_--operator().c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14001F9D4 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendHostMonitorPower(
        DXG_VMBUS_CHANNEL_BASE *a1,
        struct _LUID a2,
        int a3,
        char a4)
{
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int8 v7[8]; // [rsp+50h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  struct _LUID v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  BOOL v13; // [rsp+74h] [rbp-Ch]

  v9 = 2;
  v11 = a2;
  v12 = a3;
  v10 = 6LL;
  v13 = a4 != 0;
  *(_QWORD *)v7 = 0LL;
  v8 = 0;
  v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(a1, v7, (struct DXGKVMB_COMMAND_BASE *)v7, 0x28u);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 7056;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VmBusSendAsyncMessage failed. 0x%I64x",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v5;
}
