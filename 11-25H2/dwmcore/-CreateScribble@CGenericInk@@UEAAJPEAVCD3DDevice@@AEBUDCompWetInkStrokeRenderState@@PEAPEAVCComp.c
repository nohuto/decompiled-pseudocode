/*
 * XREFs of ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801AB160
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetryInfo@0@@Z @ 0x1801AA704 (--0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetr.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801AB3C0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1801ABB50 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::CreateScribble(
        CGenericInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkWetStroke; // eax
  unsigned int v9; // ebx
  int DirectInkFactory; // eax
  struct IDCompositionDirectInkFactoryPartner *v11; // rdi
  struct IDCompositionDirectInkWetStrokePartner *v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rax
  void *v17; // rax
  CSuperWetInkScribbleBase *v18; // rax
  CSuperWetInkScribbleBase *v19; // rsi
  __int64 v20; // rbx
  struct IDCompositionDirectInkSuperWetStrokePartner *v22; // [rsp+30h] [rbp-40h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v23; // [rsp+38h] [rbp-38h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h] BYREF
  CGenericInk *v26; // [rsp+50h] [rbp-20h] BYREF
  int v27; // [rsp+58h] [rbp-18h]
  int v28; // [rsp+5Ch] [rbp-14h]
  void *v29; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v24 = 0LL;
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(this, a2, &v24);
  v9 = DirectInkWetStroke;
  if ( DirectInkWetStroke < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x184,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
LABEL_10:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
    return v9;
  }
  v23 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v23);
  v9 = DirectInkFactory;
  if ( DirectInkFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x187,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkFactory);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    goto LABEL_10;
  }
  v11 = v23;
  v12 = v24;
  v13 = *(_QWORD *)v23;
  v22 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *, struct IDCompositionDirectInkSuperWetStrokePartner **))(v13 + 48))(
          v23,
          v24,
          a3,
          &v22);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v14);
    if ( v22 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v11 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( !v12 )
      return v15;
    goto LABEL_16;
  }
  v26 = this;
  v27 = 0;
  v28 = 0;
  v29 = 0LL;
  v16 = *((_QWORD *)this + 7);
  if ( v16 )
    v17 = *(void **)(v16 + 72);
  else
    v17 = &unk_18038C548;
  v29 = v17;
  v18 = (CSuperWetInkScribbleBase *)operator new(0x40uLL);
  v19 = v18;
  if ( v18 )
  {
    v20 = *((_QWORD *)this + 11);
    CSuperWetInkScribbleBase::CSuperWetInkScribbleBase(
      v18,
      v22,
      *((_DWORD *)this + 70),
      (const struct CSuperWetInkScribbleBase::TelemetryInfo *)&v26);
    *(_QWORD *)v19 = &CSuperWetInkScribble::`vftable';
    *((_QWORD *)v19 + 7) = v20;
    if ( v20 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v20 + 8));
    (**(void (__fastcall ***)(CSuperWetInkScribbleBase *))v19)(v19);
    v25 = 0LL;
    *a4 = v19;
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(&v25);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    v9 = 0;
    goto LABEL_10;
  }
  v15 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19D,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
    (const char *)0x8007000ELL);
  if ( v22 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v11 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
LABEL_16:
    (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v12 + 16LL))(v12);
  return v15;
}
