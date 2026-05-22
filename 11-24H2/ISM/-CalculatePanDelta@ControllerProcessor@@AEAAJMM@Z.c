/*
 * XREFs of ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180179DB8
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017BAD4 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     powf @ 0x18009D508 (powf.c)
 *     _o_sqrtf_0 @ 0x18009D52C (_o_sqrtf_0.c)
 */

__int64 __fastcall ControllerProcessor::CalculatePanDelta(ControllerProcessor *this, float a2, float a3)
{
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm7_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm0_4
  float v12; // xmm9_4

  v4 = a2;
  v5 = a3;
  if ( COERCE_FLOAT(LODWORD(a3) & _xmm) > 0.00000011920929 || COERCE_FLOAT(LODWORD(a2) & _xmm) > 0.00000011920929 )
  {
    v6 = powf(a2, 2.0);
    v7 = powf(a3, 2.0);
    v8 = o_sqrtf_0(v6 + v7);
    if ( v8 > 1.0 )
    {
      v4 = a2 / v8;
      v5 = a3 / v8;
    }
    v9 = v4 * -11.0;
    v10 = v5 * 11.0;
    if ( v9 == 0.0
      || (LODWORD(v11) = COERCE_UNSIGNED_INT(v10 / v9) & _xmm, v10 == 0.0)
      || *(float *)&dword_180250EA8 >= v11
      || v11 >= (float)(1.0 / *(float *)&dword_180250EA8) )
    {
      if ( COERCE_FLOAT(LODWORD(v9) & _xmm) <= COERCE_FLOAT(LODWORD(v10) & _xmm) )
        v9 = 0.0;
      else
        v10 = 0.0;
    }
    v12 = v10 + *((float *)this + 108);
    *((float *)this + 107) = v9 + *((float *)this + 107);
    *((float *)this + 108) = v12;
  }
  return 0LL;
}
