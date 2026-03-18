/*
 * XREFs of ?UpdateBrushTransform@CCompositionGlyphRun@@AEAAXXZ @ 0x180295930
 * Callers:
 *     ?NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802958F0 (-NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18020EECC (-SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionGlyphRun::UpdateBrushTransform(CCompositionGlyphRun *this)
{
  __int64 v2; // rcx
  char v3; // al
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // xmm1_4
  int v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  CComponentTransform2D *v13; // r9
  _DWORD v14[6]; // [rsp+20h] [rbp-29h] BYREF
  __int128 v15; // [rsp+38h] [rbp-11h] BYREF
  int v16; // [rsp+48h] [rbp-1h]
  int v17; // [rsp+4Ch] [rbp+3h]
  __int128 v18; // [rsp+50h] [rbp+7h] BYREF
  float v19; // [rsp+60h] [rbp+17h]
  float v20; // [rsp+64h] [rbp+1Bh]
  _BYTE v21[24]; // [rsp+68h] [rbp+1Fh] BYREF
  struct D2D_MATRIX_3X2_F v22; // [rsp+80h] [rbp+37h] BYREF

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 107LL);
    v4 = (_QWORD *)*((_QWORD *)this + 11);
    if ( v3 )
    {
      v5 = v4[14];
      if ( !v5 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, 169LL) )
        return;
      v6 = v4[14];
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*v4 + 64LL))(*((_QWORD *)this + 11), 169LL) )
        return;
      v6 = *((_QWORD *)this + 11);
    }
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 144) )
      {
        v7 = *((_DWORD *)this + 24) ^ _xmm;
        v8 = *((_DWORD *)this + 25) ^ _xmm;
        v14[1] = 0;
        v14[2] = 0;
        v16 = v7;
        v9 = 1.0 / *((float *)this + 26);
        v10 = 1.0 / *((float *)this + 27);
        v17 = v8;
        v15 = _xmm;
        *(float *)v14 = v9;
        *(float *)&v14[3] = v10;
        *(float *)&v14[4] = 0.0 - (float)(v9 * 0.0);
        *(float *)&v14[5] = 0.0 - (float)(v10 * 0.0);
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)v21,
          (const struct D2D1::Matrix3x2F *)&v15,
          (const struct D2D1::Matrix3x2F *)v14);
        v11 = *((float *)this + 18) + *((float *)this + 20);
        v12 = *((float *)this + 19) + *((float *)this + 21);
        v18 = _xmm;
        v19 = v11;
        v20 = v12;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v22,
          (const struct D2D1::Matrix3x2F *)v21,
          (const struct D2D1::Matrix3x2F *)&v18);
        CComponentTransform2D::SetTransform(v13, &v22);
      }
    }
  }
}
