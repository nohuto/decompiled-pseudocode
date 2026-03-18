/*
 * XREFs of ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x1800EA2BC
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1800E90D0 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1800EA3C8 (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::SetAutoReset_RenderThread(CManipulation *this)
{
  int RenderToManipulationMsgInfo; // eax
  struct IMessageCallSendHost *v3; // rbx
  unsigned int v4; // edi
  int v6; // eax
  __int64 v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+40h] [rbp-8h]
  struct IMessageCallSendHost *v9; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  RenderToManipulationMsgInfo = CManipulation::_GetRenderToManipulationMsgInfo(this, &v9, &v10);
  v3 = v9;
  v4 = RenderToManipulationMsgInfo;
  if ( RenderToManipulationMsgInfo >= 0 )
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v9 = this;
    LODWORD(v7) = 1;
    v6 = CoreUICallSend(v3, &v10, 1LL, 9LL, 2, &unk_18032BF4F, (unsigned int)&v9, v7, v8);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x375u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RenderToManipulationMsgInfo, 0x36Cu, 0LL);
  }
  if ( v3 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
