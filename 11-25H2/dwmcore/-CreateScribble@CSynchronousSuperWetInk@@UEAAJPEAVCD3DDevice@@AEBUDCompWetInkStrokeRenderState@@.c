/*
 * XREFs of ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801A9C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ @ 0x1801A91B4 (-GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801A9990 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetryInfo@0@@Z @ 0x1801AA704 (--0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@IAEBUTelemetr.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801AB3C0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::CreateScribble(
        CSynchronousSuperWetInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkFactory; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  int v11; // ebx
  unsigned int PerFrameDataId; // eax
  std::_Ref_count_base *v13; // r14
  __int128 v14; // xmm0
  struct IDCompositionDirectInkFactoryPartner *v15; // rbx
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rax
  CSuperWetInkScribbleBase *v19; // rax
  CSuperWetInkScribbleBase *v20; // rdi
  __int64 v21; // rsi
  struct IDCompositionDirectInkSuperWetStrokePartner *v22; // rcx
  struct IDCompositionDirectInkFactoryPartner *v24; // [rsp+40h] [rbp-39h] BYREF
  struct IDCompositionDirectInkSuperWetStrokePartner *v25; // [rsp+48h] [rbp-31h] BYREF
  std::_Ref_count_base *v26[2]; // [rsp+50h] [rbp-29h] BYREF
  CSynchronousSuperWetInk *v27; // [rsp+60h] [rbp-19h] BYREF
  int v28; // [rsp+68h] [rbp-11h]
  int v29; // [rsp+6Ch] [rbp-Dh]
  __int64 v30; // [rsp+70h] [rbp-9h]
  __int128 v31; // [rsp+78h] [rbp-1h] BYREF
  __int64 v32; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v24 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), &v24);
  v11 = DirectInkFactory;
  if ( DirectInkFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
      (const char *)(unsigned int)DirectInkFactory);
    if ( v24 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v24 + 16LL))(v24);
    return (unsigned int)v11;
  }
  PerFrameDataId = CSynchronousSuperWetInk::GetPerFrameDataId(this, v8, v9, v10);
  *(_OWORD *)v26 = 0LL;
  v11 = CSynchronousSuperWetInk::LookupPerFrameData(this, PerFrameDataId, v26);
  if ( v11 < 0 )
  {
    if ( v26[1] )
      std::_Ref_count_base::_Decref(v26[1]);
    goto LABEL_31;
  }
  v13 = v26[0];
  v32 = 0LL;
  v31 = 0LL;
  if ( *((_BYTE *)v26[0] + 12) )
  {
    v14 = *(_OWORD *)a3;
    v32 = *((_QWORD *)a3 + 2);
  }
  else
  {
    v32 = 0LL;
    v14 = _xmm;
  }
  v15 = v24;
  v31 = v14;
  v16 = *(_QWORD *)v24;
  v25 = 0LL;
  v17 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, char *, _QWORD, _QWORD, __int128 *, char *, struct IDCompositionDirectInkSuperWetStrokePartner **))(v16 + 56))(
          v24,
          (char *)v26[0] + 20,
          *((unsigned int *)v26[0] + 4),
          *(_QWORD *)v26[0],
          &v31,
          (char *)a3 + 28,
          &v25);
  if ( v17 < 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        8LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
    if ( v26[1] )
      std::_Ref_count_base::_Decref(v26[1]);
    v11 = v17;
LABEL_31:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
    return (unsigned int)v11;
  }
  v27 = this;
  v29 = 0;
  v30 = 0LL;
  v18 = *((_QWORD *)this + 7);
  v28 = 2 - (*((_BYTE *)this + 168) != 0);
  if ( v18 )
    v30 = *(_QWORD *)(v18 + 72);
  v19 = (CSuperWetInkScribbleBase *)operator new(0x40uLL);
  v20 = v19;
  if ( v19 )
  {
    v21 = *((_QWORD *)this + 11);
    CSuperWetInkScribbleBase::CSuperWetInkScribbleBase(
      v19,
      v25,
      *((_DWORD *)v13 + 2),
      (const struct CSuperWetInkScribbleBase::TelemetryInfo *)&v27);
    *(_QWORD *)v20 = &CSuperWetInkScribble::`vftable';
    *((_QWORD *)v20 + 7) = v21;
    if ( v21 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v21 + 8));
    (**(void (__fastcall ***)(CSuperWetInkScribbleBase *))v20)(v20);
  }
  else
  {
    v20 = 0LL;
  }
  v22 = v25;
  *a4 = v20;
  if ( v22 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v26[1] )
    std::_Ref_count_base::_Decref(v26[1]);
  if ( v15 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v15 + 16LL))(v15);
  return 0LL;
}
