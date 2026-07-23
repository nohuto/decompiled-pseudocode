/*
 * XREFs of AuthzBasepUnicodeStringFromOperandValue @ 0x1403255E4
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140325368 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14044CACC (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140324D30 (AuthzBasepMemAlloc.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall AuthzBasepUnicodeStringFromOperandValue(__int64 a1, char a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned int v4; // edi
  const void **v5; // r14
  unsigned __int16 v10; // r8
  __int64 v11; // rdx
  const void *v12; // rax
  void *v13; // rax
  size_t v14; // r8
  const void *v15; // rdx
  unsigned int v17; // ebp
  __int64 v18; // rbx
  WCHAR v19; // ax
  unsigned __int16 *v20; // rdx

  v4 = 0;
  v5 = (const void **)(a1 + 32);
  *a4 = 0;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    v10 = *(_WORD *)(a1 + 24);
    a3[1] = v10;
    v11 = *(unsigned __int16 *)(a1 + 24);
    *a3 = v11;
    v12 = *v5;
  }
  else
  {
    v10 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 2LL);
    a3[1] = v10;
    v11 = **(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 48LL);
    *a3 = v11;
    v12 = *(const void **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 8LL);
  }
  *((_QWORD *)a3 + 1) = v12;
  if ( !(_WORD)v11 || !v12 )
    return (unsigned int)-1073741406;
  if ( (*(_DWORD *)(a1 + 12) != 1 || (*(_BYTE *)v5 & 1) == 0) && !a2 )
    return v4;
  v13 = (void *)AuthzBasepMemAlloc(v10, v11, 0x61476553u);
  *((_QWORD *)a3 + 1) = v13;
  if ( v13 )
  {
    if ( *(_DWORD *)(a1 + 12) == 1 )
    {
      v14 = *(unsigned int *)(a1 + 24);
      v15 = *v5;
    }
    else
    {
      v20 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 48LL);
      v14 = *v20;
      v15 = (const void *)*((_QWORD *)v20 + 1);
    }
    memmove(v13, v15, v14);
    *a4 = 1;
    if ( a2 )
    {
      v17 = 0;
      if ( (*a3 & 0xFFFE) != 0 )
      {
        do
        {
          v18 = v17;
          v19 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * v17++));
          *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v18) = v19;
        }
        while ( v17 < *a3 >> 1 );
      }
    }
    return v4;
  }
  return 3221225495LL;
}
