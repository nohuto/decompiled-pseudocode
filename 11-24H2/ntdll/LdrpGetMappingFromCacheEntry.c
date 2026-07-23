/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x180134F38
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x18010DF10 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int SizeOfImage; // ecx
  char result; // al
  PIMAGE_NT_HEADERS v12; // [rsp+38h] [rbp+10h] BYREF

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
    v12 = 0LL;
    RtlImageNtHeaderEx(1u, (PVOID)(v8 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &v12);
    if ( !v12 || v12->OptionalHeader.Magic != 267 && v12->OptionalHeader.Magic != 523 )
      return 0;
    SizeOfImage = v12->OptionalHeader.SizeOfImage;
    v9 = SizeOfImage;
    if ( !SizeOfImage )
      return 0;
  }
  if ( a2 < (v8 & 0xFFFFFFFFFFFFFFFCuLL) || a2 >= v9 + (v8 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = v9;
  return result;
}
