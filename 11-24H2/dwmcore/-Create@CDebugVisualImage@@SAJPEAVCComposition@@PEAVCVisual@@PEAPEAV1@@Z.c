/*
 * XREFs of ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18028DB5C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x18006D8D0 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18028DC7C (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CDebugVisualImage::Create(
        struct CComposition *a1,
        struct CVisual *a2,
        struct CDebugVisualImage **a3)
{
  CCachedVisualImage *v7; // rax
  CCachedVisualImage *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CCachedVisualImage *v16; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  if ( !a2 )
    return 2147942487LL;
  v7 = (CCachedVisualImage *)DefaultHeap::AllocClear(0x810uLL);
  v8 = v7;
  if ( !v7 )
  {
    v16 = 0LL;
    v12 = -2147024882;
    v13 = 2147942414LL;
    v14 = 38LL;
    goto LABEL_8;
  }
  CCachedVisualImage::CCachedVisualImage(v7, a1);
  v16 = v8;
  *((_QWORD *)v8 + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapResource'};
  *(_QWORD *)v8 = &CDebugVisualImage::`vftable'{for `CResource'};
  *((_QWORD *)v8 + 10) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)v8 + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  CMILRefCountImpl::AddReference((CCachedVisualImage *)((char *)v8 + 8));
  v9 = CDebugVisualImage::Initialize(v8, a2);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = (unsigned int)v9;
    v14 = 40LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\debugvisualimage.cpp",
      (const char *)v13);
    goto LABEL_9;
  }
  v16 = 0LL;
  v12 = 0;
  *a3 = v8;
LABEL_9:
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    &v16,
    v10,
    v11);
  return v12;
}
