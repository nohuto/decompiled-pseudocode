/*
 * XREFs of WmipAlign @ 0x140467F3C
 * Callers:
 *     WmipDereferenceEvent @ 0x1409C9CE0 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409CB50C (WmipIncludeStaticNames.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipAlign(int a1, int *a2)
{
  int v2; // ecx
  char result; // al

  v2 = a1 - 1;
  if ( *a2 + v2 < (unsigned int)*a2 )
    return 0;
  result = 1;
  *a2 = (*a2 + v2) & ~v2;
  return result;
}
