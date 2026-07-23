/*
 * XREFs of RtlComputeLfnChecksum @ 0x1409074A8
 * Callers:
 *     RtlGenerate8dot3Name @ 0x140906940 (RtlGenerate8dot3Name.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlComputeLfnChecksum(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r8
  _WORD *v2; // rdx
  _WORD *v3; // r9
  int v4; // eax
  int v5; // r8d

  v1 = 0;
  v2 = (_WORD *)*((_QWORD *)a1 + 1);
  v3 = &v2[(unsigned __int64)*a1 >> 1];
  while ( 1 )
  {
    v4 = v1;
    if ( v2 >= v3 )
      break;
    v1 = *v2++ + 37 * v1;
  }
  v5 = -314159269 * v1;
  if ( 314159269 * v4 > 0 )
    v5 = 314159269 * v4;
  return (unsigned __int16)(v5 % 1000000007);
}
