/*
 * XREFs of LdrpResolvePatchDllName @ 0x180090FE8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800EF5B0 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     LdrpAllocateUnicodeString @ 0x1800929C0 (LdrpAllocateUnicodeString.c)
 *     LdrpGetBaseNameFromFullName @ 0x1800D71E0 (LdrpGetBaseNameFromFullName.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpResolvePatchDllName(_WORD *Src, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v7; // ebx
  __int64 result; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v7 = 2 * v3;
  result = LdrpAllocateUnicodeString(a3, v7);
  if ( (int)result >= 0 )
  {
    memmove(*(void **)(a3 + 8), Src, v7 + 2LL);
    *(_WORD *)a3 = v7;
    if ( a2 )
      LdrpGetBaseNameFromFullName(a3, a2);
    return 0LL;
  }
  return result;
}
