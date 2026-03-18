/*
 * XREFs of MiMappingHasIoReferences @ 0x14026347C
 * Callers:
 *     MiMapContiguousMemory @ 0x1402E9A9C (MiMapContiguousMemory.c)
 *     MmProtectMdlSystemAddress @ 0x14040E150 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x140676C90 (MmMapMdl.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  ULONG_PTR v1; // rsi
  int i; // eax
  signed __int64 v3; // rdi
  bool v4; // zf
  signed __int64 result; // rax

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v1;
  do
  {
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( _bittest64(&MiFlags, 0x24u) && (v3 & 0x21) == 1 && v1 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v1, v3 | 0x200, 128);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, v3 | 0x200, v3);
    v4 = v3 == result;
    v3 = result;
  }
  while ( !v4 );
  return result;
}
