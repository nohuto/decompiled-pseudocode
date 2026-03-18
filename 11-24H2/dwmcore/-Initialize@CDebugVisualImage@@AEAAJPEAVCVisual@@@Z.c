/*
 * XREFs of ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18028DC7C
 * Callers:
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18028DB5C (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18006D978 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ @ 0x18018B130 (-UpdateVisualTree@CCachedVisualImage@@MEAAJXZ.c)
 *     ?RegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAJXZ @ 0x18021D1F0 (-RegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAJXZ.c)
 */

__int64 __fastcall CDebugVisualImage::Initialize(CDebugVisualImage *this, struct CVisual *a2)
{
  int updated; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 87;
  *((_DWORD *)this + 39) = 1;
  CCachedVisualImage::ChoosePixelFormat(this);
  *((_QWORD *)this + 17) = a2;
  updated = CCachedVisualImage::RegisterRootVisualAsNotifier((struct CResource **)this);
  if ( updated < 0 )
  {
    v5 = 67LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\debugvisualimage.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CCachedVisualImage::UpdateVisualTree(this);
  if ( updated < 0 )
  {
    v5 = 68LL;
    goto LABEL_3;
  }
  *((_BYTE *)this + 2056) = 1;
  return 0LL;
}
