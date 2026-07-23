/*
 * XREFs of EtwpEventNameFilterSearch @ 0x1403FD9B0
 * Callers:
 *     EtwpApplyEventNameFilter @ 0x1404ED680 (EtwpApplyEventNameFilter.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpEventNameFilterSearch(const char *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 *v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // r15
  unsigned __int64 v12; // r10
  __int64 v13; // r9

  v3 = a2;
  v5 = (unsigned __int8 *)a1;
  v6 = 314159LL;
  if ( a2 >= 8uLL )
  {
    v7 = (unsigned __int64)a2 >> 3;
    v3 = a2 - 8 * v7;
    do
    {
      v8 = v5[6] + 37 * (v5[5] + 37 * (v5[4] + 37 * (v5[3] + 37 * (v5[2] + 37 * (v5[1] + 37 * (*v5 + 37 * v6))))));
      v9 = v5[7];
      v5 += 8;
      v6 = v9 + 37 * v8;
      --v7;
    }
    while ( v7 );
  }
  if ( v3 != 2 )
  {
    switch ( v3 )
    {
      case 1LL:
        goto LABEL_6;
      case 3LL:
        goto LABEL_22;
      case 4LL:
        goto LABEL_21;
      case 5LL:
        goto LABEL_20;
      case 6LL:
        goto LABEL_19;
      case 7LL:
        v6 = *v5++ + 37 * v6;
LABEL_19:
        v6 = *v5++ + 37 * v6;
LABEL_20:
        v6 = *v5++ + 37 * v6;
LABEL_21:
        v6 = *v5++ + 37 * v6;
LABEL_22:
        v6 = *v5++ + 37 * v6;
        break;
      default:
        goto LABEL_7;
    }
  }
  v6 = *v5++ + 37 * v6;
LABEL_6:
  v6 = *v5 + 37 * v6;
LABEL_7:
  v10 = *(_DWORD *)(a3 + 28) >> 5;
  v11 = -1LL << (*(_BYTE *)(a3 + 28) & 0x1F);
  v12 = v11 & v6;
  if ( !v10 )
    goto LABEL_23;
  v13 = *(_QWORD *)(a3 + 32)
      + 8
      * ((HIBYTE(v12)
        + 37
        * (BYTE6(v12)
         + 37
         * (BYTE5(v12)
          + 37
          * (BYTE4(v12)
           + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (unsigned int)(v10 - 1));
  do
  {
    v13 = *(_QWORD *)v13;
    if ( (v13 & 1) != 0 )
      goto LABEL_23;
  }
  while ( v12 != (v11 & *(_QWORD *)(v13 + 8)) );
LABEL_11:
  while ( v13 )
  {
    if ( !strcmp(a1, *(const char **)(v13 + 16)) )
      return 1;
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v13 + 8)) )
        goto LABEL_11;
    }
LABEL_23:
    v13 = 0LL;
  }
  return 0;
}
