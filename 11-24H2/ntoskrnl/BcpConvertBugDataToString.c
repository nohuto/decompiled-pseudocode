/*
 * XREFs of BcpConvertBugDataToString @ 0x1406998DC
 * Callers:
 *     BcpDisplayErrorInformation @ 0x14069A26C (BcpDisplayErrorInformation.c)
 *     BcpDisplayErrorInformationModernized @ 0x14069A4D4 (BcpDisplayErrorInformationModernized.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpConvertBugDataToString(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int16 *v4; // r9
  unsigned int v5; // edx
  char i; // r10
  __int16 v7; // cx
  unsigned __int8 v8; // al

  v2 = *(unsigned __int16 *)(a2 + 2) >> 1;
  v4 = *(__int16 **)(a2 + 8);
  v5 = 0;
  for ( i = 60; v5 < v2; ++v4 )
  {
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v7 = 120;
      }
      else if ( v5 == v2 - 1 )
      {
        v7 = 0;
      }
      else
      {
        v8 = (a1 >> i) & 0xF;
        if ( v8 >= 0xAu )
          v7 = (unsigned __int8)(v8 - 10) + 65;
        else
          v7 = v8 + 48;
        i -= 4;
      }
    }
    else
    {
      v7 = 48;
    }
    *v4 = v7;
    ++v5;
  }
  return 0LL;
}
