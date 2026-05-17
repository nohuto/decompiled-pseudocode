/*
 * XREFs of LdrpHashAsciizString @ 0x1800F0854
 * Callers:
 *     LdrpCheckRedirection @ 0x180072128 (LdrpCheckRedirection.c)
 *     LdrpAddRedirectedFunction @ 0x180160C30 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpHashAsciizString(char *a1)
{
  char v1; // al
  unsigned int v2; // edx

  v1 = *a1;
  v2 = 0;
  if ( !*a1 )
    return 0x80000000;
  do
  {
    ++a1;
    v2 = v1 + 65599 * v2;
    v1 = *a1;
  }
  while ( *a1 );
  if ( !v2 )
    return 0x80000000;
  return v2;
}
