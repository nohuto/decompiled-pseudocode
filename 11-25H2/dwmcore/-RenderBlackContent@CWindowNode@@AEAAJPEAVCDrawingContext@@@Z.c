/*
 * XREFs of ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802131D4
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x18005E280 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x180074B90 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800ABA50 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::RenderBlackContent(CWindowNode *this, struct CDrawingContext *a2)
{
  bool v3; // zf
  int SpriteClipShape; // eax
  unsigned int v5; // ebx
  const struct CShape *v7; // rdx
  int v8; // eax
  CRectanglesShape *v9; // [rsp+30h] [rbp-9h] BYREF
  char v10; // [rsp+38h] [rbp-1h]
  _QWORD v11[5]; // [rsp+40h] [rbp+7h] BYREF
  _BYTE v12[16]; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v13; // [rsp+78h] [rbp+3Fh] BYREF

  v9 = 0LL;
  v11[1] = 0LL;
  v13 = 0LL;
  v3 = *((_QWORD *)this + 101) == 0LL;
  v11[0] = &CRectanglesShape::`vftable';
  v11[2] = v12;
  v11[3] = v12;
  v11[4] = &v13;
  v10 = 0;
  if ( v3 )
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v11, (const struct D2D_RECT_F *)this + 11);
    CShapePtr::~CShapePtr(&v9);
    v7 = (const struct CShape *)v11;
    v10 = 0;
    v9 = (CRectanglesShape *)v11;
  }
  else
  {
    SpriteClipShape = CWindowNode::GetSpriteClipShape(this, (struct CShapePtr *)&v9);
    v5 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SpriteClipShape, 0x590u, 0LL);
      goto LABEL_4;
    }
    v7 = v9;
  }
  v8 = CDrawingContext::FillShapeWithSolidColor(a2, v7, &_xmm);
  v5 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x595u, 0LL);
LABEL_4:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v11);
  CShapePtr::~CShapePtr(&v9);
  return v5;
}
