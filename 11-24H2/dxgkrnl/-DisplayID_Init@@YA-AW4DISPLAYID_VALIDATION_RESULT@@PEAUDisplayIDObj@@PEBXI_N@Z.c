/*
 * XREFs of ?DisplayID_Init@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEAUDisplayIDObj@@PEBXI_N@Z @ 0x140097454
 * Callers:
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x140097580 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 * Callees:
 *     ?IsValidSection@DisplayID_Section_Parser@@QEBA_NXZ @ 0x140097904 (-IsValidSection@DisplayID_Section_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_Init(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  int v6; // r14d
  int v7; // ebp
  char v8; // si
  unsigned __int64 v9; // r15
  int v10; // r12d
  __int64 v11; // rcx
  int v12; // r13d
  __int64 v13; // r11
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  if ( !a1 )
    return 7LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  if ( !a2 || !a3 )
    return 6LL;
  v5 = a2 + a3;
  v6 = 0;
  if ( a2 + 3 < v5 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v14[0] = v3;
      v9 = v3;
      v14[1] = v5 - v3;
      v10 = v7;
      v11 = (unsigned __int8)(*(_BYTE *)(v3 + 1) + 5);
      v3 += v11;
      v12 = v11;
      if ( v3 > v5 )
        break;
      if ( !DisplayID_Section_Parser::IsValidSection((DisplayID_Section_Parser *)v14) )
        return 8LL;
      if ( v7 )
      {
        if ( (*(_BYTE *)(v9 + 2) & 0xF) != 0 && (*(_BYTE *)(v9 + 2) & 0xF) != v8 )
          return 9LL;
      }
      else
      {
        v6 = *(unsigned __int8 *)(v9 + 3);
        *(_DWORD *)(v13 + 12) = v12;
        v8 = *(_BYTE *)(v9 + 2) & 0xF;
        *(_BYTE *)(v13 + 24) = v8;
      }
      *(_DWORD *)(v13 + 20) = ++v7;
      if ( v3 + 3 >= v5 )
      {
        if ( v10 != v6 )
          return 10LL;
        *(_BYTE *)(v13 + 16) = 1;
        return 0LL;
      }
    }
  }
  return 10LL;
}
