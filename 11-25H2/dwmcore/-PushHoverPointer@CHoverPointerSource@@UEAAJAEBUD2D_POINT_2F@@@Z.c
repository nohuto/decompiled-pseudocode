/*
 * XREFs of ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x1801398A0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B5890 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180138AD0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHoverPointerSource::PushHoverPointer(CHoverPointerSource *this, const struct D2D_POINT_2F *a2)
{
  int v2; // esi
  CMILRefCountImpl *v4; // rbx
  __int64 (__fastcall *v5)(CMILRefCountImpl *); // rax
  CComposition *v6; // rdi
  int ManipulationManager; // eax
  struct CManipulationManager *v8; // rdi
  __int64 v9; // rsi
  int savedregs; // [rsp+40h] [rbp+0h]
  struct CManipulationManager *v12; // [rsp+70h] [rbp+30h] BYREF
  CHoverPointerSource *v13; // [rsp+78h] [rbp+38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  if ( *((float *)this + 20) == a2->x && *((float *)this + 21) == a2->y )
    return (unsigned int)v2;
  *((struct D2D_POINT_2F *)this + 10) = *a2;
  if ( CMit::s_pMessageSession )
  {
    v4 = CMit::s_pMessageCallSendHost;
    if ( CMit::s_pMessageCallSendHost )
      goto LABEL_4;
    if ( (int)CoreUICallCreateEndpointHost(CMit::s_pMessageSession, &CMit::s_pMessageCallSendHost, 0LL) < 0 )
      RaiseFailFastException(0LL, 0LL, 0);
  }
  v4 = CMit::s_pMessageCallSendHost;
LABEL_4:
  v13 = v4;
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v4 + 8LL);
    if ( v5 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v4);
    else
      v5(v4);
    v12 = 0LL;
    v6 = (CComposition *)*((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    ManipulationManager = CComposition::GetManipulationManager(v6, &v12);
    v2 = ManipulationManager;
    if ( ManipulationManager < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ManipulationManager, 0x49u, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    }
    else
    {
      v8 = v12;
      v9 = *((_QWORD *)v12 + 7);
      if ( v9 )
      {
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
        v12 = (struct CManipulationManager *)*((_QWORD *)this + 10);
        v13 = this;
        v14 = v9;
        v2 = CoreUICallSend(v4, &v14, 1LL, 9LL, 4, &unk_180336E9D, (unsigned int)&v13, &v12, savedregs);
        if ( v2 < 0 )
          (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 16LL))((char *)this + 8);
      }
      else
      {
        v2 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x4Au, 0LL);
      }
      (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v8 + 16LL))(v8);
      (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return (unsigned int)v2;
}
