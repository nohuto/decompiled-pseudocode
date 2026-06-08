/*
 * XREFs of sub_14002B250 @ 0x14002B250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400066B4 @ 0x1400066B4 (sub_1400066B4.c)
 *     sub_1400074A0 @ 0x1400074A0 (sub_1400074A0.c)
 */

__int64 __fastcall sub_14002B250(_BYTE *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx

  v5 = -1073741637;
  if ( sub_1400066B4() && sub_1400074A0() && (*a1 == 1 || *a1 == 127) )
    return 0;
  else
    *a3 |= 0x20u;
  return v5;
}
