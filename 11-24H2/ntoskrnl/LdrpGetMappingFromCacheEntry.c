/*
 * XREFs of LdrpGetMappingFromCacheEntry @ 0x14046919C
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140468FF4 (LdrpGetAlternateResourceModuleHandleEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  char result; // al
  unsigned __int16 Magic; // cx
  unsigned int SizeOfImage; // ecx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

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
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, (PVOID)(v8 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
    if ( !OutHeaders )
      return 0;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic != 267 && Magic != 523 )
      return 0;
    SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
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
