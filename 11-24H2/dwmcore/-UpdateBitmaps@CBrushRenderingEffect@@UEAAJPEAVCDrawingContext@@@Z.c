/*
 * XREFs of ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180146CD0
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

__int64 __fastcall CBrushRenderingEffect::UpdateBitmaps(CBrushRenderingEffect *this, struct CDrawingContext *a2)
{
  __int64 v2; // r8
  unsigned int v4; // edi
  __int64 i; // rbx
  char *v8; // rsi
  __int64 v9; // r14
  bool v10; // r13
  char *v11; // r12
  int v12; // ecx
  int v13; // eax
  void *v14; // r9
  __int64 *v15; // r12
  CCachedImageProducer **v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64 *, char *); // r13
  int v20; // eax
  unsigned int v21; // esi
  CCachedImageProducer *v22; // rcx
  __int64 (__fastcall *v23)(CCachedImageProducer *, struct CDrawingContext *); // rax
  int v24; // eax
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  void (__fastcall *v27)(__int64, bool, _QWORD, void *, int, char *); // [rsp+40h] [rbp-58h]
  _BYTE v28[16]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0LL;
  v4 = *(_DWORD *)(*((_QWORD *)this + 2) + 260LL);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v4 )
      return 0LL;
    v8 = (char *)this + 24 * i;
    if ( !*((_QWORD *)v8 + 4) )
      continue;
    v9 = *((_QWORD *)v8 + 3);
    if ( v9 )
      break;
    v16 = (CCachedImageProducer **)(v8 + 32);
LABEL_17:
    v22 = *v16;
    v23 = *(__int64 (__fastcall **)(CCachedImageProducer *, struct CDrawingContext *))(*(_QWORD *)*v16 + 88LL);
    if ( (char *)v23 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse )
    {
      v24 = IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse(
              v22,
              a2,
              v2,
              CCachedImageProducer::RecordUse);
    }
    else if ( v23 == CCachedImageProducer::RecordUse )
    {
      v24 = CCachedImageProducer::RecordUse(v22, a2);
    }
    else if ( (char *)v23 == (char *)IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse )
    {
      v24 = IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse(
              v22,
              a2,
              v2,
              CCachedImageProducer::RecordUse);
    }
    else
    {
      v24 = ((__int64 (__fastcall *)(CCachedImageProducer *, struct CDrawingContext *, __int64, __int64 (__fastcall *)(CCachedImageProducer *, struct CDrawingContext *)))v23)(
              v22,
              a2,
              v2,
              CCachedImageProducer::RecordUse);
    }
    v21 = v24;
    if ( v24 < 0 )
    {
      v25 = (unsigned int)v24;
      v26 = 99LL;
      goto LABEL_25;
    }
    v2 = 0LL;
  }
  v10 = *((_QWORD *)a2 + 6) && !*((_BYTE *)g_pComposition + 6466);
  v27 = *(void (__fastcall **)(__int64, bool, _QWORD, void *, int, char *))(*(_QWORD *)v9 + 48LL);
  if ( *((_BYTE *)a2 + 192) )
    v11 = (char *)a2 + 164;
  else
    v11 = 0LL;
  v12 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 (__fastcall *)(CCachedImageProducer *, struct CDrawingContext *)))(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 24LL))(
                      *((_QWORD *)a2 + 4) + 8LL,
                      v28,
                      0LL,
                      CCachedImageProducer::RecordUse)
                  + 8);
  v13 = *((_DWORD *)a2 + 74);
  if ( v13 )
    v14 = (void *)(*((_QWORD *)a2 + 36) + 68LL * (unsigned int)(v13 - 1));
  else
    v14 = &CMILMatrix::Identity;
  v27(v9, v10, 0LL, v14, v12, v11);
  v15 = (__int64 *)*((_QWORD *)v8 + 3);
  v16 = (CCachedImageProducer **)(v8 + 32);
  v17 = *((_QWORD *)v8 + 4);
  v18 = *v15;
  *((_QWORD *)v8 + 4) = 0LL;
  v19 = *(__int64 (__fastcall **)(__int64 *, char *))(v18 + 64);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v20 = v19(v15, v8 + 32);
  v21 = v20;
  if ( v20 >= 0 )
    goto LABEL_17;
  v25 = (unsigned int)v20;
  v26 = 94LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
    (const char *)v25);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xF0u, 0LL);
  return v21;
}
