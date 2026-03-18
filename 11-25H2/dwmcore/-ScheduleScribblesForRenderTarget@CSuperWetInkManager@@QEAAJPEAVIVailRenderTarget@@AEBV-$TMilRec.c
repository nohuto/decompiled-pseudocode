/*
 * XREFs of ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18026C6EC
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028C274 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801749A0 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x180175B0C (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x18022A31C (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18025A1A8 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x18026BEEC (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::ScheduleScribblesForRenderTarget(
        CSuperWetInkManager *this,
        __int64 a2,
        __m128i *a3,
        _BYTE *a4)
{
  unsigned int v5; // ebp
  struct CSuperWetInkManager::VailSuperWetStroke *v8; // r14
  __int64 v9; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, _QWORD, char *, __int64 *); // rbx
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64); // rdi
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  *a4 = 0;
  if ( !*(_QWORD *)this )
    return 0LL;
  v8 = CSuperWetInkManager::TryLookupVailDataForSource(this, *(struct CSuperWetSource **)this);
  if ( *((_QWORD *)v8 + 1) != v9 )
    return 0LL;
  if ( *((_QWORD *)g_pComposition + 111) - *((_QWORD *)v8 + 13) >= 0xAuLL )
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
    return 0LL;
  }
  if ( !*((_BYTE *)v8 + 112) )
  {
    v22 = 0;
    v11 = CSuperWetInkManager::RegisterStrokeOnHost((struct ID3D12Device *)this, v8, &v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
    if ( !v22 )
      return 0LL;
  }
  if ( !CSuperWetInkManager::UpdateRenderStateClip(
          (const struct D2D_RECT_F *)((char *)v8 + 88),
          a3,
          0LL,
          (struct D2D_RECT_F *)((char *)v8 + 60)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        17LL);
    return 0LL;
  }
  v23 = 0LL;
  v13 = *(_QWORD *)v8;
  v14 = *(int (__fastcall **)(__int64, _QWORD, char *, __int64 *))(**(_QWORD **)v8 + 320LL);
  wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset(&v23);
  if ( v14(v13, *((_QWORD *)v8 + 2), (char *)v8 + 32, &v23) >= 0 )
  {
    v15 = *(_QWORD *)v8;
    v16 = v23;
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(**(_QWORD **)v8 + 328LL);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 1) + 32LL))(*((_QWORD *)v8 + 1));
    v19 = v17(v15, v18, v16);
    v20 = v19;
    if ( v19 >= 0 )
    {
      *a4 = 1;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BE,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v19);
      v5 = v20;
    }
  }
  else
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
  }
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(&v23);
  return v5;
}
