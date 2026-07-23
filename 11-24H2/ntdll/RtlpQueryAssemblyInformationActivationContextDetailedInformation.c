/*
 * XREFs of RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x18010D36C
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x1800475D0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x180074330 (RtlpLocateActivationContextSection.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryAssemblyInformationActivationContextDetailedInformation(
        _DWORD *a1,
        unsigned int a2,
        char *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // ecx
  char *v12; // r8
  unsigned int v13; // ecx
  char *v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rbx
  char *v17; // rdi
  char *v18; // rdi
  char *v19; // rdi
  char *v20; // rdi
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v22 = 0LL;
  v23 = 0;
  if ( a5 )
    *a5 = 0LL;
  v9 = (unsigned int)a1[6];
  v10 = *(unsigned int *)((char *)a1 + v9 + 12);
  v11 = *(_DWORD *)((char *)a1 + v9 + 8);
  v12 = (char *)a1 + v10;
  if ( a2 >= v11 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      "RtlpQueryAssemblyInformationActivationContextDetailedInformation",
      a2,
      v11);
    return (unsigned int)-1073741811;
  }
  _mm_lfence();
  v14 = (char *)a1 + *(unsigned int *)&v12[24 * a2 + 16];
  v15 = RtlpLocateActivationContextSection(a1, 0LL, 1u, &v22, &v23);
  v13 = v15;
  if ( v15 == -1072365567 )
  {
    v16 = 104LL;
    if ( a4 < 0x68 )
      return (unsigned int)-1073741789;
    memset_thunk_772440563353939046(a3, 0, 0x68uLL);
  }
  else
  {
    if ( v15 >> 31 == -1 )
      return v13;
    v16 = 104LL;
    if ( *((_DWORD *)v14 + 2) )
      v16 = *((unsigned int *)v14 + 2) + 106LL;
    if ( *((_DWORD *)v14 + 5) )
      v16 += *((unsigned int *)v14 + 5) + 2LL;
    if ( *((_DWORD *)v14 + 10) )
      v16 += *((unsigned int *)v14 + 10) + 2LL;
    if ( *((_DWORD *)v14 + 20) )
      v16 += *((unsigned int *)v14 + 20) + 2LL;
    if ( v16 > a4 )
    {
      if ( v5 )
        *v5 = v16;
      return (unsigned int)-1073741789;
    }
    v17 = a3 + 104;
    *(_DWORD *)a3 = *((_DWORD *)v14 + 1);
    *((_DWORD *)a3 + 1) = *((_DWORD *)v14 + 2);
    *((_DWORD *)a3 + 2) = *((_DWORD *)v14 + 4);
    *((_DWORD *)a3 + 3) = *((_DWORD *)v14 + 5);
    *((_QWORD *)a3 + 2) = *(_QWORD *)(v14 + 28);
    *((_DWORD *)a3 + 6) = *((_DWORD *)v14 + 9);
    *((_DWORD *)a3 + 7) = *((_DWORD *)v14 + 10);
    *((_QWORD *)a3 + 4) = *((_QWORD *)v14 + 6);
    *((_DWORD *)a3 + 10) = *((_DWORD *)v14 + 14);
    *((_DWORD *)a3 + 11) = *((_DWORD *)v14 + 16);
    *((_DWORD *)a3 + 12) = *((_DWORD *)v14 + 17);
    *((_DWORD *)a3 + 13) = *((_DWORD *)v14 + 18);
    *((_DWORD *)a3 + 14) = *((_DWORD *)v14 + 19);
    *((_DWORD *)a3 + 15) = *((_DWORD *)v14 + 20);
    *((_QWORD *)a3 + 8) = 0LL;
    *((_QWORD *)a3 + 9) = 0LL;
    *((_QWORD *)a3 + 10) = 0LL;
    *((_QWORD *)a3 + 11) = 0LL;
    *((_DWORD *)a3 + 24) = *((_DWORD *)v14 + 22);
    if ( *((_DWORD *)v14 + 2) )
    {
      memmove(a3 + 104, (const void *)(v22 + *((unsigned int *)v14 + 3)), *((unsigned int *)v14 + 2));
      *((_QWORD *)a3 + 8) = v17;
      v18 = &v17[*((unsigned int *)v14 + 2)];
      *(_WORD *)v18 = 0;
      v17 = v18 + 2;
    }
    if ( *((_DWORD *)v14 + 5) )
    {
      memmove(v17, (const void *)(v22 + *((unsigned int *)v14 + 6)), *((unsigned int *)v14 + 5));
      *((_QWORD *)a3 + 9) = v17;
      v19 = &v17[*((unsigned int *)v14 + 5)];
      *(_WORD *)v19 = 0;
      v17 = v19 + 2;
    }
    if ( *((_DWORD *)v14 + 10) )
    {
      memmove(v17, (const void *)(v22 + *((unsigned int *)v14 + 11)), *((unsigned int *)v14 + 10));
      *((_QWORD *)a3 + 10) = v17;
      v20 = &v17[*((unsigned int *)v14 + 10)];
      *(_WORD *)v20 = 0;
      v17 = v20 + 2;
    }
    if ( *((_DWORD *)v14 + 20) )
    {
      memmove(v17, (const void *)(v22 + *((unsigned int *)v14 + 21)), *((unsigned int *)v14 + 20));
      *((_QWORD *)a3 + 11) = v17;
      *(_WORD *)&v17[*((unsigned int *)v14 + 20)] = 0;
    }
  }
  if ( v5 )
    *v5 = v16;
  return 0;
}
