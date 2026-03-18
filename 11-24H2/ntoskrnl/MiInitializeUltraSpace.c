/*
 * XREFs of MiInitializeUltraSpace @ 0x140C5C4D0
 * Callers:
 *     MiCreateTopLevelUltraMappings @ 0x140C5C384 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140261AD0 (RtlClearBitsEx.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     RtlSetAllBitsEx @ 0x14049F1F0 (RtlSetAllBitsEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiInitializeUltraSpace(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r15
  int v9; // eax
  int v10; // edx
  int v12; // ecx
  void *v13; // rcx

  v5 = a3 >> 30;
  v6 = ((a3 >> 30) + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  result = MiAllocatePool(0x42uLL, 16 * (v6 >> 6), 538996045);
  v8 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 32) = result;
    RtlSetAllBitsEx((_QWORD *)(a1 + 24));
    if ( v5 != v6 )
      RtlClearBitsEx(a1 + 24, v5, v6 - v5);
    v9 = ExGenRandom(1);
    v10 = v5;
    if ( _BitScanReverse((unsigned int *)&v12, v5) )
      v10 = 1 << v12;
    *(_QWORD *)(a1 + 16) = v9 & (unsigned int)(v10 - 1);
    *(_QWORD *)(a1 + 40) = v6;
    v13 = (void *)(((16 * (v6 >> 6)) >> 1) + v8);
    *(_QWORD *)(a1 + 48) = v13;
    memset_0(v13, 0, 4 * (v6 >> 5));
    result = 1LL;
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)(a1 + 56) = v5;
  }
  return result;
}
