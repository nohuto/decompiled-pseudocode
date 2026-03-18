/*
 * XREFs of ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1801B9E2C
 * Callers:
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x1801B9D20 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801BC7BC (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180138AD0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1801BBAF4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::_GetRenderToManipulationMsgInfo(
        CManipulation *this,
        struct IMessageCallSendHost **a2,
        unsigned __int64 *a3)
{
  CComposition *v3; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v7; // rbx
  unsigned int v8; // edi
  struct IMessageCallSendHost **v9; // rdi
  unsigned __int64 v11; // rax
  struct CManipulationManager *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = (CComposition *)*((_QWORD *)this + 3);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v12);
  v7 = v12;
  v8 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ManipulationManager, 0x311u, 0LL);
  }
  else
  {
    *a2 = 0LL;
    v9 = (struct IMessageCallSendHost **)((char *)v7 + 64);
    if ( *((_QWORD *)v7 + 8)
      && (Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((char *)v7 + 64), (*a2 = *v9) != 0LL) )
    {
      v11 = *((_QWORD *)v7 + 4);
      *a3 = v11;
      if ( v11 )
      {
        v8 = 0;
      }
      else
      {
        v8 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x315u, 0LL);
      }
    }
    else
    {
      v8 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x313u, 0LL);
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
