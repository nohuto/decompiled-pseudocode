/*
 * XREFs of ?IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z @ 0x18007BA20
 * Callers:
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007B73C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CRoundedRectangleShape::IsRectangles(CRoundedRectangleShape *this, unsigned int *a2)
{
  __int64 v2; // rax
  float v3; // xmm0_4
  float v5; // xmm0_4

  v2 = *((_QWORD *)this + 2);
  v3 = *(float *)(v2 + 32);
  if ( *(_BYTE *)(v2 + 68) )
  {
    if ( v3 > 0.0 )
    {
      v5 = *(float *)(v2 + 36);
LABEL_13:
      if ( v5 <= 0.0 )
        goto LABEL_14;
      return 0;
    }
  }
  else
  {
    if ( v3 > 0.0 && *(float *)(v2 + 36) > 0.0
      || *(float *)(v2 + 40) > 0.0 && *(float *)(v2 + 44) > 0.0
      || *(float *)(v2 + 48) > 0.0 && *(float *)(v2 + 52) > 0.0 )
    {
      return 0;
    }
    if ( *(float *)(v2 + 56) > 0.0 )
    {
      v5 = *(float *)(v2 + 60);
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( a2 )
    *a2 = 1;
  return 1;
}
