/*
 * XREFs of WerpPathTail @ 0x1800ACA34
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x1800AC868 (WerpGlobalFlagsForProcess.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall WerpPathTail(unsigned __int64 a1)
{
  __int64 v2; // rcx
  _WORD *v3; // rdx
  _WORD *v4; // rcx
  _WORD *v5; // r8

  if ( !a1 )
    return 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  v3 = (_WORD *)(a1 + 2 * v2);
  do
  {
    v4 = v3;
    v5 = v3--;
  }
  while ( (unsigned __int64)v4 > a1 && *v3 != 58 && *v3 != 92 && *v3 != 47 );
  return v5;
}
