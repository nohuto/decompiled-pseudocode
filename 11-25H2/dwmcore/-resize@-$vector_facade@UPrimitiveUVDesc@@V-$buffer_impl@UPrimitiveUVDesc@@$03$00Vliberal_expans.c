/*
 * XREFs of ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180192590
 * Callers:
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x180192810 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?erase@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UPrimitiveUVDesc@@@2@V?$basic_iterator@$$CBUPrimitiveUVDesc@@@2@0@Z @ 0x1801D13F4 (-erase@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansi.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@Z @ 0x1802546F0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@_J@std@@YA-A_TAEA.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x180290BD0 (--$uninitialized_move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAU.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::resize(
        void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rsi
  char *v6; // r12
  _BYTE *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  _BYTE *v13; // r11
  __int64 result; // rax
  char v15; // cl
  __m128 v16; // xmm3
  __int128 v17; // xmm0
  int v18; // xmm1_4
  signed __int64 v19; // rdi
  __int64 v20; // rax
  _BYTE *v21; // rdx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdi
  LPVOID v25; // rax
  void *v26; // r8
  void *v27; // rdx
  LPVOID v28; // rbx
  void *v29; // rcx
  bool v30; // zf
  void *v31[2]; // [rsp+28h] [rbp-89h] BYREF
  __int128 v32; // [rsp+38h] [rbp-79h] BYREF
  __int64 v33; // [rsp+48h] [rbp-69h]
  __int64 v34; // [rsp+58h] [rbp-59h] BYREF
  char v35[8]; // [rsp+60h] [rbp-51h] BYREF
  __int128 v36; // [rsp+68h] [rbp-49h] BYREF
  __int64 v37; // [rsp+78h] [rbp-39h]
  _BYTE v38[24]; // [rsp+A8h] [rbp-9h] BYREF

  v3 = a1[1];
  v4 = 0x6DB6DB6DB6DB6DB7LL * ((v3 - (_BYTE *)*a1) >> 3);
  memset(v38, 0, sizeof(v38));
  if ( a2 <= v4 )
  {
    v31[0] = v3;
    v34 = (__int64)*a1 + 56 * a2;
    return ((__int64 (__fastcall *)(void **, char *, __int64 *, void **))detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::erase)(
             a1,
             v35,
             &v34,
             v31);
  }
  v5 = a2 - v4;
  if ( 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[2] - v3) >> 3) < a2 - v4 )
  {
    v24 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v3,
            0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3),
            a2);
    v25 = operator new[](saturated_mul(v24, 0x38uLL));
    v26 = a1[1];
    v27 = *a1;
    *(_QWORD *)&v32 = v25;
    v28 = v25;
    *((_QWORD *)&v32 + 1) = v4;
    v33 = 0LL;
    v36 = v32;
    v37 = 0LL;
    std::uninitialized_move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
      &v32,
      v27,
      v26,
      &v36);
    v29 = *a1;
    v30 = *a1 == a1 + 3;
    v31[0] = 0LL;
    *a1 = v28;
    if ( v30 )
      v29 = 0LL;
    operator delete(v29);
    a1[1] = (char *)*a1 + 56 * v4;
    a1[2] = (char *)*a1 + 56 * v24;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v31);
  }
  v6 = (char *)*a1;
  v7 = a1[1];
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((v7 - (_BYTE *)*a1) >> 3);
  v9 = 8 * ((v7 - (_BYTE *)*a1) >> 3);
  v10 = v8 - v4;
  v11 = (__int64)*a1 + v9;
  if ( v5 && (!v11 || (v5 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_14;
  v12 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3) - v4;
  if ( v5 < v10 )
    v12 = v5;
  v13 = &v7[-56 * v12];
  if ( v7 != v13 )
  {
    v21 = v7 - 56;
    v22 = v5;
    v23 = v11 + 56 * v5 + 8;
    if ( v11 )
    {
      while ( v22 )
      {
        --v22;
        v23 -= 56LL;
        if ( v22 >= v5 )
          break;
        *(_DWORD *)(v23 - 8) = *(_DWORD *)v21;
        *(_DWORD *)(v23 - 4) = *((_DWORD *)v21 + 1);
        *(_DWORD *)v23 = *((_DWORD *)v21 + 2);
        *(_DWORD *)(v23 + 4) = *((_DWORD *)v21 + 3);
        *(_DWORD *)(v23 + 8) = *((_DWORD *)v21 + 4);
        *(_DWORD *)(v23 + 12) = *((_DWORD *)v21 + 5);
        *(_DWORD *)(v23 + 16) = *((_DWORD *)v21 + 6);
        *(_DWORD *)(v23 + 20) = *((_DWORD *)v21 + 7);
        *(_DWORD *)(v23 + 24) = *((_DWORD *)v21 + 8);
        *(_OWORD *)(v23 + 28) = *(_OWORD *)(v21 + 36);
        *(_BYTE *)(v23 + 44) = v21[52];
        if ( v21 == v13 )
          goto LABEL_9;
        v21 -= 56;
      }
    }
    goto LABEL_14;
  }
LABEL_9:
  if ( v10 <= v5 )
    goto LABEL_10;
  if ( v8 && (!v6 || v8 < 0) )
LABEL_14:
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)&v32 + 1) = v8;
  v33 = v8;
  *(_QWORD *)&v32 = v6;
  v19 = -56LL * v5 - 56 * v4 + v9;
  v20 = std::_Get_unwrapped_n<stdext::checked_array_iterator<PrimitiveUVDesc *> &,__int64>(
          &v32,
          0x9249249249249249uLL * (v19 >> 3));
  memmove_0((void *)(v20 - v19), &v6[56 * v4], v19);
LABEL_10:
  a1[1] = (char *)a1[1] + 56 * v5;
  result = (__int64)&v6[56 * v4];
  if ( v5 )
  {
    v15 = v38[20];
    v16 = _mm_movelh_ps(
            _mm_unpacklo_ps((__m128)0LL, _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85)),
            _mm_unpacklo_ps(
              _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170),
              _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 255)));
    v17 = *(_OWORD *)&v38[4];
    v18 = *(_DWORD *)v38;
    do
    {
      *(_DWORD *)(result + 32) = v18;
      *(__m128 *)result = v16;
      *(__m128 *)(result + 16) = v16;
      *(_BYTE *)(result + 52) = v15;
      *(_OWORD *)(result + 36) = v17;
      result += 56LL;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
