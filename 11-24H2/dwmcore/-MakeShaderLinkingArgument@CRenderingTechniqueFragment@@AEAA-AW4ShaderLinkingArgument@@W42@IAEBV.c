/*
 * XREFs of ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x180044620
 * Callers:
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180044384 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x18020DE34 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800447B8 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 */

__int16 __fastcall CRenderingTechniqueFragment::MakeShaderLinkingArgument(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        unsigned int a3,
        _QWORD **a4,
        __int64 *a5)
{
  __int16 v5; // bx
  __int64 v6; // r11
  __int64 j; // rax
  _QWORD *i; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v5 = (__int16)a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL * a3 + 8);
  if ( v6 )
  {
    for ( i = *a4; i != a4[1] && *i != v6; ++i )
      ;
    return (i - *a4) | 0x500;
  }
  else
  {
    v10 = 0LL;
    v11 = 0;
    CRenderingTechniqueFragment::GetSurfaceDescription(
      a1,
      a2,
      a3,
      (struct CRenderingTechniqueFragment::SurfaceDescription *)&v10);
    for ( j = *a5;
          j != a5[1]
       && (*(_DWORD *)j != (_DWORD)v10 || *(_BYTE *)(j + 4) != BYTE4(v10) || *(_WORD *)(j + 8) != (_WORD)v11);
          j += 12LL )
    {
      ;
    }
    return v5 | (-21845 * ((j - *a5) >> 2));
  }
}
