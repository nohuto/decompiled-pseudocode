/*
 * XREFs of AslEnvExpandStrings2 @ 0x14080C17C
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140805CD0 (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslEnvExpandStrings @ 0x14080BFA4 (AslEnvExpandStrings.c)
 *     AslpEnvResolveVars @ 0x14080C8B8 (AslpEnvResolveVars.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvExpandStrings2(
        __int64 a1,
        const wchar_t *a2,
        _WORD *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int16 a6,
        __int16 a7)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  wchar_t *v10; // rdi
  int v11; // ebx
  _QWORD *v12; // r14
  __int16 v13; // r13
  __int64 v14; // rcx
  int v15; // ebx
  const char *v16; // r9
  int v17; // r8d
  __int64 v18; // rbp
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v8 = -1LL;
  LODWORD(v24) = 0;
  v9 = -1LL;
  v10 = (wchar_t *)a2;
  do
    ++v9;
  while ( a2[v9] );
  v11 = v9 + 1;
  if ( a3 )
    *a3 = 0;
  v12 = a5;
  if ( a5 )
    *a5 = 0LL;
  v13 = a7;
  if ( (unsigned int)AslpEnvResolveVars(a2, a6, a7, (__int64)&v24) != -1073741789 )
  {
    v15 = -1073741595;
    v16 = "AslpEnvResolveVars failed to fail properly for null buffer";
    v17 = 775;
LABEL_21:
    AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings2", v17, (_DWORD)v16);
    goto LABEL_22;
  }
  if ( v11 != (_DWORD)v24 )
  {
    v18 = AslAlloc(v14, 2LL * (unsigned int)v24);
    if ( !v18 )
    {
      v15 = -1073741801;
      v16 = "Out of memory";
      v17 = 783;
      goto LABEL_21;
    }
    v19 = -1LL;
    do
      ++v19;
    while ( v10[v19] );
    v15 = AslpEnvResolveVars(v10, a6, v13, (__int64)&v24);
    if ( v15 < 0 )
    {
      v16 = "AslpEnvResolveVars failed [%x]";
      v17 = 795;
      goto LABEL_21;
    }
    v10 = (wchar_t *)v18;
  }
  do
    ++v8;
  while ( v10[v8] );
  v20 = AslEnvExpandStrings(a1, v10, v8, a3, v25, v12);
  v21 = 0x80000000LL;
  v15 = v20;
  if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741789 )
  {
    v16 = "AslEnvExpandStrings failed [%x]";
    v17 = 810;
    goto LABEL_21;
  }
LABEL_22:
  AslFree(v21);
  return (unsigned int)v15;
}
