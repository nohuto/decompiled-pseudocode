/*
 * XREFs of ?vStripSolidHorizontal24@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x14022A000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidHorizontal24(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // r9
  int v5; // r11d
  int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // r8
  int v9; // edx
  char *v10; // r14
  int v11; // ecx
  unsigned int v12; // esi
  __int64 v13; // r15
  int v14; // ecx

  v3 = (int *)((char *)a1 + 28);
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *(_DWORD *)a3;
  v8 = *((_QWORD *)a1 + 2);
  v9 = 4 * *((_DWORD *)a1 + 2);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v11 = v9;
  v12 = HIWORD(v7);
  v13 = v11;
  do
  {
    v14 = *v3;
    do
    {
      *(_WORD *)v8 = v6 ^ *(_WORD *)v8 & v5;
      *(_BYTE *)(v8 + 2) = BYTE2(v6) ^ *(_BYTE *)(v8 + 2) & v12;
      v8 += 3LL;
      --v14;
    }
    while ( v14 );
    v8 += v13;
    ++v3;
  }
  while ( v3 < (int *)v10 );
  *((_QWORD *)a1 + 2) = v8;
}
