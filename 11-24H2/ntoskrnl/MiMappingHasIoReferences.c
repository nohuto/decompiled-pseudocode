/*
 * XREFs of MiMappingHasIoReferences @ 0x140292CEC
 * Callers:
 *     MiMapContiguousMemory @ 0x14034B0DC (MiMapContiguousMemory.c)
 *     MmProtectMdlSystemAddress @ 0x1404063A0 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x140677E60 (MmMapMdl.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
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
      MiCheckLinearProtectedPteAccessedBit(v1, v3 | 0x200, 128LL);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, v3 | 0x200, v3);
    v4 = v3 == result;
    v3 = result;
  }
  while ( !v4 );
  return result;
}
