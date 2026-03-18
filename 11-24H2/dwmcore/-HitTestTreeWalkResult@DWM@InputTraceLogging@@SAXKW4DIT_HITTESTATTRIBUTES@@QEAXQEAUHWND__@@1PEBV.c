/*
 * XREFs of ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180092400
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180091730 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x18009281C (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8CA4 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8CC0 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801B8D04 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801B8E64 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801B8EB4 (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801B92A0 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1801CB460 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U4@U4@U4@U4@U1@U1@U3@U4@U3@U3@U3@U3@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@444444444AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@66663356555556@Z @ 0x1801FBD10 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$03@@U.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x180203C00 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     atexit @ 0x180250CA4 (atexit.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestTreeWalkResult(
        unsigned int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 fPending)
{
  __int64 v6; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  const wchar_t *v22; // rax
  const wchar_t *v23; // rax
  const wchar_t *v24; // rax
  int v25; // r8d
  int v26; // r9d
  void (*v27)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v28; // [rsp+100h] [rbp-80h] BYREF
  int v29; // [rsp+104h] [rbp-7Ch] BYREF
  BOOL v30; // [rsp+108h] [rbp-78h] BYREF
  BOOL v31; // [rsp+10Ch] [rbp-74h] BYREF
  BOOL v32; // [rsp+110h] [rbp-70h] BYREF
  int v33; // [rsp+114h] [rbp-6Ch] BYREF
  int v34; // [rsp+118h] [rbp-68h] BYREF
  LPVOID Context; // [rsp+120h] [rbp-60h] BYREF
  void *InputHandle; // [rsp+128h] [rbp-58h] BYREF
  __int64 v37; // [rsp+130h] [rbp-50h] BYREF
  const char *v38; // [rsp+138h] [rbp-48h] BYREF
  const char *v39; // [rsp+140h] [rbp-40h] BYREF
  __int64 v40; // [rsp+148h] [rbp-38h] BYREF
  __int64 v41; // [rsp+150h] [rbp-30h] BYREF
  __int64 v42; // [rsp+158h] [rbp-28h] BYREF
  __int64 v43; // [rsp+160h] [rbp-20h] BYREF
  __int64 v44; // [rsp+168h] [rbp-18h] BYREF
  const wchar_t *v45; // [rsp+170h] [rbp-10h] BYREF
  const wchar_t *v46; // [rsp+178h] [rbp-8h] BYREF
  const wchar_t *v47; // [rsp+180h] [rbp+0h] BYREF
  const wchar_t *v48; // [rsp+188h] [rbp+8h] BYREF
  const wchar_t *v49; // [rsp+190h] [rbp+10h] BYREF
  const wchar_t *v50; // [rsp+198h] [rbp+18h] BYREF
  const wchar_t *v51; // [rsp+1A0h] [rbp+20h] BYREF
  const wchar_t *v52; // [rsp+1A8h] [rbp+28h] BYREF
  const wchar_t *v53; // [rsp+1B0h] [rbp+30h] BYREF
  const wchar_t *v54; // [rsp+1B8h] [rbp+38h] BYREF
  const char *v55; // [rsp+1C0h] [rbp+40h] BYREF

  v6 = fPending;
  Context = 0LL;
  LODWORD(fPending) = 0;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    qword_1803FAC58 = 0LL;
    Context = &qword_1803FAC50;
    qword_1803FAC50 = &CompositorTracing::`vftable';
    byte_1803FAC60 = 0;
    dword_1803FAC64 = 0;
    qword_1803FAC68 = (struct _tlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1803FAC50, qword_1803FAC68, v27);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &qword_1803FAC50);
  }
  v11 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 4u && (*(_BYTE *)(v11 + 16) & 2) != 0 && (*(_QWORD *)(v11 + 24) & 2LL) == *(_QWORD *)(v11 + 24) )
  {
    if ( v6 )
      v12 = *(_QWORD *)(v6 + 1712);
    else
      v12 = 0LL;
    v37 = v12;
    v30 = InputTraceLogging::InteractionHoverSource((const struct CInteraction *)v6);
    v31 = InputTraceLogging::InteractionInputTransparency((const struct CInteraction *)v6);
    v32 = InputTraceLogging::InteractionFurtherProcessingForInput((const struct CInteraction *)v6);
    if ( v6 )
    {
      v28 = *(_BYTE *)(v6 + 200) & 1;
      v29 = *(_DWORD *)(v6 + 196);
      InputHandle = CInteraction::GetInputHandle((CInteraction *)v6);
      v13 = *(_DWORD *)(v6 + 1720);
    }
    else
    {
      v28 = 0;
      v13 = 0;
      v29 = 0;
      InputHandle = 0LL;
    }
    v33 = v13;
    v38 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v6);
    v39 = InputTraceLogging::InteractionSourceTypeToString((const struct CInteraction *)v6);
    v41 = v6;
    v14 = v6;
    v43 = a4;
    if ( !v6 )
      v14 = 0LL;
    v44 = a3;
    v40 = v14;
    v42 = a5;
    v15 = L"HasCapture";
    if ( (a2 & 0x200) == 0 )
      v15 = (const wchar_t *)&unk_180381440;
    v34 = a2;
    v45 = v15;
    v16 = L"ControlDown";
    if ( (a2 & 0x100) == 0 )
      v16 = (const wchar_t *)&unk_180381440;
    v46 = v16;
    v17 = L"EraserDown";
    if ( (a2 & 0x80u) == 0 )
      v17 = (const wchar_t *)&unk_180381440;
    v47 = v17;
    v18 = L"BarrelButtonDown";
    if ( (a2 & 0x40) == 0 )
      v18 = (const wchar_t *)&unk_180381440;
    v48 = v18;
    v19 = L"NoHoverPointer";
    if ( (a2 & 0x20) == 0 )
      v19 = (const wchar_t *)&unk_180381440;
    v49 = v19;
    v20 = L"TouchTargeting";
    if ( (a2 & 0x10) == 0 )
      v20 = (const wchar_t *)&unk_180381440;
    v50 = v20;
    v21 = L"ButtonDown";
    if ( (a2 & 8) == 0 )
      v21 = (const wchar_t *)&unk_180381440;
    v51 = v21;
    v22 = L"WheelHorizontal";
    if ( (a2 & 4) == 0 )
      v22 = (const wchar_t *)&unk_180381440;
    v52 = v22;
    v23 = L"WheelIncreasing";
    if ( (a2 & 2) == 0 )
      v23 = (const wchar_t *)&unk_180381440;
    v53 = v23;
    v24 = L"MouseWheel";
    if ( (a2 & 1) == 0 )
      v24 = (const wchar_t *)&unk_180381440;
    v54 = v24;
    v55 = InputTraceLogging::PointerTypeToString(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v25,
      (unsigned int)&unk_1803CC814,
      v25,
      v26,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v34,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v33,
      (__int64)&InputHandle,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v37);
  }
  if ( v6 )
    InputTraceLogging::GestureTargeting::TraceInteractionConfiguration((const struct CInteraction *)v6);
}
