/*
 * XREFs of MiMappingHasIoReferences @ 0x1402AAABC
 * Callers:
 *     MmProtectMdlSystemAddress @ 0x1404107F0 (MmProtectMdlSystemAddress.c)
 *     MiMapContiguousMemory @ 0x140413F8C (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x14066B340 (MmMapMdl.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
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
      MiCheckLinearProtectedPteAccessedBit(v1, v3 | 0x200);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, v3 | 0x200, v3);
    v4 = v3 == result;
    v3 = result;
  }
  while ( !v4 );
  return result;
}
