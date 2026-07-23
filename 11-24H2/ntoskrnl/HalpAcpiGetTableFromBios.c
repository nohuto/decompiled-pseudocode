/*
 * XREFs of HalpAcpiGetTableFromBios @ 0x14045FC60
 * Callers:
 *     HalpAcpiGetTableWork @ 0x14045F9FC (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14045FB98 (HalpAcpiIsCachedTableCompromised.c)
 * Callees:
 *     HalpAcpiGetTableWork @ 0x14045F9FC (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x14045FE34 (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x14046014C (HalpAcpiGetRsdt.c)
 */

_DWORD *__fastcall HalpAcpiGetTableFromBios(__int64 a1, int a2, char *Str1, char *a4, _DWORD *a5, _QWORD *a6)
{
  _DWORD *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v12; // edi
  _DWORD *result; // rax
  _DWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned int v18; // r12d
  unsigned int *v19; // r14
  __int64 *v20; // r15
  unsigned __int64 TableWork; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+90h] [rbp+8h]
  __int64 v25; // [rsp+98h] [rbp+10h] BYREF
  char *v26; // [rsp+A0h] [rbp+18h]
  char *v27; // [rsp+A8h] [rbp+20h]

  v27 = a4;
  v26 = Str1;
  v24 = a1;
  LODWORD(v25) = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v12 = a1;
  if ( a2 == 1413763922 || a2 == 1413763928 )
    return (_DWORD *)v7;
  if ( a2 == 1413763908 )
  {
    TableWork = HalpAcpiGetTableWork(a1, 0x50434146u, 0LL, 0LL);
    if ( !TableWork )
      return (_DWORD *)v7;
    if ( *(_BYTE *)(TableWork + 8) < 3u || (v8 = *(_QWORD *)(TableWork + 140)) == 0 )
      v8 = *(unsigned int *)(TableWork + 40);
    v7 = HalpAcpiCheckAndMapTable(v12, v8, 36, 1413763908, Str1, a4, 1, (__int64)&v25);
LABEL_15:
    *a5 = v25;
    if ( v7 )
      *a6 = v8;
    return (_DWORD *)v7;
  }
  result = (_DWORD *)HalpAcpiGetRsdt(a1);
  v14 = result;
  if ( result )
  {
    if ( *result == 1413763922 )
    {
      v6 = result;
      v14 = 0LL;
      v22 = (unsigned int)result[1];
      v23 = (unsigned int)v22;
      if ( (unsigned int)v22 >= 0x24 )
        v23 = 36LL;
      v17 = (unsigned __int64)(v22 - v23) >> 2;
    }
    else
    {
      v15 = (unsigned int)result[1];
      v16 = (unsigned int)v15;
      if ( (unsigned int)v15 >= 0x24 )
        v16 = 36LL;
      v17 = (unsigned __int64)(v15 - v16) >> 3;
    }
    v18 = 0;
    if ( (_DWORD)v17 )
    {
      v19 = v6 + 9;
      v20 = (__int64 *)(v14 + 9);
      do
      {
        if ( v14 )
          v8 = *v20;
        else
          v8 = *v19;
        v7 = HalpAcpiCheckAndMapTable(v24, v8, 36, a2, v26, v27, 1, (__int64)&v25);
        if ( v7 )
          break;
        ++v18;
        ++v19;
        ++v20;
      }
      while ( v18 < (unsigned int)v17 );
    }
    goto LABEL_15;
  }
  return result;
}
