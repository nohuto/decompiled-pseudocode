/*
 * XREFs of ?vStripStyledHorizontal@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1401768B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledHorizontal(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  int v5; // ebx
  int *v6; // r11
  int v7; // r13d
  int v8; // edi
  int v9; // r10d
  int v10; // r9d
  int v11; // ecx
  int v12; // r9d
  int v13; // ebx
  __int64 v14; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  int v17; // [rsp+38h] [rbp+8h]
  char *v18; // [rsp+40h] [rbp+10h]

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a1 + 6);
  v6 = (int *)*((_QWORD *)a1 + 2);
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 20);
  v9 = *((_DWORD *)a3 + 5);
  v10 = 4 * *((_DWORD *)a1 + 2);
  v18 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = -4 * *((_DWORD *)a1 + 2);
  v17 = *((_DWORD *)a3 + 1);
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v11 = v10;
  do
  {
    v12 = *(_DWORD *)v3;
    do
    {
      if ( !v8 )
        *v6 = v17 & *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v5) ^ *v6 & (v7 | ~*(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * v5));
      v13 = v5 + 1;
      v9 -= *((_DWORD *)a3 + 2);
      v14 = v13;
      v5 = *((_DWORD *)a2 + 7) & v13;
      v6 += v14 >> *((_DWORD *)a2 + 6);
      if ( v9 <= 0 )
      {
        v15 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v15;
        if ( (unsigned __int64)v15 > *((_QWORD *)a3 + 6) )
        {
          v15 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v15;
        }
        v9 += *v15;
        v8 = v8 == 0;
      }
      --v12;
    }
    while ( v12 );
    v9 -= *((_DWORD *)a3 + 3);
    v6 = (int *)((char *)v6 + v11);
    if ( v9 <= 0 )
    {
      v16 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v16;
      if ( (unsigned __int64)v16 > *((_QWORD *)a3 + 6) )
      {
        v16 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v16;
      }
      v9 += *v16;
      v8 = v8 == 0;
    }
    v3 += 4;
  }
  while ( v3 != v18 );
  *((_DWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 2) = v6;
  *((_DWORD *)a3 + 20) = v8;
  *((_DWORD *)a3 + 5) = v9;
}
