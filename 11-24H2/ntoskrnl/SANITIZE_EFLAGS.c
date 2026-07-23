/*
 * XREFs of SANITIZE_EFLAGS @ 0x140436250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SANITIZE_EFLAGS(int a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v2 = a1 & 0x250FD5;
  v3 = a1 & 0x210DD5 | 0x200;
  if ( !a2 )
    return v2;
  return v3;
}
