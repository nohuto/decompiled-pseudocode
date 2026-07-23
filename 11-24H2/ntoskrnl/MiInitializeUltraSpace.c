/*
 * XREFs of MiInitializeUltraSpace @ 0x140C5E660
 * Callers:
 *     MiCreateTopLevelUltraMappings @ 0x140C5E514 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     RtlSetAllBitsEx @ 0x14049A020 (RtlSetAllBitsEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiInitializeUltraSpace(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // edx
  int v15; // ecx
  void *v16; // rcx

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
    v12 = ExGenRandom(1, v9, v10, v11);
    v13 = v5;
    if ( _BitScanReverse((unsigned int *)&v15, v5) )
      v13 = 1 << v15;
    *(_QWORD *)(a1 + 16) = v12 & (unsigned int)(v13 - 1);
    *(_QWORD *)(a1 + 40) = v6;
    v16 = (void *)(((16 * (v6 >> 6)) >> 1) + v8);
    *(_QWORD *)(a1 + 48) = v16;
    memset_0(v16, 0, 4 * (v6 >> 5));
    result = 1LL;
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)(a1 + 56) = v5;
  }
  return result;
}
