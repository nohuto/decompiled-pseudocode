/*
 * XREFs of ?CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1802A3560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetryInfo@0@@Z @ 0x1801AA704 (--0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetr.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801AB3C0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelegatedInkCanvas::CreateScribble(
        CDelegatedInkCanvas *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkFactory; // eax
  int v7; // ebx
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  CSuperWetInkScribbleBase *v12; // rax
  CSuperWetInkScribbleBase *v13; // rdi
  __int64 v14; // rbx
  struct IDCompositionDirectInkSuperWetStrokePartner *v16; // [rsp+40h] [rbp-C0h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  _BYTE v21[24]; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+A8h] [rbp-58h]
  int v23; // [rsp+ACh] [rbp-54h]
  __int128 v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+C4h] [rbp-3Ch]
  int v27; // [rsp+CCh] [rbp-34h]
  __int128 v28; // [rsp+D0h] [rbp-30h]
  __int128 v29; // [rsp+E0h] [rbp-20h]
  __int128 v30; // [rsp+F0h] [rbp-10h]
  __int128 v31; // [rsp+100h] [rbp+0h]
  char v32; // [rsp+110h] [rbp+10h]
  __int16 v33; // [rsp+111h] [rbp+11h]
  char v34; // [rsp+113h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v17 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v17);
  v7 = DirectInkFactory;
  if ( DirectInkFactory >= 0 )
  {
    v8 = *((_OWORD *)this + 9);
    *(_QWORD *)v21 = 0LL;
    v22 = 0;
    v23 = 0;
    v25 = 0;
    v18 = 0LL;
    v33 = 0;
    v34 = 0;
    v27 = 0;
    *(_QWORD *)&v24 = -1LL;
    v26 = 0LL;
    *(_WORD *)((char *)&v24 + 13) = 0;
    HIBYTE(v24) = 0;
    *(_OWORD *)&v21[8] = v8;
    v29 = *(_OWORD *)v21;
    v32 = 1;
    v28 = _xmm;
    v30 = *((unsigned __int64 *)&v8 + 1);
    DWORD2(v24) = 1065353216;
    BYTE12(v24) = 0;
    v31 = v24;
    v9 = *(_QWORD *)v17;
    v16 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, int *, __int64))(v9 + 56))(
           v17,
           &v25,
           84LL);
    if ( v7 >= 0 )
    {
      v19[1] = 2LL;
      v20 = 0LL;
      v10 = *((_QWORD *)this + 7);
      v19[0] = this;
      if ( v10 )
        v20 = *(_QWORD *)(v10 + 72);
      v11 = *((_QWORD *)this + 20);
      v12 = (CSuperWetInkScribbleBase *)operator new(0x48uLL);
      v13 = v12;
      if ( v12 )
      {
        v14 = *((_QWORD *)this + 24);
        CSuperWetInkScribbleBase::CSuperWetInkScribbleBase(
          v12,
          v16,
          0,
          (const struct CSuperWetInkScribbleBase::TelemetryInfo *)v19);
        *((_QWORD *)v13 + 7) = v14;
        *(_QWORD *)v13 = &CInkCanvasScribble::`vftable';
        *((_QWORD *)v13 + 8) = v11;
        ((void (__fastcall *)(CSuperWetInkScribbleBase *))CInkCanvasScribble::`vftable')(v13);
      }
      else
      {
        v13 = 0LL;
      }
      v18 = 0LL;
      *a4 = v13;
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(&v18);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
      v7 = 0;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          8LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
      (const char *)(unsigned int)DirectInkFactory);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return (unsigned int)v7;
}
