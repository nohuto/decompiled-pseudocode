/*
 * XREFs of ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801BBF60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180138AD0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1801AFF50 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801BBAA8 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::Push2DVisualTransformToRenderThread(CInteraction *this)
{
  CComposition *v1; // rdi
  struct IMessageCallSendHost *v3; // rbx
  int ManipulationManager; // eax
  struct CManipulationManager *v5; // rdi
  unsigned int v6; // esi
  int v7; // eax
  __int64 v9; // rsi
  struct _D3DMATRIX *D3DMatrix; // rax
  int v11; // eax
  struct _D3DMATRIX v12; // [rsp+40h] [rbp-49h] BYREF
  _D3DMATRIX v13; // [rsp+80h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+F0h] [rbp+67h] BYREF
  struct CManipulationManager *v15; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+100h] [rbp+77h] BYREF

  v1 = (CComposition *)*((_QWORD *)this - 6);
  v15 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  ManipulationManager = CComposition::GetManipulationManager(v1, &v15);
  v5 = v15;
  v6 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ManipulationManager, 0x2D7u, 0LL);
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    v7 = CManipulationManager::GetManipulationThreadMessageCallSendHost(v5, &v14);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x2D9u, 0LL);
LABEL_4:
      v3 = v14;
      goto LABEL_5;
    }
    v9 = *((_QWORD *)v5 + 7);
    if ( !v9 )
    {
      v6 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x2DCu, 0LL);
      goto LABEL_4;
    }
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 9) + 8LL))((char *)this - 72);
    D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)((char *)this + 1196), &v13);
    v15 = (CInteraction *)((char *)this - 72);
    v3 = v14;
    v16 = v9;
    v12 = *D3DMatrix;
    v11 = CoreUICallSend(v14, &v16, 1LL, 9LL, 3, &unk_180336E95, (unsigned int)&v15, &v12, LODWORD(v12._11));
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x2E5u, 0LL);
    else
      CComposition::ScheduleCompositionPass(*((_QWORD *)this - 6), 0, 0x4000u);
  }
LABEL_5:
  if ( v3 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v5 )
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
