/*
 * XREFs of ?CalcImageTransform@CBitmapRealization@@IEBA_NPEAVCMILMatrix@@@Z @ 0x18005E450
 * Callers:
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005E5AC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 * Callees:
 *     <none>
 */

char __fastcall CBitmapRealization::CalcImageTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  float v2; // xmm5_4
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  char v7; // al
  char v8; // al
  char v9; // cl
  char v10; // al
  float v11; // xmm0_4
  char v12; // al

  v2 = *((float *)this + 45);
  v3 = *((float *)this + 46);
  v4 = *((float *)this + 47);
  v5 = *((float *)this + 49);
  v6 = *((float *)this + 48);
  *(_DWORD *)a2 = *((_DWORD *)this + 44);
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
  v7 = *((_BYTE *)a2 + 65);
  *((float *)a2 + 1) = v2;
  v8 = v7 & 0xC3 | 0x28;
  *((float *)a2 + 4) = v3;
  *((_BYTE *)a2 + 65) = v8;
  v9 = v8;
  v10 = (char)(4 * v8) >> 6;
  *((float *)a2 + 5) = v4;
  *((float *)a2 + 12) = v6;
  *((float *)a2 + 13) = v5;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_BYTE *)a2 + 64) = 8;
  if ( v10 > 0 )
    return 1;
  if ( v10 != -2 )
  {
    if ( (float)(COERCE_FLOAT((unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue & _xmm)
               + (float)((float)(0.0 * 61440.0) + (float)(0.0 * 61440.0))) != 1.0 )
      return 1;
    *((_BYTE *)a2 + 65) = v9 & 0xCF ^ 0x20;
  }
  if ( v2 == 0.0 && v3 == 0.0 )
  {
    v11 = *(float *)a2;
    *((_BYTE *)a2 + 64) = -120;
    if ( v11 == 1.0 && v4 == 1.0 )
    {
      v12 = *((_BYTE *)a2 + 64) & 0xCF ^ 0x20;
      *((_BYTE *)a2 + 64) = v12;
      if ( v6 == 0.0 && v5 == 0.0 )
      {
        *((_BYTE *)a2 + 64) = v12 & 0xFC ^ 2;
        return 0;
      }
    }
  }
  return 1;
}
