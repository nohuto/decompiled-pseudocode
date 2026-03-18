/*
 * XREFs of ?vStripSolidHorizontal@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x140172A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidHorizontal(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rbx
  __int64 v5; // r10
  int v6; // edi
  int *v8; // rdx
  int v9; // esi
  char *v10; // r12
  int v11; // r9d
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // r13
  int v15; // r9d
  int v16; // r14d
  unsigned int v17; // r9d
  int v18; // ebp
  int v19; // ecx
  __int64 v20; // r8
  int v21; // eax

  v3 = (char *)a1 + 28;
  v5 = *((int *)a1 + 6);
  v6 = *(_DWORD *)a3;
  v8 = (int *)*((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a3 + 1);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = 4 * *((_DWORD *)a1 + 2);
  v12 = -4 * *((_DWORD *)a1 + 2);
  v13 = *(_DWORD *)(*(_QWORD *)a2 + 4 * v5);
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v12 = v11;
  v14 = v12;
  do
  {
    v15 = *(_DWORD *)v3 + v5;
    LODWORD(v5) = *((_DWORD *)a2 + 7) & v15;
    v16 = *v8;
    v17 = v15 >> *((_DWORD *)a2 + 6);
    v18 = *(_DWORD *)(*(_QWORD *)a2 + 4LL * (int)v5);
    v19 = ~v18;
    if ( !v17 )
    {
      v21 = v9 & v19 & v13 ^ v16 & (v6 | ~(v19 & v13));
LABEL_12:
      *v8 = v21;
      goto LABEL_9;
    }
    *v8++ = v9 & v13 ^ v16 & (v6 | ~v13);
    if ( v17 > 1 )
    {
      v20 = v17 - 1;
      do
      {
        *v8 = v9 ^ v6 & *v8;
        ++v8;
        --v20;
      }
      while ( v20 );
    }
    if ( v18 != -1 )
    {
      v21 = v9 & v19 ^ *v8 & (v6 | v18);
      goto LABEL_12;
    }
LABEL_9:
    v8 = (int *)((char *)v8 + v14);
    v3 += 4;
    v13 = v18;
  }
  while ( v3 < v10 );
  *((_DWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 2) = v8;
}
