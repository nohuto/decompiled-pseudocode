/*
 * XREFs of sub_140009FE0 @ 0x140009FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001A70 @ 0x140001A70 (sub_140001A70.c)
 *     sub_140002350 @ 0x140002350 (sub_140002350.c)
 */

__int64 sub_140009FE0()
{
  unsigned int v0; // ebx
  unsigned __int8 v1; // r10
  unsigned __int8 v2; // al

  v0 = 0;
  v1 = sub_140002350((unsigned __int8 *)&dword_140019AC4);
  v2 = 0;
  if ( qword_140019AD4 )
    v2 = sub_140002350((unsigned __int8 *)&dword_140019AD0);
  if ( ((v1 | v2) & 0x10) != 0 )
  {
    sub_140001A70(&dword_140019AC4, 16LL);
    if ( qword_140019AD4 )
      sub_140001A70(&dword_140019AD0, 16LL);
    return (unsigned int)-1073741823;
  }
  return v0;
}
