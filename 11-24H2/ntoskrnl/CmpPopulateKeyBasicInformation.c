/*
 * XREFs of CmpPopulateKeyBasicInformation @ 0x140989BD0
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140457A68 (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall CmpPopulateKeyBasicInformation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned __int16 v6; // r10
  size_t v8; // r8
  unsigned int v9; // ebp
  unsigned int v10; // r9d
  unsigned int v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  unsigned __int8 *v14; // rdx
  _WORD *v15; // rax

  v6 = 2 * *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
    v6 = *(_WORD *)(a2 + 72);
  v8 = v6;
  v9 = v6 + 16;
  *a5 = v9;
  if ( a4 < 0x10 )
    return 3221225507LL;
  v10 = a4 - 16;
  *(_QWORD *)a3 = *(_QWORD *)a1;
  v11 = 0;
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a3 + 12) = v6;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    v12 = 0;
    v13 = v10 >> 1;
    if ( v13 >= *(unsigned __int16 *)(a2 + 72) )
      v13 = *(unsigned __int16 *)(a2 + 72);
    if ( v13 )
    {
      v14 = (unsigned __int8 *)(a2 + 76);
      v15 = (_WORD *)(a3 + 16);
      do
      {
        ++v12;
        *v15++ = *v14++;
      }
      while ( v12 < v13 );
    }
  }
  else
  {
    if ( v10 <= v6 )
      v8 = v10;
    memmove((void *)(a3 + 16), (const void *)(a2 + 76), v8);
  }
  if ( a4 < v9 )
    return (unsigned int)-2147483643;
  return v11;
}
