/*
 * XREFs of ?bWorldMatrixInRange@@YAHPEAUMATRIX@@@Z @ 0x140179710
 * Callers:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1401793D8 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400EABCC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall bWorldMatrixInRange(struct MATRIX *a1)
{
  EFLOAT *v1; // rdx
  EFLOAT *v2; // r9
  __int64 v3; // rdx
  EFLOAT *v4; // rcx
  unsigned int v5; // r8d
  BOOL IsZero; // eax
  float *v8; // rdx
  float *v9; // r9
  EFLOAT *v10; // r10
  EFLOAT *v11; // rcx
  EFLOAT *v12; // r9

  if ( EFLOAT::bIsZero((struct MATRIX *)((char *)a1 + 4)) && EFLOAT::bIsZero(v2) )
  {
    if ( !EFLOAT::bIsZero(v1) )
    {
      v4 = (EFLOAT *)(v3 + 12);
      goto LABEL_5;
    }
    return 0;
  }
  IsZero = EFLOAT::bIsZero(v1);
  v11 = (EFLOAT *)(v8 + 3);
  if ( !IsZero || !EFLOAT::bIsZero(v11) )
  {
    if ( (float)((float)(*(float *)v11 * *v8) - (float)(*(float *)v10 * *v9)) != 0.0 )
      return v5;
    return 0;
  }
  if ( EFLOAT::bIsZero(v10) )
    return 0;
  v4 = v12;
LABEL_5:
  if ( EFLOAT::bIsZero(v4) )
    return 0;
  return v5;
}
