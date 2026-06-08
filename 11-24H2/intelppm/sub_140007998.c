/*
 * XREFs of sub_140007998 @ 0x140007998
 * Callers:
 *     sub_1400081D0 @ 0x1400081D0 (sub_1400081D0.c)
 * Callees:
 *     sub_14000348C @ 0x14000348C (sub_14000348C.c)
 */

_BOOL8 __fastcall sub_140007998(__int64 a1)
{
  __int64 *v1; // rdi
  BOOL v2; // ebx
  __int64 v3; // rax
  char v4; // al

  v1 = *(__int64 **)(a1 + 32);
  v2 = 1;
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = *v1;
      if ( !*v1 )
        break;
      if ( *(_BYTE *)(v3 + 30) || *(_BYTE *)(v3 + 29) )
      {
        if ( !*(_BYTE *)(v3 + 31) )
          return 0;
        v2 = 1;
        ++v1;
      }
      else
      {
        v4 = sub_14000348C(*(unsigned int **)v3, *v1);
        v2 = (v4 & 1) != 0;
        ++v1;
        if ( (v4 & 1) == 0 )
          return v2;
      }
    }
  }
  return v2;
}
