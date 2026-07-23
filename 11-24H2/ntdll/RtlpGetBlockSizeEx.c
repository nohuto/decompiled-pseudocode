/*
 * XREFs of RtlpGetBlockSizeEx @ 0x1800E24D0
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x180004BD0 (RtlCreateEnvironmentEx.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E1EE0 (RtlCreateProcessParametersInternal.c)
 *     RtlpInitEnvironmentBlock @ 0x180119204 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetBlockSizeEx(char *a1, int a2)
{
  char *v3; // rdx
  __int64 v4; // rax
  char *v7; // rax
  __int64 v8; // rcx

  if ( a2 )
  {
    v3 = a1;
    do
    {
      v4 = -1LL;
      while ( *(_WORD *)&v3[2 * v4++ + 2] != 0 )
        ;
      v3 += 2 * v4 + 2;
    }
    while ( *(_WORD *)v3 );
    return 2 * ((v3 - a1 + 2) >> 1);
  }
  else
  {
    v7 = a1;
    do
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v7[v8] );
      v7 += v8 + 1;
    }
    while ( *v7 );
    return 2 * (v7 - a1 + 1);
  }
}
