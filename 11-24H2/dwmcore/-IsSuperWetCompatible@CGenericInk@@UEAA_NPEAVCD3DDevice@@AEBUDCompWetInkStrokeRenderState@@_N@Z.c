/*
 * XREFs of ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x1801A1CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1801A2210 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801A23F0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGenericInk::IsSuperWetCompatible(
        CGenericInk *this,
        struct CD3DDevice *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        char a4)
{
  struct IDCompositionDirectInkFactoryPartner *v6; // rdi
  struct IDCompositionDirectInkWetStrokePartner *v7; // rbx
  __int64 v9; // rax
  struct IDCompositionDirectInkFactoryPartner *v10[3]; // [rsp+20h] [rbp-18h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 11) || a4 && !*((_QWORD *)this + 17) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        14LL);
    return 0;
  }
  v11 = 0LL;
  if ( (int)CGenericInk::GetDirectInkWetStroke(this, a2, &v11) < 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        15LL);
    if ( !v11 )
      return 0;
    v9 = *(_QWORD *)v11;
LABEL_18:
    (*(void (**)(void))(v9 + 16))();
    return 0;
  }
  v10[0] = 0LL;
  if ( (int)CD2DContext::GetDirectInkFactory((struct CD3DDevice *)((char *)a2 + 16), v10) < 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        16LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v10);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
    return 0;
  }
  v6 = v10[0];
  v7 = v11;
  if ( !(*(unsigned int (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *))(*(_QWORD *)v10[0] + 40LL))(
          v10[0],
          v11,
          a3) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        3LL);
    if ( v6 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( !v7 )
      return 0;
    v9 = *(_QWORD *)v7;
    goto LABEL_18;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v7 + 16LL))(v7);
  return 1;
}
