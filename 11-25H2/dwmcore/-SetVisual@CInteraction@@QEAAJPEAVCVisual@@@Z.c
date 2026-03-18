/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18013A9B0
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180139DF8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801009B4 (McTemplateU0xx_EventWriteTransfer.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1801396C0 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z @ 0x18013AA70 (-Create@-$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?ResolveResource@?$CWeakReference@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x180221FA4 (-ResolveResource@-$CWeakReference@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::SetVisual(CResourceWeakRef **this, struct CVisual *a2)
{
  CResourceWeakRef **v2; // rsi
  CResourceWeakRef *v6; // r14
  struct CVisual *v7; // rbx
  struct CVisual *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = this + 15;
  if ( a2 )
  {
    v6 = *v2;
    v7 = 0LL;
    v8 = 0LL;
    if ( v6 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v8);
      CWeakReference<CVisual>::ResolveResource(v6, &v8);
      v7 = v8;
    }
    if ( a2 != v7 )
    {
      ReleaseInterface<CWeakReference<CVisual>>(v2);
      CWeakReference<CVisual>::Create(a2, v2);
    }
    if ( v7 )
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    ReleaseInterface<CWeakReference<CVisual>>(this + 15);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0xx_EventWriteTransfer((__int64)this, &INTERACTION_VISUAL_UPDATE, this, a2);
  return 0LL;
}
