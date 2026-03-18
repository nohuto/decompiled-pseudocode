/*
 * XREFs of ??$find@V?$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA?AV?$span_iterator@PEAVCSceneNode@@@details@gsl@@V123@V123@AEBQEAVCSceneNode@@@Z @ 0x1802A54A0
 * Callers:
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x1802A5A8C (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 *     ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1802A5B94 (-SetComponents@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneComponent@@$0-0@gsl@@@Z.c)
 * Callees:
 *     __std_find_trivial_8 @ 0x180250770 (__std_find_trivial_8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::find<gsl::details::span_iterator<CSceneNode *>,CSceneNode *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // xmm1_8

  if ( *(_QWORD *)a2 != *(_QWORD *)a3
    || _mm_srli_si128(*(__m128i *)a2, 8).m128i_u64[0] != _mm_srli_si128(*(__m128i *)a3, 8).m128i_u64[0]
    || *(_QWORD *)(a2 + 16) > *(_QWORD *)(a3 + 16) )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  }
  *(_QWORD *)(a2 + 16) = _std_find_trivial_8(*(const __m128i **)(a2 + 16), *(const __m128i **)(a3 + 16), *a4);
  result = a1;
  v7 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = v7;
  return result;
}
