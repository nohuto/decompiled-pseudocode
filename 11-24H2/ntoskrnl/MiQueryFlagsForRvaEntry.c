/*
 * XREFs of MiQueryFlagsForRvaEntry @ 0x14093F100
 * Callers:
 *     RtlpCompressRvaList @ 0x14093EA90 (RtlpCompressRvaList.c)
 *     MiImageRvaRawEnumNext @ 0x14093EEB0 (MiImageRvaRawEnumNext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiQueryFlagsForRvaEntry(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        _DWORD *a8,
        bool *a9)
{
  unsigned __int8 v9; // r11
  unsigned int v10; // ebx
  char v11; // al

  v9 = 0;
  *a8 = 0;
  v10 = *a1;
  if ( *a1 <= a4 || v10 >= a5 )
    return 3221225595LL;
  v11 = 1;
  if ( a6 )
  {
    v11 = (a6 & 1) == 0;
    if ( (a6 & 2) != 0 )
      v11 |= 2u;
  }
  *a3 = v10;
  if ( a2 <= 4 )
  {
    *a9 = 0;
    goto LABEL_6;
  }
  v9 = *((_BYTE *)a1 + 4);
  *a9 = (unsigned __int8)(v11 & v9) != 0;
  if ( ((unsigned __int8)v11 & v9) == 0 )
LABEL_6:
    *a8 |= 1u;
  if ( (v9 & 2) != 0 )
    *a8 |= 4u;
  return 0LL;
}
