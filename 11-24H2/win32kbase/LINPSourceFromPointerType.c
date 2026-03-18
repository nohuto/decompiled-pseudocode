/*
 * XREFs of LINPSourceFromPointerType @ 0x1400D9874
 * Callers:
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1400D97B0 (rimDoUpdateInputGlobalsWorkItem.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140188E00 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LINPSourceFromPointerType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return 11LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 13LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3LL;
  if ( v3 == 1 )
    return 17LL;
  return 0LL;
}
