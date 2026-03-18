/*
 * XREFs of ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180044384
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180044974 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x180044620 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800447B8 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateEffectShaderBody(
        CRenderingTechniqueFragment *this,
        _QWORD **a2,
        __int64 *a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int16 ShaderLinkingArgument; // cx
  __int128 v9; // xmm0
  int v10; // eax
  void *v11; // rax
  void *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 i; // rdi
  __int16 v15; // ax
  __int64 v16; // rcx
  __int16 v18; // si
  __int64 v19; // r8
  __int64 k; // rax
  _QWORD *j; // rax
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+38h] [rbp-38h]
  unsigned __int64 v24[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+68h] [rbp-8h]
  __int16 v28; // [rsp+6Ch] [rbp-4h]
  char v29; // [rsp+6Eh] [rbp-2h]

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(*(_QWORD *)v7 + 24LL))(
    v7,
    v24,
    *((unsigned int *)this + 4));
  ShaderLinkingArgument = v28;
  v9 = v25;
  *((_BYTE *)this + 102) = v29;
  *((_QWORD *)this + 11) = v26;
  *(_OWORD *)((char *)this + 72) = v9;
  if ( (ShaderLinkingArgument & 0xFF00) == 0x100 )
    ShaderLinkingArgument = CRenderingTechniqueFragment::MakeShaderLinkingArgument(
                              (_DWORD)this,
                              256,
                              (unsigned __int8)ShaderLinkingArgument,
                              (_DWORD)a2,
                              (__int64)a3);
  *((_WORD *)this + 50) = ShaderLinkingArgument;
  v10 = v27;
  if ( (v27 & 0xF) != 0 )
    v10 = v27 - (v27 & 0xF) + 16;
  *((_DWORD *)this + 24) = v10;
  v11 = MIDL_user_allocate(saturated_mul(v24[0], 2uLL));
  v12 = (void *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = v11;
  if ( v12 )
    operator delete(v12);
  if ( *((_QWORD *)this + 13) )
  {
    v13 = v24[0];
    for ( i = 0LL; i < v24[0]; v13 = v24[0] )
    {
      v15 = *(_WORD *)(v24[1] + 2 * i);
      v18 = v15 & 0xFF00;
      if ( (((v15 & 0xFF00) - 256) & 0xFCFF) == 0 && v18 != 768 )
      {
        v19 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * (unsigned __int8)v15 + 8);
        if ( v19 )
        {
          for ( j = *a2; j != a2[1] && *j != v19; ++j )
            ;
          v15 = (j - *a2) | 0x500;
        }
        else
        {
          v22 = 0LL;
          v23 = 0;
          CRenderingTechniqueFragment::GetSurfaceDescription(
            this,
            (const struct CBrushRenderingGraph *)(unsigned __int8)v15,
            (unsigned __int8)v15,
            (struct CRenderingTechniqueFragment::SurfaceDescription *)&v22);
          for ( k = *a3;
                k != a3[1]
             && (*(_DWORD *)k != (_DWORD)v22 || *(_BYTE *)(k + 4) != BYTE4(v22) || *(_WORD *)(k + 8) != (_WORD)v23);
                k += 12LL )
          {
            ;
          }
          v15 = v18 | (-21845 * ((k - *a3) >> 2));
        }
      }
      *(_WORD *)(*((_QWORD *)this + 13) + 2 * i++) = v15;
    }
    v16 = *((_QWORD *)this + 13);
    if ( v13 == -1LL || !v16 && v13 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    *((_QWORD *)this + 7) = v13;
    *((_QWORD *)this + 8) = v16;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x22Fu, 0LL);
  }
  return v6;
}
