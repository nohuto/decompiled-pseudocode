/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x1402F4268
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F40C0 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  char result; // al
  __int16 v11; // cx
  unsigned int v12; // ecx
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  v7 = (unsigned __int64)a1 << 6;
  v8 = *(_QWORD *)((char *)AlternateResourceModules + v7 + 32);
  v9 = *(_QWORD *)((char *)AlternateResourceModules + v7 + 48);
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0;
  if ( !v9 )
  {
    v13 = 0LL;
    RtlImageNtHeaderEx(1LL, v8 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v13);
    if ( !v13 )
      return 0;
    v11 = *(_WORD *)(v13 + 24);
    if ( v11 != 267 && v11 != 523 )
      return 0;
    v12 = *(_DWORD *)(v13 + 80);
    v9 = v12;
    if ( !v12 )
      return 0;
  }
  if ( a2 < (v8 & 0xFFFFFFFFFFFFFFFCuLL) || a2 >= v9 + (v8 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = v9;
  return result;
}
