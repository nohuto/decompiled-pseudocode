/*
 * XREFs of ACPIGetConvertToPnpIDWide @ 0x14003F6EC
 * Callers:
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003EE60 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetWorkerForString @ 0x14003F3E0 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToPnpID @ 0x14003F684 (ACPIGetConvertToPnpID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003F928 (ACPIAnsiStringToWideHelper.c)
 *     ACPIAmliDoubleToNameWide @ 0x14003F954 (ACPIAmliDoubleToNameWide.c)
 */

__int64 __fastcall ACPIGetConvertToPnpIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  int v8; // eax
  const char *v9; // rsi
  __int64 v11; // rbx
  unsigned int v12; // ebx
  int v13; // ebp
  __int64 v14; // r14
  char *v15; // rdi
  __int64 v16; // rbx
  const char *v17; // r9
  __int64 Pool2; // rax
  __int64 v19; // r8

  if ( (a4 & 0x4000000) != 0 || !_bittest64((const signed __int64 *)(a1 + 8), 0x2Fu) )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v13 = 18;
      Pool2 = ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 18LL, 1399874369LL);
      v15 = (char *)Pool2;
      if ( Pool2 )
      {
        LOBYTE(v19) = 1;
        ACPIAmliDoubleToNameWide(Pool2, *(unsigned int *)(a3 + 16), v19);
        goto LABEL_21;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
        return 3222536207LL;
      v8 = *(_DWORD *)(a3 + 24);
      v9 = *(const char **)(a3 + 32);
      if ( !v8 )
        return 3221225485LL;
      if ( *v9 == 42 )
      {
        ++v9;
        if ( v8 == 1 )
          return 3221225485LL;
      }
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
      v12 = v11 + 2;
      v13 = 2 * v12;
      v14 = 2 * v12;
      v15 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      v14,
                      1399874369LL);
      if ( v15 )
      {
        v17 = v9;
        goto LABEL_20;
      }
    }
    return 3221225626LL;
  }
  v16 = -1LL;
  do
    ++v16;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 608) + v16) );
  v12 = v16 - 3;
  v13 = 2 * v12;
  v14 = 2 * v12;
  v15 = (char *)ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v14, 1399874369LL);
  if ( !v15 )
    return 3221225626LL;
  v17 = (const char *)(*(_QWORD *)(a1 + 608) + 5LL);
LABEL_20:
  RtlStringCchPrintfA(v15, v12, "*%s", v17);
  ACPIAnsiStringToWideHelper(v15, v14);
LABEL_21:
  *a5 = v15;
  if ( a6 )
    *a6 = v13;
  return 0LL;
}
