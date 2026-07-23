/*
 * XREFs of RtlpHpFreeVA @ 0x18009D150
 * Callers:
 *     RtlpHpHeapAllocate @ 0x1800EF054 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x18009D290 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x18009D720 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x1801563C8 (RtlpHpVaMgrCtxDecommit.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpFreeVA(PVOID *BaseAddress, PSIZE_T RegionSize, unsigned int a3, __m128i *a4)
{
  __m128i v4; // xmm1
  char v8; // cl
  ULONG v9; // r9d
  NTSTATUS v10; // eax
  unsigned __int32 v11; // r14d
  _BYTE *v13; // r8
  char *v14; // r9
  unsigned __int64 v15; // xmm1_8

  v4 = *a4;
  if ( a3 == 0x8000 )
  {
    v13 = (_BYTE *)(((unsigned __int64)*BaseAddress + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v14 = (char *)((_BYTE *)*BaseAddress + *RegionSize - v13);
    *BaseAddress = v13;
    *RegionSize = (ULONG_PTR)v14;
    if ( !v14 )
      return 0;
    RtlpHpVaMgrCtxFree(&unk_1801CD968, BaseAddress, RegionSize);
    v11 = 0;
  }
  else
  {
    v8 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 1));
    if ( (unsigned __int8)(v8 - 2) <= 2u )
    {
      RtlpHpVaMgrCtxDecommit(&unk_1801CD968, *BaseAddress, *RegionSize);
      v11 = 0;
    }
    else
    {
      v9 = a3 & 0xC000;
      if ( v8 == 5 )
      {
        v15 = _mm_srli_si128(v4, 8).m128i_u64[0];
        v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, PVOID *, PSIZE_T, ULONG))(v15 ^ *(_QWORD *)(v15 + 16) ^ RtlpHpHeapGlobals))(
                v15 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v15,
                -1LL,
                BaseAddress,
                RegionSize,
                v9);
      }
      else
      {
        v10 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, RegionSize, v9);
      }
      v11 = v10;
    }
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(a3, *RegionSize, *BaseAddress, v11);
  return v11;
}
