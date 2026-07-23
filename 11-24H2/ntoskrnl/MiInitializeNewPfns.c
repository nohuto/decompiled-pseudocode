/*
 * XREFs of MiInitializeNewPfns @ 0x14066CDA4
 * Callers:
 *     MiDoGangAssignment @ 0x14026FEE4 (MiDoGangAssignment.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiCreateDescriptorPfns @ 0x140C53184 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiSetNonResidentPteHeat @ 0x140251DF0 (MiSetNonResidentPteHeat.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiCreateInitialLargeLeafPfns @ 0x140431268 (MiCreateInitialLargeLeafPfns.c)
 *     MiDetermineNewPfnHeatState @ 0x140446D1C (MiDetermineNewPfnHeatState.c)
 *     MiCreateInitialPfns @ 0x14066D630 (MiCreateInitialPfns.c)
 */

unsigned __int64 __fastcall MiInitializeNewPfns(
        __m128i *a1,
        unsigned __int64 a2,
        const __m128i *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        ULONG_PTR *BugCheckParameter2)
{
  __m128i *v9; // rdi
  __int16 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 result; // rax
  _DWORD *v13; // r12
  __int64 v14; // r11
  int v15; // edx
  ULONG_PTR *v16; // r15
  int v17; // r12d
  __int64 ContainingPageTable; // rax
  __int64 v19; // rsi
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v21; // rbx
  __m128i *v22; // r12
  __m128i *v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // [rsp+30h] [rbp-38h] BYREF
  __m128i *v31; // [rsp+38h] [rbp-30h]
  unsigned int v32; // [rsp+70h] [rbp+8h] BYREF

  v9 = a1;
  v10 = a5;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)a1[0x22000000000LL].m128i_i64 >> 4);
  if ( (a5 & 0x3000) != 0 )
    return MiCreateInitialLargeLeafPfns(
             0xAAAAAAAAAAAAAAABuLL * ((__int64)a1[0x22000000000LL].m128i_i64 >> 4),
             a2,
             (a5 >> 12) & 1,
             1,
             *(_WORD *)a4,
             0);
  if ( (a5 & 0x180) != 0 && (a5 & 1) == 0 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(a4 + 19648), a2);
    if ( (v10 & 0x100) != 0 )
      _InterlockedAdd64(&qword_140E2DD28, a2);
  }
  if ( (v10 & 2) == 0 )
    return MiCreateInitialPfns(a1, a2, a3);
  v13 = (_DWORD *)(a6 + 32);
  v14 = MiSwizzleInvalidPte(16 * (*(_DWORD *)(a6 + 32) & 0x3E | (unsigned __int64)(a6 << 12) | 0x40));
  v30 = v14;
  a5 = a3[2].m128i_i8[2] & 7;
  if ( a5 == 2 && (unsigned int)MiDetermineNewPfnHeatState(0, 1u, 0LL) )
  {
    MiSetNonResidentPteHeat((unsigned __int64)&v30, v15);
    v14 = v30;
  }
  v16 = BugCheckParameter2;
  a3[1].m128i_i64[0] = v14;
  a3[2].m128i_i64[1] |= 0x8000000000000000uLL;
  v17 = (*v13 >> 1) & 0x1F;
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v16);
  v19 = 48 * ContainingPageTable - 0x220000000000LL;
  MiSetPfnContainingFrame((__int64)a3, ContainingPageTable);
  if ( a5 == 6 )
    ValidPte = MiMakeValidPte((unsigned __int64)v16, v11, v17);
  else
    ValidPte = MiMakeTransitionPte(v11, v17);
  v21 = ValidPte;
  v22 = &v9[3 * a2];
  if ( v9 != v22 )
  {
    do
    {
      a3->m128i_i64[1] = (__int64)v16;
      v23 = v9 + 3;
      v24 = _mm_loadu_si128(a3);
      v25 = _mm_loadu_si128(a3 + 1);
      v26 = _mm_loadu_si128(a3 + 2);
      v31 = v9 + 3;
      while ( v9 != v23 )
      {
        *v9 = v24;
        v9[1] = v25;
        v9[2] = v26;
        v9 += 3;
      }
      if ( (v21 & 1) != 0
        && _bittest64(&MiFlags, 0x24u)
        && (v21 & 0x20) == 0
        && (unsigned __int64)v16 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v16, v21, 128LL);
        v23 = v31;
      }
      *v16++ = v21;
      v9 = v23;
      v21 = (v21 + 4096) ^ (v21 ^ (v21 + 4096)) & 0xFFF0000000000FFFuLL;
    }
    while ( v23 != v22 );
  }
  v32 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v32);
    while ( *(__int64 *)(v19 + 24) < 0 );
  }
  v27 = *(_QWORD *)(v19 + 24);
  v28 = v27 + a2;
  v29 = (v27 ^ (v27 + a2)) & 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v19 + 24) = v28 ^ v29;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
