/*
 * XREFs of MiWriteValidPteVolatile @ 0x14037C940
 * Callers:
 *     MiTryLockProtoPoolPageAtDpc @ 0x14022B5E4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiLockOwnedProtoPage @ 0x140231FF0 (MiLockOwnedProtoPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

signed __int64 __fastcall MiWriteValidPteVolatile(
        volatile signed __int64 *BugCheckParameter2,
        int a2,
        unsigned __int8 a3)
{
  signed __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  bool v12; // zf
  signed __int64 result; // rax

  v3 = *BugCheckParameter2;
  v4 = a3;
  v5 = a2 & 1;
  v6 = a2 & 0x80000000;
  v8 = a2 & 2;
  do
  {
    if ( v6 )
      v9 = (v4 << 56) ^ (v3 ^ (v4 << 56)) & 0x80FFFFFFFFFFFFFFuLL;
    else
      v9 = v3;
    v10 = v9 | 0x20;
    if ( !v5 )
      v10 = v9;
    v11 = v10 | 0x42;
    if ( !v8 )
      v11 = v10;
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( _bittest64(&MiFlags, 0x24u)
      && (v11 & 0x21) == 1
      && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v11);
    }
    result = _InterlockedCompareExchange64(BugCheckParameter2, v11, v3);
    v12 = v3 == result;
    v3 = result;
  }
  while ( !v12 );
  return result;
}
