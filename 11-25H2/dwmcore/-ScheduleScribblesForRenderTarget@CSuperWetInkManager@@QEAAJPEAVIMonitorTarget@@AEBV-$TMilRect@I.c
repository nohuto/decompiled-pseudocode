/*
 * XREFs of ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ACD40
 * Callers:
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024F984 (-PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@IUMilRectU@@UMil3D.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x1800FCF9C (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ @ 0x180174A58 (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x180175B0C (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801ACFF4 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x180224664 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x18022A31C (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::ScheduleScribblesForRenderTarget(
        CSuperWetInkManager *this,
        __int64 *a2,
        __int64 a3)
{
  struct CSuperWetInkManager::SuperWetStroke *v7; // rax
  struct CSuperWetInkManager::SuperWetStroke *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rbx
  int v16; // ebx
  __int64 v17; // rax
  CComputeScribbleRenderer *v18; // rbx
  __int64 v19; // rdx
  void (__fastcall ***v20)(_QWORD); // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_QWORD *)this )
    return 0LL;
  v7 = CSuperWetInkManager::TryLookupDataForSource(this, *(struct CSuperWetSource **)this);
  v8 = v7;
  if ( *((__int64 **)v7 + 1) != a2 )
    return 0LL;
  if ( *((_QWORD *)g_pComposition + 111) - *((_QWORD *)v7 + 11) >= 0xAuLL )
    goto LABEL_33;
  if ( *((_BYTE *)v7 + 96) )
    goto LABEL_6;
  v22 = 0;
  if ( (int)CSuperWetInkManager::TryReadyForCurrentFrame(this, v7, &v22) < 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        18LL);
LABEL_33:
    CSuperWetInkManager::DeactivateCurrentSource(this);
    return 0LL;
  }
  if ( !v22 )
    return 0LL;
LABEL_6:
  *((_BYTE *)v8 + 96) = 0;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 64))(a2);
  if ( !(unsigned __int8)CSuperWetInkManager::UpdateRenderStateClip((char *)v8 + 72, a3, v9, (char *)v8 + 44) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        17LL);
    return 0LL;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 224))(a2);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
  v12 = *(__int64 **)this;
  v13 = **(_QWORD **)this;
  v20 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64, __int64, void (__fastcall ****)(_QWORD)))(v13 + 320))(
         v12,
         v11,
         (__int64)v8 + 16,
         &v20) < 0 )
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
LABEL_23:
    if ( v20 )
      (*v20)[1](v20);
    return 0LL;
  }
  v14 = *a2;
  v23 = 0LL;
  v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64 *))(v14 + 224))(a2);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v16 = (**v15)(v15, &GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f, &v23);
  if ( v16 < 0 )
  {
    v19 = 281LL;
    goto LABEL_16;
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 56LL))(v23);
  v18 = (CComputeScribbleRenderer *)v17;
  if ( !v17 )
    goto LABEL_21;
  if ( *(_BYTE *)(v17 + 48) )
    wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=((__int64 *)(v17 + 40), v20);
  else
    *(_BYTE *)(v17 + 49) = 1;
  v16 = CComputeScribbleRenderer::ScheduleScribble(v18);
  if ( v16 >= 0 )
  {
LABEL_21:
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    goto LABEL_23;
  }
  v19 = 292LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v16);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v20 )
    (*v20)[1](v20);
  return (unsigned int)v16;
}
