/*
 * XREFs of ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180084920
 * Callers:
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180085700 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B22A0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJPEAVCDrawingContext@@@Z @ 0x1802E0130 (-RecordUse@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WB.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJPEAVCDrawingContext@@@Z @ 0x1802E2B60 (-RecordUse@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingEffect::UpdateBitmaps(CBrushRenderingEffect *this, struct CDrawingContext *a2)
{
  __int64 v2; // r8
  unsigned int v4; // edi
  __int64 i; // rbx
  char *v8; // rsi
  __int64 v9; // r14
  bool v10; // r13
  unsigned int v11; // ecx
  int v12; // eax
  void *v13; // r9
  __int64 *v14; // r12
  CCachedImageProducer **v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64 *, char *); // r13
  int v19; // eax
  unsigned int v20; // esi
  CCachedImageProducer *v21; // rcx
  __int64 (__fastcall *v22)(CCachedImageProducer *__hidden, struct CDrawingContext *); // rax
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  unsigned int v26; // [rsp+20h] [rbp-78h]
  void (__fastcall *v27)(__int64, bool, _QWORD, void *); // [rsp+40h] [rbp-58h]
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
    v15 = (CCachedImageProducer **)(v8 + 32);
LABEL_15:
    v21 = *v15;
    v22 = *(__int64 (__fastcall **)(CCachedImageProducer *__hidden, struct CDrawingContext *))(*(_QWORD *)*v15 + 88LL);
    if ( (char *)v22 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse )
    {
      v23 = IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse(
              v21,
              a2,
              v2,
              CCachedImageProducer::RecordUse);
    }
    else if ( v22 == CCachedImageProducer::RecordUse )
    {
      v23 = CCachedImageProducer::RecordUse(v21, a2);
    }
    else if ( (char *)v22 == (char *)IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse )
    {
      v23 = IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::RecordUse(
              v21,
              a2,
              v2,
              CCachedImageProducer::RecordUse);
    }
    else
    {
      v23 = ((__int64 (__fastcall *)(CCachedImageProducer *, struct CDrawingContext *, __int64, __int64 (__fastcall *)(CCachedImageProducer *__hidden, struct CDrawingContext *)))v22)(
              v21,
              a2,
              v2,
              CCachedImageProducer::RecordUse);
    }
    v20 = v23;
    if ( v23 < 0 )
    {
      v24 = (unsigned int)v23;
      v25 = 99LL;
      goto LABEL_23;
    }
    v2 = 0LL;
  }
  v10 = *((_QWORD *)a2 + 6) && !*((_BYTE *)g_pComposition + 6490);
  v27 = *(void (__fastcall **)(__int64, bool, _QWORD, void *))(*(_QWORD *)v9 + 48LL);
  v11 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 (__fastcall *)(CCachedImageProducer *__hidden, struct CDrawingContext *)))(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 24LL))(
                      *((_QWORD *)a2 + 4) + 8LL,
                      v28,
                      0LL,
                      CCachedImageProducer::RecordUse)
                  + 8);
  v12 = *((_DWORD *)a2 + 74);
  if ( v12 )
    v13 = (void *)(*((_QWORD *)a2 + 36) + 68LL * (unsigned int)(v12 - 1));
  else
    v13 = &CMILMatrix::Identity;
  v26 = v11;
  v27(v9, v10, 0LL, v13);
  v14 = (__int64 *)*((_QWORD *)v8 + 3);
  v15 = (CCachedImageProducer **)(v8 + 32);
  v16 = *((_QWORD *)v8 + 4);
  v17 = *v14;
  *((_QWORD *)v8 + 4) = 0LL;
  v18 = *(__int64 (__fastcall **)(__int64 *, char *))(v17 + 64);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v19 = v18(v14, v8 + 32);
  v20 = v19;
  if ( v19 >= 0 )
    goto LABEL_15;
  v24 = (unsigned int)v19;
  v25 = 94LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
    (const char *)v24,
    v26);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xF0u, 0LL);
  return v20;
}
