/*
 * XREFs of ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXIPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@E@Z @ 0x14001F870
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x14001597C (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14001F9D4 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendPropagatePresentHistoryToken(
        DXG_VMBUS_CHANNEL_BASE *this,
        unsigned int a2,
        struct DXGPRESENTHISTORYTOKENQUEUE *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        struct CRefCountedBuffer *a5,
        unsigned __int8 a6)
{
  DXG_VMBUS_CHANNEL_BASE *v6; // rbx
  struct _MDL *v7; // [rsp+20h] [rbp-39h]
  unsigned __int8 v8[8]; // [rsp+60h] [rbp+7h] BYREF
  int v9; // [rsp+68h] [rbp+Fh]
  int v10; // [rsp+6Ch] [rbp+13h]
  __int64 v11; // [rsp+70h] [rbp+17h]
  struct DXGPRESENTHISTORYTOKENQUEUE *v12; // [rsp+78h] [rbp+1Fh]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v13; // [rsp+80h] [rbp+27h]
  struct CRefCountedBuffer *v14; // [rsp+88h] [rbp+2Fh]
  DXG_VMBUS_CHANNEL_BASE *v15; // [rsp+90h] [rbp+37h]

  v6 = this;
  v10 = 2;
  v11 = 1LL;
  v15 = 0LL;
  *(_QWORD *)v8 = 0LL;
  v9 = 0;
  v14 = a5;
  v13 = a4;
  v12 = a3;
  if ( a2 >= 0x18 )
  {
    this = (DXG_VMBUS_CHANNEL_BASE *)(a6 ^ (unsigned __int64)(a6 & 0xFE));
    v15 = this;
  }
  if ( bTracingEnabled && ((unsigned __int8)v15 & 1) == 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v7 = (struct _MDL *)a4;
    McTemplateK0ppqqxdqp_EtwWriteTransfer((__int64)this, &EventRetirePresentHistory, (__int64)a3, 0LL);
  }
  DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v6, v8, (struct DXGKVMB_COMMAND_BASE *)v8, 0x38u, v7);
}
