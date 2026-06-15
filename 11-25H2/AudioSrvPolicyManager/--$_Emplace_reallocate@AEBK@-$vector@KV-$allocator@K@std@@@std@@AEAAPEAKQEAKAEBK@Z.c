/*
 * XREFs of ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x180015710
 * Callers:
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x1800135AC (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     _lambda_0a903797054c4de60318e94de109d2f9_::operator() @ 0x18003FFEC (_lambda_0a903797054c4de60318e94de109d2f9_--operator().c)
 *     ?AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x1800478F0 (-AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@K@std@@@std@@YAPEAKAEAV?$allocator@K@0@AEA_K@Z @ 0x180032774 (--$_Allocate_at_least_helper@V-$allocator@K@std@@@std@@YAPEAKAEAV-$allocator@K@0@AEA_K@Z.c)
 *     memmove_0 @ 0x18004B3D8 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(
        _QWORD *a1,
        _BYTE *a2,
        _DWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rdi
  char *v13; // r14
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  char *v19; // [rsp+58h] [rbp+10h] BYREF

  v6 = (__int64)&a2[-*a1] >> 2;
  v7 = (__int64)(a1[1] - *a1) >> 2;
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  v19 = (char *)v8;
  v12 = (char *)std::_Allocate_at_least_helper<std::allocator<unsigned long>>(v10, &v19);
  v19 = v12;
  v13 = &v12[4 * v6];
  *(_DWORD *)v13 = *a3;
  v14 = (_BYTE *)a1[1];
  v15 = (_BYTE *)*a1;
  v16 = v12;
  if ( a2 == v14 )
  {
    v17 = v14 - v15;
  }
  else
  {
    memmove_0(v12, v15, (size_t)&a2[-*a1]);
    v16 = v13 + 4;
    v17 = a1[1] - (_QWORD)a2;
    v15 = a2;
  }
  memmove_0(v16, v15, v17);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFFCuLL);
  *a1 = v12;
  a1[1] = &v12[4 * v9];
  a1[2] = &v12[4 * v8];
  return v13;
}
