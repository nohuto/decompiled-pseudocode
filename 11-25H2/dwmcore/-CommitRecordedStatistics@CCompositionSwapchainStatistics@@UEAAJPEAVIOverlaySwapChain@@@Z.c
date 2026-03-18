/*
 * XREFs of ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z @ 0x18024ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x1800C26F8 (--$_Emplace_reallocate@AEBUFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipProp.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0pxxxqqq_EventWriteTransfer @ 0x18022A65C (McTemplateU0pxxxqqq_EventWriteTransfer.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x18024B1A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::CommitRecordedStatistics(
        CCompositionSwapchainStatistics *this,
        struct IOverlaySwapChain *a2)
{
  int v2; // r13d
  struct IOverlaySwapChain *v3; // r14
  unsigned int v5; // esi
  __m128i *v6; // rbx
  __m128i *v7; // rax
  __m128i *v8; // rdx
  __m128i v9; // xmm0
  bool v10; // zf
  __m128i v11; // xmm0
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // r15d
  _DWORD *v20; // r14
  int v21; // r12d
  GUID v22; // xmm1
  __int128 v23; // xmm0
  _QWORD *v24; // r14
  int v25; // eax
  __int64 v26; // rax
  GUID v27; // xmm0
  __int64 (__fastcall *v28)(struct IOverlaySwapChain *); // rax
  __int64 v29; // xmm1_8
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h] BYREF
  struct IOverlaySwapChain *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  GUID v40; // [rsp+80h] [rbp-80h] BYREF
  __int128 v41; // [rsp+90h] [rbp-70h]
  GUID v42; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v43; // [rsp+B0h] [rbp-50h]
  __m128i v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]

  v2 = 0;
  v38 = a2;
  v3 = a2;
  v5 = 0;
  if ( !*((_QWORD *)this + 8) )
  {
LABEL_34:
    v33 = *((_QWORD *)this + 3);
    if ( v33 != *((_QWORD *)this + 4) )
      *((_QWORD *)this + 4) = v33;
    *((_QWORD *)this + 6) = 0LL;
    return v5;
  }
  v6 = (__m128i *)*((_QWORD *)this + 4);
  while ( 1 )
  {
    v7 = (__m128i *)*((_QWORD *)this + 3);
    v8 = v6;
    if ( v6 == v7 )
      break;
    v9 = v6[-3];
    v6 -= 4;
    v43 = v9;
    v10 = v6->m128i_i32[0] == 1;
    v11 = v6[3];
    v44 = v6[2];
    if ( !v10 && !(unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v11, 12)) )
    {
      memmove_0(v6, v8, *((_QWORD *)this + 4) - (_QWORD)v8);
      *((_QWORD *)this + 4) -= 64LL;
    }
  }
  if ( v7 == *((__m128i **)this + 4) )
  {
LABEL_29:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl)
      && *((_QWORD *)this + 12) )
    {
      v43.m128i_i64[0] = 32LL;
      v43.m128i_i64[1] = (__int64)&v40;
      v26 = *(_QWORD *)v3;
      v41 = 0LL;
      v27 = (GUID)*((_OWORD *)this + 5);
      v28 = *(__int64 (__fastcall **)(struct IOverlaySwapChain *))(v26 + 408);
      v42 = GUID_b7c9e47a_a946_41e2_95a6_04c2e08cfd1b;
      v29 = *((_QWORD *)this + 12);
      v40 = v27;
      *(_QWORD *)&v41 = v29;
      v30 = v28(v3);
      v31 = *((_QWORD *)this + 8);
      *((_QWORD *)&v41 + 1) = v30;
      v32 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v31 + 56LL))(v31, 1LL, &v42);
      v5 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x143u, 0LL);
      *((_QWORD *)this + 12) = 0LL;
    }
    goto LABEL_34;
  }
  v36 = 0LL;
  v35 = 0LL;
  v37 = 2;
  v43.m128i_i64[0] = 4LL;
  v42 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
  v43.m128i_i64[1] = (__int64)&v37;
  std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(&v35, 0LL, &v42);
  v12 = *((_QWORD *)this + 2);
  v49 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 320LL))(v12);
  v15 = *((_QWORD *)&v35 + 1);
  v16 = v36;
  v45 = v13;
  v46 = *((_QWORD *)this + 9);
  v47 = *((_QWORD *)this + 6);
  v48 = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 6;
  *((_QWORD *)&v41 + 1) = &v45;
  *(_QWORD *)&v41 = 32LL;
  v40 = GUID_7435e52d_bda4_42a3_9202_521c00f87c0c;
  if ( *((_QWORD *)&v35 + 1) == v36 )
  {
    std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(&v35, *((_BYTE **)&v35 + 1), &v40);
    v16 = v36;
    v17 = *((_QWORD *)&v35 + 1);
  }
  else
  {
    **((_OWORD **)&v35 + 1) = GUID_7435e52d_bda4_42a3_9202_521c00f87c0c;
    *(_OWORD *)(v15 + 16) = v41;
    v17 = v15 + 32;
    *((_QWORD *)&v35 + 1) = v17;
  }
  v18 = *((_QWORD *)this + 4);
  v19 = 0;
  v20 = (_DWORD *)*((_QWORD *)this + 3);
  v21 = 0;
  v39 = v18;
  if ( v20 != (_DWORD *)v18 )
  {
    v22 = GUID_276346ed_6203_420e_9822_1b609efb68e0;
    do
    {
      *(_QWORD *)&v41 = 60LL;
      *((_QWORD *)&v41 + 1) = v20;
      v40 = v22;
      if ( v17 == v16 )
      {
        std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(&v35, (_BYTE *)v17, &v40);
        v22 = GUID_276346ed_6203_420e_9822_1b609efb68e0;
        v18 = v39;
        v16 = v36;
        v17 = *((_QWORD *)&v35 + 1);
      }
      else
      {
        v23 = v41;
        *(GUID *)v17 = v22;
        *(_OWORD *)(v17 + 16) = v23;
        v17 += 32LL;
        *((_QWORD *)&v35 + 1) = v17;
      }
      v14 = (unsigned int)(*v20 - 1);
      if ( *v20 == 1 )
      {
        ++v2;
      }
      else
      {
        v14 = (unsigned int)(*v20 - 2);
        if ( *v20 == 2 )
        {
          ++v19;
        }
        else if ( *v20 == 3 )
        {
          ++v21;
        }
      }
      v20 += 16;
    }
    while ( v20 != (_DWORD *)v18 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0pxxxqqq_EventWriteTransfer(v14, v18, *((_QWORD *)this + 8), v46, v47, v45, v19, v21, v2);
  v24 = (_QWORD *)v35;
  v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 8) + 56LL))(
          *((_QWORD *)this + 8),
          (unsigned int)((v17 - (__int64)v35) >> 5),
          v35);
  v5 = v25;
  if ( v25 >= 0 )
  {
    *((_DWORD *)this + 14) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 320LL))(*((_QWORD *)this + 2));
    if ( v24 )
      std::_Deallocate<16,0>(v24, (v16 - (_QWORD)v24) & 0xFFFFFFFFFFFFFFE0uLL);
    v3 = v38;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x132u, 0LL);
  if ( v24 )
    std::_Deallocate<16,0>(v24, (v16 - (_QWORD)v24) & 0xFFFFFFFFFFFFFFE0uLL);
  return v5;
}
