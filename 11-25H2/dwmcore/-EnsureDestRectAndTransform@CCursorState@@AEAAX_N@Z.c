/*
 * XREFs of ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x1802BC2D4
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802BC170 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802BC708 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C060 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801B3BAC (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCursorState::EnsureDestRectAndTransform(CCursorState *this, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  int *v5; // rcx
  int v6; // eax
  float v7; // xmm1_4
  int v8; // eax
  float v9; // xmm1_4
  float v10; // xmm2_4
  __int64 v11; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  const char *v13; // r9
  _DWORD *v14; // rax
  int v15; // xmm5_4
  int v16; // xmm4_4
  int v17; // xmm3_4
  int v18; // xmm2_4
  int v19; // xmm1_4
  struct D2D_RECT_F v20; // [rsp+20h] [rbp-79h] BYREF
  _DWORD v21[4]; // [rsp+30h] [rbp-69h] BYREF
  __int128 v22; // [rsp+40h] [rbp-59h] BYREF
  __int128 v23; // [rsp+50h] [rbp-49h]
  __int128 v24; // [rsp+60h] [rbp-39h]
  int v25; // [rsp+70h] [rbp-29h]
  int v26; // [rsp+74h] [rbp-25h]
  int v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+7Ch] [rbp-1Dh]
  int v29; // [rsp+80h] [rbp-19h]
  _BYTE v30[64]; // [rsp+90h] [rbp-9h] BYREF
  int v31; // [rsp+D0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v33; // [rsp+100h] [rbp+67h] BYREF
  int v34; // [rsp+104h] [rbp+6Bh]

  if ( !*((_BYTE *)this + 115) || a2 )
  {
    v3 = *((_QWORD *)this + 22);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 24) + 120LL;
      v29 = 0;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 32LL))(v4, &v33);
      v20.left = 0.0;
      v20.top = 0.0;
      v20.right = (float)v33;
      v20.bottom = (float)v34;
      if ( *((_BYTE *)this + 114) )
      {
        v20.right = (float)v33 + 6.0;
        v20.bottom = (float)v34 + 6.0;
      }
      v5 = (int *)*((_QWORD *)this + 22);
      v6 = *v5;
      v27 = 0;
      v23 = _xmm;
      v22 = _xmm;
      v7 = (float)v6;
      v8 = v5[1];
      v28 = 1065353216;
      LOBYTE(v29) = -88;
      v24 = _xmm;
      BYTE1(v29) = BYTE1(v29) & 0xC0 | 0x29;
      v25 = LODWORD(v7) ^ _xmm;
      v9 = 1.0 / *((float *)this + 42);
      v26 = COERCE_UNSIGNED_INT((float)v8) ^ _xmm;
      CMILMatrix::Scale((CMILMatrix *)&v22, v9, v9, 1.0);
      v10 = *((float *)this + 48);
      if ( COERCE_FLOAT(LODWORD(v10) & _xmm) >= 0.0000011920929 )
      {
        v21[0] = 0;
        v21[1] = 0;
        v31 = 0;
        v21[2] = 1065353216;
        CMILMatrix::SetRotation((CMILMatrix *)v30, (const struct Windows::Foundation::Numerics::float3 *)v21, v10);
        CMILMatrix::Multiply((CMILMatrix *)&v22, (const struct CMILMatrix *)v30);
      }
      CMILMatrix::Translate((CMILMatrix *)&v22, *((float *)this + 53), *((float *)this + 54));
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v22, &v20, (float *)this + 32);
      if ( !CMILMatrix::Invert((CMILMatrix *)&v22, v11, v12) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1A4,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          v13);
      v14 = (_DWORD *)((char *)this + 144);
      v15 = DWORD1(v22);
      v16 = v23;
      v17 = DWORD1(v23);
      v18 = v25;
      v19 = v26;
      *((_DWORD *)this + 36) = v22;
    }
    else
    {
      v17 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v14 = (_DWORD *)((char *)this + 144);
      *((_QWORD *)this + 17) = 0LL;
      v19 = 0;
      *((_QWORD *)this + 16) = 0LL;
      v18 = 0;
      *((_DWORD *)this + 36) = 1065353216;
      v16 = 0;
      v15 = 0;
    }
    v14[1] = v15;
    v14[2] = v16;
    v14[3] = v17;
    v14[4] = v18;
    v14[5] = v19;
    *((_BYTE *)this + 115) = 1;
  }
}
