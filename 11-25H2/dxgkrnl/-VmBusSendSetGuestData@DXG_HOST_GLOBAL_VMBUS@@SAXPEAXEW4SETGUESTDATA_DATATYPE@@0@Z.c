/*
 * XREFs of ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x14007B57C
 * Callers:
 *     ?VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z @ 0x14007B680 (-VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1403B4470 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14001F9D4 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

int __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(__int64 a1, char a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  DXG_VMBUS_CHANNEL_BASE *v5; // rcx
  __int64 v6; // rbx
  unsigned __int8 v8[16]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v9; // [rsp+60h] [rbp+27h]
  __int64 v10; // [rsp+68h] [rbp+2Fh]
  __int128 v11; // [rsp+70h] [rbp+37h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v5 = *(DXG_VMBUS_CHANNEL_BASE **)a1;
    v11 = 0LL;
    *(_OWORD *)v8 = 0LL;
    v8[12] = 2;
    *(_DWORD *)&v8[12] = *(_WORD *)&v8[12] & 0x1FF;
    v9 = 0LL;
    v10 = v4;
    LODWORD(v11) = *a4;
    LODWORD(v9) = 2;
    DWORD2(v11) = a2 != 0;
    LODWORD(v4) = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v5, v8, (struct DXGKVMB_COMMAND_BASE *)v8, 0x30u);
    if ( (int)v4 < 0 )
    {
      v6 = (int)v4;
      WdLogSingleEntry1(2LL, (int)v4);
      WdLogGlobalForLineNumber = 7028;
      LODWORD(v4) = DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"VmBusSendAsyncMessage failed. 0x%I64x",
                      v6,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
    }
  }
  return v4;
}
