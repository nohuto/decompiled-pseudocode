/*
 * XREFs of MiPerformSafePdeWrite @ 0x140488444
 * Callers:
 *     MiValidVirtualizationFault @ 0x1404359DC (MiValidVirtualizationFault.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488384 (MiGetWsAndMakePageTablesNx.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 */

void __fastcall MiPerformSafePdeWrite(__int64 a1, ULONG_PTR a2, __int64 a3, char a4)
{
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
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v15 = 1;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
  }
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (a4 & 1) != 0 )
      a3 |= 0x20uLL;
    if ( (a4 & 2) != 0 )
      a3 |= 0x8000000000000000uLL;
    if ( (a4 & 4) != 0 )
      a3 |= 4uLL;
    MiWriteValidPteNewProtection(a2, a3);
  }
  else
  {
    v8 = a4 & 1;
    v9 = a4 & 2;
    v10 = a4 & 4;
    do
    {
      v11 = a3;
      v12 = a3 | 0x20;
      if ( !v8 )
        v12 = a3;
      v13 = v12 | 0x8000000000000000uLL;
      if ( !v9 )
        v13 = v12;
      v14 = v13 | 4;
      if ( !v10 )
        v14 = v13;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( _bittest64(&MiFlags, 0x24u) && (v14 & 0x21) == 1 && a2 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(a2, v14, 128);
      a3 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v14, a3);
    }
    while ( a3 != v11 );
  }
  if ( v15 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
}
