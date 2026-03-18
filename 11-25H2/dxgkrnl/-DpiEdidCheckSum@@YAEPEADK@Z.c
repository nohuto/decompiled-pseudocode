/*
 * XREFs of ?DpiEdidCheckSum@@YAEPEADK@Z @ 0x1400520E0
 * Callers:
 *     DpiIsValidEdid @ 0x140055B00 (DpiIsValidEdid.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiEdidCheckSum(char *a1, unsigned int a2)
{
  char v2; // al
  __int64 v3; // r8

  v2 = 0;
  if ( !a2 )
    return 1;
  v3 = a2;
  do
  {
    v2 += *a1++;
    --v3;
  }
  while ( v3 );
  return v2 == 0;
}
