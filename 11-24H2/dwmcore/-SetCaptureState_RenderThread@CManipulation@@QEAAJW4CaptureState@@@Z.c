/*
 * XREFs of ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1800ECD5C
 * Callers:
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1800E1918 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1800E6C0C (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x1800ECE5C (-AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1800EA3C8 (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::SetCaptureState_RenderThread(CManipulation *a1, int a2)
{
  int RenderToManipulationMsgInfo; // eax
  struct IMessageCallSendHost *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  __int64 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-18h]
  struct IMessageCallSendHost *v11; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  RenderToManipulationMsgInfo = CManipulation::_GetRenderToManipulationMsgInfo(a1, &v11, &v12);
  v5 = v11;
  v6 = RenderToManipulationMsgInfo;
  if ( RenderToManipulationMsgInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RenderToManipulationMsgInfo, 0x352u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)a1 + 8LL))(a1);
    LODWORD(v9) = a2;
    v11 = a1;
    v7 = CoreUICallSend(v5, &v12, 1LL, 9LL, 1, &unk_18032BF49, (unsigned int)&v11, v9, v10);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x35Bu, 0LL);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
