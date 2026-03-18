/*
 * XREFs of ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x1801198E4
 * Callers:
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119350 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1802A3B00 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     <none>
 */

struct CDropShadow::ShadowIntermediates *__fastcall CDropShadow::GetEffectiveShadowIntermediates(
        CDropShadow *this,
        struct CVisual *a2)
{
  bool v2; // zf
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  struct CVisual *v14; // [rsp+10h] [rbp+10h]

  v2 = *((_DWORD *)this + 31) == 1;
  v14 = a2;
  if ( !v2 )
    return (CDropShadow *)((char *)this + 128);
  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)&v14 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = *((_QWORD *)this + 26);
  v9 = v5 & *((_QWORD *)this + 31);
  v10 = *((_QWORD *)this + 28);
  v11 = 2 * v9;
  v12 = *(_QWORD *)(v10 + 8 * v11 + 8);
  if ( v12 == v8 )
  {
LABEL_8:
    v12 = 0LL;
  }
  else
  {
    while ( a2 != *(struct CVisual **)(v12 + 16) )
    {
      if ( v12 == *(_QWORD *)(v10 + 8 * v11) )
        goto LABEL_8;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  if ( v12 )
  {
    if ( v12 != v8 )
      return (struct CDropShadow::ShadowIntermediates *)(v12 + 24);
  }
  return (struct CDropShadow::ShadowIntermediates *)v4;
}
