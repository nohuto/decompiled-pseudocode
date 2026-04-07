/*
 * XREFs of ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180060D60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180060FA0 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x18006D77C (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18006D878 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800951B0 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z @ 0x180098AB8 (-SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z @ 0x18009B238 (-SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z.c)
 *     ?SetRealizationSize@CDCompDesktopThumbnailCVI@@QEAAXAEBUtagSIZE@@@Z @ 0x1800BC468 (-SetRealizationSize@CDCompDesktopThumbnailCVI@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z @ 0x1800BC478 (-SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800ECA1C (-Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x1800ECB00 (-Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDCompThumbnailData::EnsureThumbnailVisual(CDCompThumbnailData *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  LONG v9; // eax
  LONG v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  CDesktopThumbnailCVIVisual *v13; // rax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+30h]
  CDesktopThumbnailCVIVisual *v16; // [rsp+60h] [rbp+38h] BYREF
  CDesktopThumbnailCVI *v17; // [rsp+68h] [rbp+40h] BYREF
  struct CDesktopThumbnailBase *v18; // [rsp+70h] [rbp+48h] BYREF
  struct tagSIZE v19; // [rsp+78h] [rbp+50h] BYREF

  if ( *((_DWORD *)this + 30) == 1 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
    v5 = CDCompDesktopThumbnail::Create(&v18);
    v3 = v5;
    if ( v5 < 0 )
    {
      v6 = 312LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
        (const char *)(unsigned int)v5,
        v14);
LABEL_27:
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
      return v3;
    }
    *((_QWORD *)v18 + 30) = this;
    v5 = CDesktopThumbnailBase::SetDesktopId(v18, *(_QWORD *)(*((_QWORD *)this + 2) + 136LL));
    v3 = v5;
    if ( v5 < 0 )
    {
      v6 = 314LL;
      goto LABEL_11;
    }
    v17 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
    v7 = CDCompDesktopThumbnailCVI::Create(&v17);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v7 = CDCompDesktopThumbnailCVI::SetSourceRect(v17, (const struct tagRECT *)((char *)this + 56));
      v3 = v7;
      if ( v7 >= 0 )
      {
        v9 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
        if ( v9 < 0 )
          v9 = 0;
        v19.cx = v9;
        v10 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
        if ( v10 < 0 )
          v10 = 0;
        v19.cy = v10;
        CDCompDesktopThumbnailCVI::SetRealizationSize(v17, &v19);
        CDesktopThumbnailCVI::SetVisual(v17, v18);
        v16 = 0LL;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
        v11 = CDesktopThumbnailCVIVisual::Create(&v16);
        v3 = v11;
        if ( v11 >= 0 )
        {
          *((_QWORD *)v16 + 34) = *((_QWORD *)this + 2);
          *((_DWORD *)v16 + 75) = *((_DWORD *)this + 9);
          *((_BYTE *)v16 + 297) = 1;
          v11 = CDesktopThumbnailCVIVisual::SetVisual(v16, v17, (RECT *)((char *)this + 56));
          v3 = v11;
          if ( v11 >= 0 )
          {
            CDesktopThumbnailCVIVisual::Update(
              v16,
              (const struct tagRECT *)((char *)this + 40),
              (double)*((unsigned __int8 *)this + 72) / 255.0);
            v13 = v16;
            v16 = 0LL;
            *((_QWORD *)this + 14) = v13;
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
            Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
            return 0LL;
          }
          v12 = 329LL;
        }
        else
        {
          v12 = 323LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
          (const char *)(unsigned int)v11,
          v14);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
        goto LABEL_26;
      }
      v8 = 318LL;
    }
    else
    {
      v8 = 317LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
      (const char *)(unsigned int)v7,
      v14);
LABEL_26:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
    goto LABEL_27;
  }
  if ( *((_DWORD *)this + 30) )
    return 0LL;
  v2 = CThumbnailData::EnsureThumbnailVisual(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x151,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
    (const char *)(unsigned int)v2,
    v14);
  return v3;
}
