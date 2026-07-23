/*
 * XREFs of IntelMicrocodeChecksumValidate @ 0x140663690
 * Callers:
 *     GetMicrocodePatchData @ 0x140662BB8 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x140663208 (MicrocodeUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntelMicrocodeChecksumValidate(_DWORD *a1, unsigned int a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // rdx

  v2 = 0;
  if ( a2 < 0x31 )
    return 3221225485LL;
  v3 = a1[7];
  if ( v3 )
  {
    v4 = (v3 >> 2) + 12;
    if ( !v4 )
      return 0LL;
  }
  else
  {
    v4 = 512;
  }
  v5 = v4;
  do
  {
    v2 += *a1++;
    --v5;
  }
  while ( v5 );
  return v2 != 0 ? 0xC0000001 : 0;
}
