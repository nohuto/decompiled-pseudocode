/*
 * XREFs of RtlpFcValidateFeatureConfigurationBuffer @ 0x1801702B0
 * Callers:
 *     RtlOverwriteFeatureConfigurationBuffer @ 0x1801455A0 (RtlOverwriteFeatureConfigurationBuffer.c)
 * Callees:
 *     RtlULongLongMult @ 0x1800EA69C (RtlULongLongMult.c)
 *     RtlFcpCompareFeatureToFeature @ 0x18014F67C (RtlFcpCompareFeatureToFeature.c)
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationBuffer(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v3; // r10d
  unsigned int *v4; // r11
  unsigned int i; // r8d
  unsigned int *v6; // rdx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 )
  {
    if ( a2 < 4
      || ((unsigned __int8)a1 & 3) != 0
      || (int)RtlULongLongMult(*a1, 0x10uLL, &v8) < 0
      || v8 + 4 < v8
      || v8 + 4 > a2 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      for ( i = v3; i < *v4; ++i )
      {
        v6 = &v4[4 * i + 1];
        if ( i && (int)RtlFcpCompareFeatureToFeature(&v4[4 * i - 3], v6) >= 0
          || (v6[1] & 0x30) != 0 && (((v6[1] & 0x30) - 16) & 0xFFFFFFEF) != 0 )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
  }
  else
  {
    return a2 != 0 ? 0xC000000D : 0;
  }
  return v3;
}
