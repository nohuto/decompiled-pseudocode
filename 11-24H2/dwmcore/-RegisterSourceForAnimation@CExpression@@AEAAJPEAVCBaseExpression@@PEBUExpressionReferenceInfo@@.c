/*
 * XREFs of ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x18023D730
 * Callers:
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800E86C0 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x18019CFD0 (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 */

__int64 __fastcall CExpression::RegisterSourceForAnimation(
        CExpression *this,
        struct CBaseExpression *a2,
        const struct ExpressionReferenceInfo *a3)
{
  __int64 v7; // rcx
  CResource *TargetResource; // rax
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a3 + 4) >= *((_DWORD *)this + 92) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 43) + 8LL * *((unsigned int *)a3 + 4));
  if ( v7 )
  {
    TargetResource = (CResource *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v7);
    if ( TargetResource )
    {
      v9 = CResource::AddSourceAnimation(TargetResource, a2, *(_DWORD *)a3);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x165,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      *((_BYTE *)this + 376) |= 1u;
    }
  }
  return 0LL;
}
