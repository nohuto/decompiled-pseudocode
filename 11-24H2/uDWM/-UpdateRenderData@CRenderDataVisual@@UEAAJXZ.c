/*
 * XREFs of ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18003EFA0
 * Callers:
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800C7DF0 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z @ 0x18003F190 (-Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z.c)
 *     ?CreateRenderDataProxy@CCompositor@@QEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x18003F1B8 (-CreateRenderDataProxy@CCompositor@@QEAAJPEAPEAVCRenderDataProxy@@@Z.c)
 *     ?CreateRenderDataBuilder@CCompositor@@QEAAJPEAPEAUIRenderDataBuilder@@@Z @ 0x18003F1C4 (-CreateRenderDataBuilder@CCompositor@@QEAAJPEAPEAUIRenderDataBuilder@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateRenderData(struct CRenderDataProxy **this)
{
  _QWORD *v2; // r14
  int v3; // ebp
  int v4; // eax
  unsigned int v5; // esi
  void (__fastcall *v6)(struct CRenderDataProxy **, _QWORD); // rax
  int RenderDataProxy; // eax
  int v9; // eax
  int v10; // eax
  int i; // r14d
  __int64 v12; // rcx
  int v13; // eax
  struct IRenderDataBuilder *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = this + 25;
  v14 = 0LL;
  if ( !this[25] )
  {
    RenderDataProxy = CCompositor::CreateRenderDataProxy(
                        *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                        this + 25);
    v5 = RenderDataProxy;
    if ( RenderDataProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RenderDataProxy, 0x65u, 0LL);
      goto LABEL_6;
    }
    v9 = (*((__int64 (__fastcall **)(struct CRenderDataProxy **, struct CRenderDataProxy *))*this + 24))(this, this[25]);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x66u, 0LL);
      goto LABEL_6;
    }
    v2 = this + 25;
  }
  v3 = *((_DWORD *)this + 58);
  if ( v3 > 0 )
  {
    v10 = CCompositor::CreateRenderDataBuilder(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6), &v14);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x6Fu, 0LL);
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= v3 )
        {
          v2 = this + 25;
          goto LABEL_3;
        }
        v12 = *((_QWORD *)this[26] + (unsigned int)i);
        v13 = (*(__int64 (__fastcall **)(__int64, struct IRenderDataBuilder *, struct CRenderDataProxy **))(*(_QWORD *)v12 + 8LL))(
                v12,
                v14,
                this);
        v5 = v13;
        if ( v13 < 0 )
          break;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x73u, 0LL);
    }
  }
  else
  {
LABEL_3:
    v4 = CRenderDataProxy::Update(this[25], v14);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x7Au, 0LL);
    }
    else
    {
      v6 = (void (__fastcall *)(struct CRenderDataProxy **, _QWORD))*((_QWORD *)*this + 24);
      if ( v3 > 0 )
        v6(this, *v2);
      else
        v6(this, 0LL);
    }
  }
LABEL_6:
  if ( v14 )
    (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v14 + 16LL))(v14);
  return v5;
}
