/*
 * XREFs of ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001C3B0
 * Callers:
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180147598 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001D1E0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJPEAVCDrawingContext@@@Z @ 0x1802D6E90 (-RecordUse@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WB.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJPEAVCDrawingContext@@@Z @ 0x1802D98C0 (-RecordUse@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffect::UpdateBitmaps(CCommonRenderingEffect *this, struct CDrawingContext *a2)
{
  __int64 i; // rbx
  char *v5; // rdi
  __int64 v7; // r15
  bool v8; // r12
  void (__fastcall *v9)(__int64, bool, _QWORD, void *); // r13
  unsigned int v10; // ecx
  int v11; // eax
  void *v12; // r9
  __int64 *v13; // rbp
  CCachedImageProducer **v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64 *, char *); // r12
  int v18; // eax
  unsigned int v19; // edi
  CCachedImageProducer *v20; // rcx
  __int64 (__fastcall *v21)(CCachedImageProducer *__hidden, struct CDrawingContext *); // rax
  int v22; // eax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  unsigned int v25; // [rsp+20h] [rbp-78h]
  _BYTE v26[16]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 2 )
      return 0LL;
    v5 = (char *)this + 24 * i;
    if ( !*((_QWORD *)v5 + 3) )
      continue;
    v7 = *((_QWORD *)v5 + 2);
    if ( !v7 )
    {
      v14 = (CCachedImageProducer **)(v5 + 24);
      goto LABEL_15;
    }
    v8 = *((_QWORD *)a2 + 6) && !*((_BYTE *)g_pComposition + 6466);
    v9 = *(void (__fastcall **)(__int64, bool, _QWORD, void *))(*(_QWORD *)v7 + 48LL);
    v10 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL)
                                                                                  + 24LL))(
                        *((_QWORD *)a2 + 4) + 8LL,
                        v26,
                        0LL,
                        IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse)
                    + 8);
    v11 = *((_DWORD *)a2 + 74);
    if ( v11 )
      v12 = (void *)(*((_QWORD *)a2 + 36) + 68LL * (unsigned int)(v11 - 1));
    else
      v12 = &CMILMatrix::Identity;
    v25 = v10;
    v9(v7, v8, 0LL, v12);
    v13 = (__int64 *)*((_QWORD *)v5 + 2);
    v14 = (CCachedImageProducer **)(v5 + 24);
    v15 = *((_QWORD *)v5 + 3);
    v16 = *v13;
    *((_QWORD *)v5 + 3) = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64 *, char *))(v16 + 64);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v18 = v17(v13, v5 + 24);
    v19 = v18;
    if ( v18 < 0 )
      break;
LABEL_15:
    v20 = *v14;
    v21 = *(__int64 (__fastcall **)(CCachedImageProducer *__hidden, struct CDrawingContext *))(*(_QWORD *)*v14 + 88LL);
    if ( (char *)v21 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse )
    {
      v22 = IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse(
              v20,
              a2,
              IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse,
              IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse);
    }
    else if ( v21 == CCachedImageProducer::RecordUse )
    {
      v22 = CCachedImageProducer::RecordUse(v20, a2);
    }
    else if ( (char *)v21 == (char *)IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse )
    {
      v22 = IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse(
              v20,
              a2,
              IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse,
              IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse);
    }
    else
    {
      v22 = ((__int64 (__fastcall *)(CCachedImageProducer *, struct CDrawingContext *, _QWORD, _QWORD))v21)(
              v20,
              a2,
              IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse,
              IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse);
    }
    v19 = v22;
    if ( v22 < 0 )
    {
      v23 = (unsigned int)v22;
      v24 = 99LL;
      goto LABEL_23;
    }
  }
  v23 = (unsigned int)v18;
  v24 = 94LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
    (const char *)v23,
    v25);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x9Eu, 0LL);
  return v19;
}
