/*
 * XREFs of ApiSetSchemaExpander_GetNewSchemaSize @ 0x14066136C
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x14065FE98 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSchemaExpander_GetNewSchemaSize(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ebp
  int v3; // r14d
  unsigned int v4; // ebp
  int v5; // edi
  int v6; // r11d
  int v7; // r10d
  int v8; // r9d
  char v9; // al
  int v10; // r8d
  int v11; // edx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 232) + 3;
  v3 = *(_DWORD *)(v1 + 28);
  *(_DWORD *)(a1 + 244) = v3;
  v4 = (*(_DWORD *)(v1 + 40) + v2) & 0xFFFFFFFC;
  *(_DWORD *)(a1 + 240) = v4;
  v5 = *(_DWORD *)(a1 + 168) + *(unsigned __int16 *)(v1 + 48) * (*(unsigned __int8 *)(v1 + 52) + 8);
  *(_DWORD *)(a1 + 248) = v5;
  v6 = *(_DWORD *)(a1 + 180) + *(unsigned __int16 *)(v1 + 60) * (*(unsigned __int8 *)(v1 + 64) + 8);
  *(_DWORD *)(a1 + 252) = v6;
  v7 = *(_DWORD *)(a1 + 192) + *(unsigned __int16 *)(v1 + 72) * (*(unsigned __int8 *)(v1 + 76) + 8);
  *(_DWORD *)(a1 + 256) = v7;
  v8 = *(_DWORD *)(a1 + 216) + *(unsigned __int16 *)(v1 + 84) * (*(unsigned __int8 *)(v1 + 88) + 8);
  *(_DWORD *)(a1 + 260) = v8;
  v9 = *(_BYTE *)(a1 + 16);
  v10 = *(_DWORD *)(a1 + 204) + *(unsigned __int16 *)(v1 + 96) * (*(unsigned __int8 *)(v1 + 100) + 8);
  *(_DWORD *)(a1 + 264) = v10;
  v11 = *(_DWORD *)(a1 + 228) + *(_DWORD *)(v1 + 108);
  *(_DWORD *)(a1 + 268) = v11;
  return v3 + v4 + v5 + v6 + v7 + v8 + v10 + v11 + (v9 != 0 ? 152 : 124);
}
