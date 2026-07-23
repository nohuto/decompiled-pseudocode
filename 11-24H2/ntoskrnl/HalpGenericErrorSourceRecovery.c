/*
 * XREFs of HalpGenericErrorSourceRecovery @ 0x140552B9C
 * Callers:
 *     HalpRequestGenericErrorRecovery @ 0x140553110 (HalpRequestGenericErrorRecovery.c)
 * Callees:
 *     HalpMemoryErrorDeferredRecovery @ 0x140552E18 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x140553024 (HalpPmemErrorDeferredRecovery.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 */

__int64 __fastcall HalpGenericErrorSourceRecovery(__int64 a1, _DWORD *a2)
{
  unsigned int *v2; // rbp
  _DWORD *v4; // rdi
  int v6; // ebx
  unsigned int i; // r14d
  __int64 v8; // rcx
  __int64 *v9; // r8
  unsigned __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rax
  char v13; // cl
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  _DWORD *v18; // rdx
  _DWORD *v19; // rcx

  v2 = (unsigned int *)(a1 + 128);
  v4 = (_DWORD *)(a1 + 144);
  v6 = -1073741637;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 10); ++i )
  {
    if ( (unsigned int)(v4[8] - 2) <= 1 )
      continue;
    if ( RtlCompareMemory(v4, &MEMORY_ERROR_SECTION_GUID, 0x10uLL) == 16 )
    {
      v8 = *v2;
      v9 = 0LL;
      v6 = -1073741637;
      v10 = v8 + (unsigned int)*(v4 - 3);
      v11 = (__int64 *)(a1 + v8);
      if ( *(unsigned int *)(a1 + 20) >= v10 )
        v9 = v11;
      if ( !v9 )
        goto LABEL_23;
      v12 = *v9;
      if ( (*v9 & 2) == 0 )
        goto LABEL_23;
      if ( (v12 & 0x4000) == 0 )
        goto LABEL_23;
      v13 = *((_BYTE *)v9 + 9);
      if ( v13 != 4 && v13 != 26 )
        goto LABEL_23;
      v14 = v9[2];
      if ( (v12 & 4) != 0 )
        v14 &= v9[3];
      v15 = HalpMemoryErrorDeferredRecovery(v14, 0, 0, 0, 61184, 0, 1, 0);
LABEL_21:
      v6 = v15;
      goto LABEL_23;
    }
    if ( RtlCompareMemory(v4, PMEM_ERROR_SECTION_GUID, 0x10uLL) == 16 )
    {
      v16 = *v2;
      v17 = v16 + (unsigned int)*(v4 - 3);
      v18 = (_DWORD *)(v16 + a1);
      v19 = 0LL;
      if ( *(unsigned int *)(a1 + 20) >= v17 )
        v19 = v18;
      if ( !v19 || !v19[21] )
      {
        v6 = -1073741637;
        goto LABEL_23;
      }
      v15 = HalpPmemErrorDeferredRecovery(v19);
      goto LABEL_21;
    }
LABEL_23:
    if ( v6 >= 0 )
    {
      *a2 = 2;
      return (unsigned int)v6;
    }
    v2 += 18;
    v4 += 18;
  }
  return (unsigned int)v6;
}
