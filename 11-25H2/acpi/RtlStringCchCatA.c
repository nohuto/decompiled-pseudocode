/*
 * XREFs of RtlStringCchCatA @ 0x140030320
 * Callers:
 *     CatError @ 0x14006DA70 (CatError.c)
 *     Debugger @ 0x14006E888 (Debugger.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1400A3C50 (OSOpenAMLINamespaceOverrideHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v6; // r9
  NTSTRSAFE_PSTR v7; // rax
  NTSTATUS v8; // ecx
  size_t v9; // rax
  char *v10; // rcx
  size_t v11; // rdx
  size_t v12; // rax
  const char *v13; // r10
  char v14; // r8
  char *v15; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
    return -1073741811;
  v6 = cchDest;
  v7 = pszDest;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v8 = -1073741811;
  if ( v6 )
    v8 = 0;
  v9 = cchDest - v6;
  if ( !v6 )
    return v8;
  v10 = &pszDest[v9];
  v11 = v6;
  v12 = v6 + v9 - cchDest + 2147483646;
  v13 = (const char *)(pszSrc - v10);
  do
  {
    if ( !v12 )
      break;
    v14 = v10[(_QWORD)v13];
    if ( !v14 )
      break;
    *v10 = v14;
    --v12;
    ++v10;
    --v11;
  }
  while ( v11 );
  v15 = v10 - 1;
  if ( v11 )
    v15 = v10;
  *v15 = 0;
  result = -2147483643;
  if ( v11 )
    return 0;
  return result;
}
