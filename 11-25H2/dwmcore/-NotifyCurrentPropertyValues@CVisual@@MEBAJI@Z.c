/*
 * XREFs of ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1801A4480
 * Callers:
 *     <none>
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180034550 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801A4810 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1801A5444 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1801A5E14 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1801C31C0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x1801DAAF0 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::NotifyCurrentPropertyValues(CVisual *this, int a2)
{
  unsigned int v2; // ebx
  FLOAT v5; // xmm1_4
  __m128i v6; // xmm0
  __int64 v7; // rcx
  FLOAT v8; // xmm1_4
  int v9; // eax
  int v11; // eax
  float OpacityInternal; // xmm0_4
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct D2D_VECTOR_3F v17; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_VECTOR_3F v18; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( (a2 & 0x10000000) == 0 )
    goto LABEL_30;
  v5 = *((float *)this + 30);
  v18.x = *((FLOAT *)this + 29);
  v6 = (__m128i)*((unsigned int *)this + 31);
  v18.y = v5;
  v7 = *(_QWORD *)&v18.x - CVisual::sc_defaultOffset;
  LODWORD(v18.z) = v6.m128i_i32[0];
  if ( *(_QWORD *)&v18.x == CVisual::sc_defaultOffset )
    v7 = (unsigned int)_mm_cvtsi128_si32(v6);
  if ( v7
    && (v11 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Cu, (const struct D2DVector3 *)&v18),
        v2 = v11,
        v11 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1924u, 0LL);
  }
  else
  {
LABEL_30:
    if ( (a2 & 0x4000000) == 0
      || (OpacityInternal = CVisual::GetOpacityInternal(this), OpacityInternal == 1.0)
      || (v15 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0x1Au, OpacityInternal), v2 = v15, v15 >= 0) )
    {
      if ( (a2 & 0x20000000) != 0
        && (v8 = *((float *)this + 35), v17.x = *((FLOAT *)this + 34), v17.y = v8, *(_QWORD *)&v17.x != CVisual::sc_Size)
        && (v9 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Du, (const struct D2DVector2 *)&v17),
            v2 = v9,
            v9 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1936u, 0LL);
      }
      else
      {
        if ( (a2 & 0x40000000) == 0 )
          goto LABEL_31;
        CVisual::GetRelativeOffsetInternal(this, &v17);
        v18 = v17;
        v13 = *(_QWORD *)&v17.x - CVisual::sc_defaultRelativeOffset;
        if ( *(_QWORD *)&v17.x == CVisual::sc_defaultRelativeOffset )
          v13 = (unsigned int)_mm_cvtsi128_si32((__m128i)LODWORD(v17.z));
        if ( v13
          && (v16 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x1Eu, (const struct D2DVector3 *)&v18),
              v2 = v16,
              v16 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x1943u, 0LL);
        }
        else
        {
LABEL_31:
          if ( a2 < 0 )
          {
            CVisual::GetRelativeLayoutSizeInternal(this);
            *(_QWORD *)&v17.x = *(_QWORD *)&v18.x;
            if ( *(_QWORD *)&v18.x != CVisual::sc_defaultRelativeSize )
            {
              v14 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Fu, (const struct D2DVector2 *)&v17);
              v2 = v14;
              if ( v14 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x194Du, 0LL);
            }
          }
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x192Du, 0LL);
    }
  }
  return v2;
}
