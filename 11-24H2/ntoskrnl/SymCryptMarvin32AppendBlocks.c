/*
 * XREFs of SymCryptMarvin32AppendBlocks @ 0x14051B160
 * Callers:
 *     SymCryptMarvin32Append @ 0x14051B09C (SymCryptMarvin32Append.c)
 *     SymCryptMarvin32Result @ 0x14051B26C (SymCryptMarvin32Result.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32AppendBlocks(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int *v4; // r11
  unsigned int v5; // r9d
  __int64 v6; // r10
  _DWORD *v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  int v10; // r9d
  int v11; // eax
  int v12; // r9d
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  int v17; // eax
  int v18; // r9d
  int v19; // eax
  int v20; // r9d
  int v21; // eax
  int v22; // r9d
  int v23; // eax
  int v24; // r9d

  result = *a1;
  v4 = a1 + 1;
  v5 = a1[1];
  v6 = a3 & 0xC;
  v7 = (_DWORD *)(v6 + a2);
  v8 = a3 - v6;
  switch ( v6 )
  {
    case 0LL:
      goto LABEL_6;
    case 4LL:
      goto LABEL_10;
    case 8LL:
      goto LABEL_9;
    case 12LL:
      while ( 1 )
      {
        v13 = *(v7 - 3) + result;
        v14 = v13 ^ v5;
        v15 = v14 + __ROL4__(v13, 20);
        v16 = v15 ^ __ROL4__(v14, 9);
        LODWORD(result) = v16 + __ROL4__(v15, 27);
        v5 = __ROL4__(v16, 19);
LABEL_9:
        v17 = *(v7 - 2) + result;
        v4 = a1 + 1;
        v18 = v17 ^ v5;
        v19 = v18 + __ROL4__(v17, 20);
        v20 = v19 ^ __ROL4__(v18, 9);
        LODWORD(result) = v20 + __ROL4__(v19, 27);
        v5 = __ROL4__(v20, 19);
LABEL_10:
        v21 = *(v7 - 1) + result;
        v22 = v21 ^ v5;
        v23 = v22 + __ROL4__(v21, 20);
        v24 = v23 ^ __ROL4__(v22, 9);
        result = (unsigned int)(v24 + __ROL4__(v23, 27));
        v5 = __ROL4__(v24, 19);
LABEL_6:
        if ( !v8 )
          break;
        v9 = *v7 + result;
        v7 += 4;
        v10 = v9 ^ v5;
        v8 -= 16LL;
        v11 = v10 + __ROL4__(v9, 20);
        v12 = v11 ^ __ROL4__(v10, 9);
        LODWORD(result) = v12 + __ROL4__(v11, 27);
        v5 = __ROL4__(v12, 19);
      }
      break;
  }
  *a1 = result;
  *v4 = v5;
  return result;
}
