/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x180136D08
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x180112C50 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // ecx
  char result; // al
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  v7 = (unsigned __int64)a1 << 6;
  v8 = *(_QWORD *)(v7 + AlternateResourceModules + 32);
  v9 = *(_QWORD *)(v7 + AlternateResourceModules + 48);
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0;
  if ( !v9 )
  {
    v12 = 0LL;
    RtlImageNtHeaderEx(1, v8 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v12);
    if ( !v12 || *(_WORD *)(v12 + 24) != 267 && *(_WORD *)(v12 + 24) != 523 )
      return 0;
    v10 = *(_DWORD *)(v12 + 80);
    v9 = v10;
    if ( !v10 )
      return 0;
  }
  if ( a2 < (v8 & 0xFFFFFFFFFFFFFFFCuLL) || a2 >= v9 + (v8 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = v9;
  return result;
}
