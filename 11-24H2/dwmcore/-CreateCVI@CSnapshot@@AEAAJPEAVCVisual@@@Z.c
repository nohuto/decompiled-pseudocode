/*
 * XREFs of ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1802A9018
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x1802A9290 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800691E0 (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x18006D8D0 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x180213074 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x180214474 (-RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z @ 0x18028D184 (-SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSnapshot::CreateCVI(CSnapshot *this, struct CVisual *a2)
{
  CCachedVisualImage *v4; // rax
  struct CCachedVisualImage *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct CCachedVisualImage *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = (CCachedVisualImage *)CCachedVisualImage::operator new();
  if ( v4 )
    v4 = CCachedVisualImage::CCachedVisualImage(v4, *((struct CComposition **)this + 3));
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)&v10, (__int64)v4);
  v5 = v10;
  if ( v10 )
  {
    v7 = (*(__int64 (__fastcall **)(struct CCachedVisualImage *))(*(_QWORD *)v10 + 56LL))(v10);
    v6 = v7;
    if ( v7 < 0 )
    {
      v9 = 25;
    }
    else if ( *((_DWORD *)this + 20)
           && *((_DWORD *)this + 21)
           && (v7 = CCachedVisualImage::SetForDCompSnapshot(
                      v5,
                      a2,
                      (const struct D2D_SIZE_U *)this + 10,
                      *((_BYTE *)this + 88)),
               v6 = v7,
               v7 < 0) )
    {
      v9 = 33;
    }
    else
    {
      v7 = CComposition::RegisterRenderSnapshotToPerform(*((CComposition **)this + 3), v5);
      v6 = v7;
      if ( v7 >= 0 )
      {
        wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=((__int64 *)this + 9, (__int64 *)&v10);
        goto LABEL_15;
      }
      v9 = 37;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v9, 0LL);
    goto LABEL_15;
  }
  v6 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x17u, 0LL);
LABEL_15:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  return v6;
}
