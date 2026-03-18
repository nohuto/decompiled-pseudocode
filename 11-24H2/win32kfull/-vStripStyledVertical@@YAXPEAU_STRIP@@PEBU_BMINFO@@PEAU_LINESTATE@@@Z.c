/*
 * XREFs of ?vStripStyledVertical@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x140181D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledVertical(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  int v5; // ebx
  int *v6; // r11
  int v8; // r13d
  int v9; // edi
  int v10; // r10d
  char *v11; // r15
  int v12; // r9d
  int v13; // ecx
  bool v14; // zf
  int v15; // esi
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // ecx
  int v19; // r9d
  int v20; // edx
  int v21; // ebx
  __int64 v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rax

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a1 + 6);
  v6 = (int *)*((_QWORD *)a1 + 2);
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 20);
  v10 = *((_DWORD *)a3 + 5);
  v11 = (char *)a1 + 4 * *(int *)a1 + 28;
  v12 = 4 * *((_DWORD *)a1 + 2);
  v13 = -4 * *((_DWORD *)a1 + 2);
  v14 = (*((_BYTE *)a1 + 4) & 8) == 0;
  v15 = *(_DWORD *)a3;
  if ( v14 )
    v13 = v12;
  v16 = v13;
  do
  {
    v17 = *((_QWORD *)a2 + 1);
    v18 = *(_DWORD *)v3;
    v19 = v8 & *(_DWORD *)(v17 + 4LL * v5);
    v20 = v15 | ~*(_DWORD *)(v17 + 4LL * v5);
    do
    {
      if ( !v9 )
        *v6 = v19 ^ *v6 & v20;
      v10 -= *((_DWORD *)a3 + 2);
      v6 = (int *)((char *)v6 + v16);
      if ( v10 <= 0 )
      {
        v23 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v23;
        if ( (unsigned __int64)v23 > *((_QWORD *)a3 + 6) )
        {
          v23 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v23;
        }
        v10 += *v23;
        v9 = v9 == 0;
      }
      --v18;
    }
    while ( v18 );
    v21 = v5 + 1;
    v10 -= *((_DWORD *)a3 + 3);
    v22 = v21;
    v5 = *((_DWORD *)a2 + 7) & v21;
    v6 += v22 >> *((_DWORD *)a2 + 6);
    if ( v10 <= 0 )
    {
      v24 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v24;
      if ( (unsigned __int64)v24 > *((_QWORD *)a3 + 6) )
      {
        v24 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v24;
      }
      v10 += *v24;
      v9 = v9 == 0;
    }
    v3 += 4;
  }
  while ( v3 < v11 );
  *((_DWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 2) = v6;
  *((_DWORD *)a3 + 20) = v9;
  *((_DWORD *)a3 + 5) = v10;
}
