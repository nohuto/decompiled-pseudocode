/*
 * XREFs of ??$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1801BE2A0
 * Callers:
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18025AF4C (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsPure2DUniformZ<0>(__int64 a1)
{
  char v1; // dl
  char v2; // al
  char v4; // dl
  char v5; // r8

  v1 = *(_BYTE *)(a1 + 65);
  if ( (char)(16 * v1) >> 6 == 1 )
    return 0;
  if ( (char)(16 * v1) >> 6 != 0xFE )
  {
    if ( (char)(4 * v1) >> 6 == 1 )
      return 0;
    if ( (char)(4 * v1) >> 6 == 0xFE )
    {
      if ( (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) != 0.0 )
        return 0;
    }
    else
    {
      if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                         + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                 + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) == 1.0 )
      {
        v2 = 1;
        *(_BYTE *)(a1 + 65) = v1 & 0xCF ^ 0x20;
      }
      else
      {
        v2 = 0;
      }
      if ( ((unsigned __int8)v2 & ((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) == 0.0)) == 0 )
        return 0;
    }
    if ( *(float *)(a1 + 32) != 0.0 || *(float *)(a1 + 36) != 0.0 )
      return 0;
    *(_BYTE *)(a1 + 65) = *(_BYTE *)(a1 + 65) & 0xF3 ^ 8;
  }
  v4 = *(_BYTE *)(a1 + 64);
  if ( (char)(16 * v4) >> 6 == 1 )
    return 0;
  if ( (char)(16 * v4) >> 6 != 0xFE )
  {
    v5 = *(_BYTE *)(a1 + 65);
    if ( (char)(4 * v5) >> 6 != 1 )
    {
      if ( (char)(4 * v5) >> 6 != 0xFE )
      {
        if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                           + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                   + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) != 1.0 )
          return 0;
        *(_BYTE *)(a1 + 65) = v5 & 0xCF ^ 0x20;
      }
      if ( *(float *)(a1 + 8) == 0.0 && *(float *)(a1 + 24) == 0.0 )
      {
        *(_BYTE *)(a1 + 64) = v4 & 0xF3 ^ 8;
        return 1;
      }
    }
    return 0;
  }
  return 1;
}
