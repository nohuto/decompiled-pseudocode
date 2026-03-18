/*
 * XREFs of ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x18024B1AC
 * Callers:
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1801F192C (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBU.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1802A717C (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x18019C0B4 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x1802AB4AC (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Create(
        struct CSharedSectionBase *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct CGenericInkTipPointSource **a5)
{
  char *v9; // rax
  CGenericInkTipPointSource *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  CDrawListCache *v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = (char *)MIDL_user_allocate(0x28uLL);
  v10 = (CGenericInkTipPointSource *)v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 3) = 0;
    *((_QWORD *)v9 + 4) = 0LL;
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &CGenericInkTipPointSource::`vftable';
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 3) = 0LL;
    v14 = (CDrawListCache *)v9;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 8));
    v11 = CGenericInkTipPointSource::Initialize(v10, a1, a2, a3, a4);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v14 = 0LL;
      v12 = 0;
      *a5 = v10;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v14);
    return v12;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
