/*
 * XREFs of ?vStripSolidVertical24@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1401E2E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripSolidVertical24(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // ebx
  int *v4; // r10
  int v5; // r8d
  int v6; // edx
  int v8; // r9d
  bool v9; // zf
  char *v10; // r14
  _WORD *v11; // rcx
  int v12; // edx
  _BYTE *v13; // rcx

  v3 = *((_DWORD *)a3 + 1);
  v4 = (int *)((char *)a1 + 28);
  v5 = *(_DWORD *)a3;
  v6 = 4 * *((_DWORD *)a1 + 2);
  v8 = -4 * *((_DWORD *)a1 + 2);
  v9 = (*((_BYTE *)a1 + 4) & 8) == 0;
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = (_WORD *)*((_QWORD *)a1 + 2);
  if ( v9 )
    v8 = v6;
  do
  {
    v12 = *v4;
    do
    {
      *v11 = v3 ^ v5 & *v11;
      v13 = v11 + 1;
      *v13 = BYTE2(v3) ^ BYTE2(v5) & *v13;
      v11 = &v13[v8 - 2];
      --v12;
    }
    while ( v12 );
    v11 = (_WORD *)((char *)v11 + 3);
    ++v4;
  }
  while ( v4 < (int *)v10 );
  *((_QWORD *)a1 + 2) = v11;
}
