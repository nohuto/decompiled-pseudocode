/*
 * XREFs of MiPerformSafePdeWrite @ 0x140483594
 * Callers:
 *     MiValidVirtualizationFault @ 0x14042845C (MiValidVirtualizationFault.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1404834D4 (MiGetWsAndMakePageTablesNx.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiPerformSafePdeWrite(__int64 a1, ULONG_PTR a2, __int64 a3, char a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // r12d
  int v9; // r13d
  int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // [rsp+68h] [rbp+20h]

  v15 = 0;
  v6 = a3;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v15 = 1;
    ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
  }
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (a4 & 1) != 0 )
      v6 |= 0x20uLL;
    if ( (a4 & 2) != 0 )
      v6 |= 0x8000000000000000uLL;
    if ( (a4 & 4) != 0 )
      v6 |= 4uLL;
    MiWriteValidPteNewProtection(a2, v6, a3);
  }
  else
  {
    v8 = a4 & 1;
    v9 = a4 & 2;
    v10 = a4 & 4;
    do
    {
      v11 = v6;
      v12 = v6 | 0x20;
      if ( !v8 )
        v12 = v6;
      v13 = v12 | 0x8000000000000000uLL;
      if ( !v9 )
        v13 = v12;
      v14 = v13 | 4;
      if ( !v10 )
        v14 = v13;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( _bittest64(&MiFlags, 0x24u) && (v14 & 0x21) == 1 && a2 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(a2, v14, 128LL);
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v14, v6);
    }
    while ( v6 != v11 );
  }
  if ( v15 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
}
