/*
 * XREFs of ?GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B0B40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1801A9184 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::GetBounds(CSynchronousSuperWetInk *a1, __int64 a2, _OWORD *a3)
{
  int *v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // r8
  int v6; // xmm1_4
  _OWORD *v7; // rcx
  _DWORD *v8; // r8
  int v10; // xmm0_4
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = DirectX::g_XMZero;
  if ( !CSynchronousSuperWetInk::IsSuperWetCompatible(a1) )
    return 0LL;
  if ( *(_DWORD *)(v4 + 172) == 2 )
  {
    v6 = *v3;
    if ( COERCE_FLOAT(*v3 & _xmm) >= 0.0000011920929 || COERCE_FLOAT(v3[1] & _xmm) >= 0.0000011920929 )
    {
      v10 = v3[1];
      *v5 = 0;
      v5[1] = 0;
      v5[2] = v6;
      v5[3] = v10;
    }
    else if ( IsEmpty((const struct D2D_RECT_F *)(v4 + 72)) )
    {
      *v8 = 0;
      v8[1] = 0;
      v8[2] = 1065353216;
      v8[3] = 1065353216;
    }
    else
    {
      *(_OWORD *)v8 = *v7;
    }
    return 0LL;
  }
  v11 = *(_QWORD *)(v4 + 184);
  if ( !v11 )
    return 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 184LL))(v11);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB7,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
