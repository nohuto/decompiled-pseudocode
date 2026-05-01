/*
 * XREFs of ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x180054A8C
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x180052FBC (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 * Callees:
 *     ImageList_Destroy @ 0x18021E970 (ImageList_Destroy.c)
 *     ImageList_Create @ 0x180224860 (ImageList_Create.c)
 *     ImageList_GetIcon @ 0x1802C7DF8 (ImageList_GetIcon.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1?ImageList_Destroy@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802CE8BC (--1-$unique_storage@U-$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1-ImageList_Destroy@@YAH0@ZU.c)
 *     _GetProcFromComCtl32 @ 0x1802DE848 (_GetProcFromComCtl32.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
HICON __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        HBITMAP a2)
{
  int v3; // r9d
  struct _IMAGELIST *v4; // rbx
  unsigned int (__fastcall *v5)(struct _IMAGELIST *, HBITMAP, _QWORD); // rax
  int v6; // edx
  UINT v7; // r8d
  HICON Icon; // rdi
  int v10; // [rsp+20h] [rbp-38h]
  int v11[10]; // [rsp+30h] [rbp-28h] BYREF
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = this;
  memset(v11, 0, 32);
  if ( GetObjectW(a2, 32, v11) )
  {
    v4 = ImageList_Create(v11[1], v11[2], 0x20021u, v3, v10);
    v12 = v4;
    if ( v4 )
    {
      v5 = (unsigned int (__fastcall *)(struct _IMAGELIST *, HBITMAP, _QWORD))qword_1808C73B0;
      if ( qword_1808C73B0 == -1 )
      {
        GetProcFromComCtl32(&qword_1808C73B0, "ImageList_Add");
        v5 = (unsigned int (__fastcall *)(struct _IMAGELIST *, HBITMAP, _QWORD))qword_1808C73B0;
      }
      if ( v5 && v5(v4, a2, 0LL) != -1 )
      {
        Icon = ImageList_GetIcon(v4, v6, v7);
        ImageList_Destroy(v4);
        return Icon;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_IMAGELIST *,int (*)(_IMAGELIST *),&int ImageList_Destroy(_IMAGELIST *),wistd::integral_constant<unsigned __int64,0>,_IMAGELIST *,_IMAGELIST *,0,std::nullptr_t>>(&v12);
  }
  return 0LL;
}
