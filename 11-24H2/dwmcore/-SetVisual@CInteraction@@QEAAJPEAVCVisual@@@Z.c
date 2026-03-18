/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180095A30
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180095328 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180094BF0 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z @ 0x180095AF0 (-Create@-$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801A6D58 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?ResolveResource@?$CWeakReference@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x1802164E4 (-ResolveResource@-$CWeakReference@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::SetVisual(CResourceWeakRef **this, struct CVisual *a2, __int64 a3)
{
  CResourceWeakRef **v3; // rsi
  CResourceWeakRef *v7; // r14
  struct CVisual *v8; // rbx
  struct CVisual *v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = this + 15;
  if ( a2 )
  {
    v7 = *v3;
    v8 = 0LL;
    v9 = 0LL;
    if ( v7 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v9);
      CWeakReference<CVisual>::ResolveResource(v7, &v9);
      v8 = v9;
    }
    if ( a2 != v8 )
    {
      ReleaseInterface<CWeakReference<CVisual>>(v3, (__int64)a2, a3);
      CWeakReference<CVisual>::Create(a2, v3);
    }
    if ( v8 )
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    ReleaseInterface<CWeakReference<CVisual>>(this + 15, 0LL, a3);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0xx_EventWriteTransfer(this, &INTERACTION_VISUAL_UPDATE, this, a2);
  return 0LL;
}
