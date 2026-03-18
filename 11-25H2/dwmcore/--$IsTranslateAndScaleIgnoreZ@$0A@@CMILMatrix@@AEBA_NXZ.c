/*
 * XREFs of ??$IsTranslateAndScaleIgnoreZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1801BDE40
 * Callers:
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18025AF4C (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsTranslateAndScaleIgnoreZ<0>(__int64 a1)
{
  char v1; // dl
  char v2; // r8
  char result; // al

  v1 = *(_BYTE *)(a1 + 64);
  if ( v1 >> 6 == 1 )
    return 0;
  if ( v1 >> 6 != 0xFE )
  {
    v2 = *(_BYTE *)(a1 + 65);
    if ( (char)(4 * v2) >> 6 != 1 )
    {
      if ( (char)(4 * v2) >> 6 == 0xFE )
      {
LABEL_7:
        if ( *(float *)(a1 + 4) == 0.0 && *(float *)(a1 + 16) == 0.0 )
        {
          result = 1;
          *(_BYTE *)(a1 + 64) = v1 & 0x3F | 0x80;
          return result;
        }
        return 0;
      }
      if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                         + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                 + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) == 1.0 )
      {
        *(_BYTE *)(a1 + 65) = v2 & 0xCF ^ 0x20;
        goto LABEL_7;
      }
    }
    return 0;
  }
  return 1;
}
