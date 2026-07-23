/*
 * XREFs of MiSetHugeRangePartitionId @ 0x140672D78
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateHugePageCounts @ 0x140672EC4 (MiUpdateHugePageCounts.c)
 */

__int64 __fastcall MiSetHugeRangePartitionId(__int16 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int16 v4; // di
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 *v9; // r15
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  __int64 result; // rax

  v4 = *a1;
  v6 = (a3 >> 18) & 0x3FFFFF;
  v8 = a4 >> 18;
  v9 = (unsigned __int64 *)(qword_140E30100 + 8 * v6);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( v8 )
  {
    v11 = v8;
    v12 = 16LL * (v4 & 0x7FF);
    do
    {
      MiLockHugePfnInternal((__int64)v9);
      *v9 = v12 | *v9 & 0xFFFFFFFFFFFF800BuLL | 3;
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E30108 + 4 * (((((__int64)v9 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v9 - qword_140E30100) >> 3) & 0x1F)));
      MiUpdateHugePageCounts(a2, v6, v8, 0LL);
      MiUpdateHugePageCounts(a1, v6, v8, 1LL);
      ++v9;
      v6 = (v6 + 1) ^ ((v6 + 1) ^ v6) & 0xFFFFFFFFFFC00000uLL;
      --v11;
    }
    while ( v11 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
