/*
 * XREFs of ?FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z @ 0x18027205C
 * Callers:
 *     ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x180272704 (-Push@COccluderClipStack@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800A6F80 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1801A6700 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1801B50A0 (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 */

void __fastcall CCornerRects::FromData(
        struct D2D_RECT_F *this,
        const struct CRoundedRectangleGeometryData *a2,
        const struct CMILMatrix *a3)
{
  __int64 v6; // rcx
  bool IsRoundedCorner; // al
  int v8; // edx
  float v9; // xmm6_4
  unsigned int v10; // r11d
  float v11; // xmm8_4
  struct D2D_RECT_F *v12; // rsi
  bool v13; // al
  bool v14; // r11
  float v15; // xmm7_4
  unsigned __int64 v16; // rcx
  FLOAT v17; // xmm0_4
  bool v18; // r13
  struct D2D_RECT_F *v19; // r14
  bool v20; // al
  bool v21; // r11
  float v22; // xmm6_4
  unsigned __int64 v23; // rcx
  FLOAT v24; // xmm1_4
  bool v25; // r15
  struct D2D_RECT_F *v26; // rdi
  char v27; // r8
  bool v28; // r11
  char v29; // al
  unsigned __int64 v30; // rcx
  FLOAT v31; // xmm8_4
  bool v32; // al
  int v33; // eax
  int v34; // eax
  struct D2D_RECT_F v35; // xmm3
  struct D2D_RECT_F v36; // xmm2
  struct D2D_RECT_F v37; // xmm1
  struct D2D_RECT_F v38; // xmm3
  struct D2D_RECT_F v39; // xmm2
  struct D2D_RECT_F v40; // xmm0
  struct D2D_RECT_F v41; // xmm3
  struct D2D_RECT_F v42; // xmm1
  struct D2D_RECT_F v43; // xmm0
  _DWORD v44[2]; // [rsp+20h] [rbp-B8h] BYREF
  float v45; // [rsp+28h] [rbp-B0h]
  float v46; // [rsp+2Ch] [rbp-ACh]
  char v47; // [rsp+E0h] [rbp+8h]

  CRoundedRectangleGeometryData::GetBaseRect((__int64)a2, (__int64)v44);
  IsRoundedCorner = CRoundedRectangleGeometryData::IsRoundedCorner(v6, 0);
  v9 = *(float *)&v44[1];
  v10 = v8 + 1;
  v11 = *(float *)v44;
  if ( IsRoundedCorner )
  {
    LODWORD(this->left) = v44[0];
    this->top = v9;
    this->right = v11 + *((float *)a2 + 4);
    this->bottom = v9 + *((float *)a2 + 5);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, this, &this->left);
    v47 = IsEmpty(this);
  }
  else
  {
    *(_QWORD *)&this->left = 0LL;
    *(_QWORD *)&this->right = 0LL;
    v47 = v8 + 1;
  }
  v12 = this + 1;
  v13 = CRoundedRectangleGeometryData::IsRoundedCorner((__int64)a2, v10);
  v15 = v45;
  if ( v13 )
  {
    v16 = -(__int64)(*((_BYTE *)a2 + 52) != 0) & 0xFFFFFFFFFFFFFFF8uLL;
    v17 = v45 - *(float *)((char *)a2 + v16 + 24);
    this[1].top = v9;
    this[1].right = v15;
    v12->left = v17;
    this[1].bottom = v9 + *(float *)((char *)a2 + v16 + 28);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, this + 1, &this[1].left);
    v18 = IsEmpty(this + 1);
  }
  else
  {
    *(_QWORD *)&v12->left = 0LL;
    v18 = v14;
    *(_QWORD *)&this[1].right = 0LL;
  }
  v19 = this + 2;
  v20 = CRoundedRectangleGeometryData::IsRoundedCorner((__int64)a2, 2u);
  v22 = v46;
  if ( v20 )
  {
    v23 = -(__int64)(*((_BYTE *)a2 + 52) != 0) & 0xFFFFFFFFFFFFFFF0uLL;
    v19->left = v15 - *(float *)((char *)a2 + v23 + 32);
    v24 = v22 - *(float *)((char *)a2 + v23 + 36);
    this[2].right = v15;
    this[2].bottom = v22;
    this[2].top = v24;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, this + 2, &this[2].left);
    v25 = IsEmpty(this + 2);
  }
  else
  {
    *(_QWORD *)&v19->left = 0LL;
    v25 = v21;
    *(_QWORD *)&this[2].right = 0LL;
  }
  v26 = this + 3;
  if ( CRoundedRectangleGeometryData::IsRoundedCorner((__int64)a2, 3u) )
  {
    v29 = *((_BYTE *)a2 + 52);
    v26->left = v11;
    v30 = -(__int64)(v29 != 0) & 0xFFFFFFFFFFFFFFE8uLL;
    this[3].top = v22 - *(float *)((char *)a2 + v30 + 44);
    v31 = v11 + *(float *)((char *)a2 + v30 + 40);
    this[3].bottom = v22;
    this[3].right = v31;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, this + 3, &this[3].left);
    v32 = IsEmpty(this + 3);
    v27 = 0;
  }
  else
  {
    *(_QWORD *)&v26->left = 0LL;
    v32 = v28;
    *(_QWORD *)&this[3].right = 0LL;
  }
  if ( v47 == v27 || !v18 || !v25 || !v32 )
    v28 = v27;
  LOBYTE(this[4].left) = v28;
  if ( !v28 )
  {
    v33 = CMILMatrix::GetRotation(a3) - 2;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( v34 )
      {
        if ( v34 == 1 )
        {
          v35 = *this;
          v36 = this[1];
          v37 = this[2];
          *this = this[3];
          *v12 = v35;
          *v19 = v36;
          *v26 = v37;
        }
      }
      else
      {
        v38 = *this;
        v39 = this[1];
        v40 = this[3];
        *this = this[2];
        *v12 = v40;
        *v19 = v38;
        *v26 = v39;
      }
    }
    else
    {
      v41 = *this;
      v42 = this[2];
      v43 = this[3];
      *this = this[1];
      *v12 = v42;
      *v19 = v43;
      *v26 = v41;
    }
  }
}
