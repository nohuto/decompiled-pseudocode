/*
 * XREFs of ACPIGetConvertToStringWideWithPrepend @ 0x14003F258
 * Callers:
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003EE60 (ACPIGetConvertToCompatibleIDWide.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003F928 (ACPIAnsiStringToWideHelper.c)
 */

__int64 __fastcall ACPIGetConvertToStringWideWithPrepend(__int64 a1, int a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  _BYTE *v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  _BYTE *v11; // r8
  char v13; // si
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  char *Pool2; // rax
  char *v19; // rbp
  __int64 v20; // rcx

  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v8 = *(_BYTE **)(a3 + 32);
  v9 = 0;
  v10 = *(_DWORD *)(a3 + 24);
  while ( 1 )
  {
    if ( v9 >= v10 )
      goto LABEL_24;
    v11 = &v8[v9];
    if ( !*v11 )
      goto LABEL_24;
    if ( *v11 == 92 )
      break;
    ++v9;
  }
  if ( v11 )
  {
LABEL_10:
    v13 = 0;
    v14 = 0;
    goto LABEL_11;
  }
LABEL_24:
  if ( *v8 == 42 )
    goto LABEL_10;
  v13 = 1;
  v14 = 5;
LABEL_11:
  v15 = -1LL;
  v16 = -1LL;
  do
    ++v16;
  while ( v8[v16] );
  v17 = (unsigned int)(v16 + 1);
  if ( v13 )
  {
    do
      ++v15;
    while ( v8[v15] );
    v17 = (unsigned int)(v14 + v15 + v17 + 1);
  }
  Pool2 = (char *)ExAllocatePool2(
                    (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                    2 * v17,
                    1399874369LL);
  v19 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v20 = 0LL;
  if ( v13 )
  {
    RtlStringCchPrintfA(Pool2, (unsigned int)v17, "ACPI\\%s", *(const char **)(a3 + 32));
    v20 = (unsigned int)(v14 + *(_DWORD *)(a3 + 24));
  }
  RtlStringCchPrintfA(&v19[v20], (unsigned int)(v17 - v20), "%s", *(const char **)(a3 + 32));
  ACPIAnsiStringToWideHelper(v19, 2 * v17);
  *a5 = v19;
  if ( a6 )
    *a6 = 2 * v17;
  return 0LL;
}
