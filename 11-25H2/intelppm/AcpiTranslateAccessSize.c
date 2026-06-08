/*
 * XREFs of AcpiTranslateAccessSize @ 0x140033D48
 * Callers:
 *     AcpiEval_PCT_PTC @ 0x1400279B4 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_CPC @ 0x140031088 (AcpiEval_CPC.c)
 *     AcpiParseCpcResourcePriorityRegisterDescriptor @ 0x140032BB4 (AcpiParseCpcResourcePriorityRegisterDescriptor.c)
 *     AcpiParseLpiObject @ 0x140032D50 (AcpiParseLpiObject.c)
 *     DecodeAcpiIdleState @ 0x14003E3A0 (DecodeAcpiIdleState.c)
 *     AcpiEval_CST @ 0x14003F2EC (AcpiEval_CST.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiTranslateAccessSize(_BYTE *a1)
{
  unsigned __int8 v2; // r9
  char v3; // dl
  char v4; // r10
  unsigned int i; // ecx
  char result; // al
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // dl

  if ( *a1 != 10 )
  {
    v2 = a1[3];
    v3 = a1[1];
    v4 = a1[2];
    for ( i = 1; i < 5; ++i )
    {
      result = i;
      if ( v2 == AcpiGenericAccessSizeTranslation[i] )
        return result;
    }
    v7 = 0;
    if ( v2 <= 4u )
      v7 = v2;
    if ( !v7 )
    {
      v8 = v4 + v3;
      if ( v8 > 8u )
      {
        if ( v8 > 0x10u )
          v7 = (v8 > 0x20u) + 3;
        else
          v7 = 2;
      }
      else
      {
        v7 = 1;
      }
    }
    result = AcpiGenericAccessSizeTranslation[v7];
    a1[3] = result;
  }
  return result;
}
