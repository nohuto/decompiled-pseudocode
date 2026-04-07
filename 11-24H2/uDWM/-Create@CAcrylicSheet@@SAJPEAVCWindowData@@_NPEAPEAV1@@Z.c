/*
 * XREFs of ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18007C3E0
 * Callers:
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18007C32C (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800EB158 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180040558 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18007C4E0 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z @ 0x18007C560 (--0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA?AUtagRECT@@XZ @ 0x180098854 (-GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA-AUtagRECT@@XZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009AFF8 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSheet::Create(struct CWindowData *a1, bool a2, struct CAcrylicSheet **a3)
{
  CAcrylicSheet *v6; // rax
  const char *v7; // r9
  CAcrylicSheet *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  struct tagRECT v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*((_BYTE *)a1 + 742) & 1) != 0 )
    v12 = *CTopLevelWindow3D::GetSnapThumbnailLocation(*((CTopLevelWindow3D **)a1 + 56), &v12);
  else
    v12 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v12, a1);
  v6 = (CAcrylicSheet *)DefaultHeap::AllocClear(0x210uLL);
  if ( v6 )
    v8 = CAcrylicSheet::CAcrylicSheet(v6, &v12, *((_DWORD *)a1 + 87), a2);
  else
    v8 = 0LL;
  if ( !v8 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x22,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      v7);
  v9 = CAcrylicSheet::Initialize(v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *a3 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v9,
      v12.left);
    CBaseObject::Release(v8);
    return v10;
  }
}
