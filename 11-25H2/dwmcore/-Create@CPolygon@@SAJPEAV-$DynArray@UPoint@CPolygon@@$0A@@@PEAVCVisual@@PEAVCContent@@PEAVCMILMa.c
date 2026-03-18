/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18020E9A0
 * Callers:
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x18010B214 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x18029790C (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1800FAE6C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18011F0E4 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolygon::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        char a11,
        const __m128i *a12,
        _QWORD *a13)
{
  bool v14; // cf
  char *v18; // rax
  void (__fastcall ***v19)(_QWORD); // rdx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rax
  int v24; // ecx
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  int v28; // xmm0_4
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v33; // r9d
  unsigned int v34; // [rsp+20h] [rbp-20h]
  struct D2D_VECTOR_4F v35; // [rsp+30h] [rbp-10h] BYREF
  __int64 v36; // [rsp+70h] [rbp+30h] BYREF

  v14 = *(_DWORD *)(a1 + 24) < 3u;
  v36 = 0LL;
  if ( v14 )
  {
    v22 = -2147024809;
    v34 = 27;
    goto LABEL_17;
  }
  v18 = (char *)DefaultHeap::AllocClear(0x110uLL);
  v19 = (void (__fastcall ***)(_QWORD))v18;
  if ( v18 )
  {
    *((_DWORD *)v18 + 2) = 0;
    *(_QWORD *)v18 = &CPolygon::`vftable';
    *((_QWORD *)v18 + 2) = v18 + 48;
    *((_QWORD *)v18 + 3) = v18 + 48;
    *((_DWORD *)v18 + 8) = 4;
    *(_QWORD *)(v18 + 36) = 4LL;
    *((_DWORD *)v18 + 52) = 0;
    *((_QWORD *)v18 + 32) = 0LL;
    ++dword_1804068CC;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !*Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v36, v19) )
  {
    v22 = -2147024882;
    v34 = 30;
LABEL_17:
    v33 = v22;
    goto LABEL_15;
  }
  v20 = v36 + 16;
  *(_DWORD *)(v36 + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize(v20, 0x14u);
  v21 = DynArrayImpl<0>::AddMultipleAndSet(v36 + 16, 20, *(_DWORD *)(a1 + 24), *(_QWORD *)a1);
  v22 = v21;
  if ( v21 < 0 )
  {
    v33 = v21;
    v34 = 33;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, v34, 0LL);
    goto LABEL_11;
  }
  *(_QWORD *)(v36 + 216) = a2;
  v23 = v36;
  v24 = *(_DWORD *)(a4 + 64);
  v25 = *(_OWORD *)(a4 + 16);
  v26 = *(_OWORD *)(a4 + 32);
  v27 = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v36 + 144) = *(_OWORD *)a4;
  v28 = a5;
  *(_OWORD *)(v23 + 160) = v25;
  *(_OWORD *)(v23 + 176) = v26;
  *(_OWORD *)(v23 + 192) = v27;
  *(_DWORD *)(v23 + 208) = v24;
  v29 = a6;
  *(_DWORD *)(v36 + 224) = v28;
  *(_DWORD *)(v36 + 264) = v29;
  *(_DWORD *)(v36 + 236) = a7;
  *(_DWORD *)(v36 + 228) = a8;
  *(_DWORD *)(v36 + 232) = a9;
  *(_BYTE *)(v36 + 240) = a10;
  *(_BYTE *)(v36 + 241) = a11;
  *(_QWORD *)(v36 + 248) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a12 )
    *(__m128i *)(v36 + 128) = _mm_loadu_si128(a12);
  else
    *(__m128i *)(v36 + 128) = _mm_loadu_si128((const __m128i *)D2DVectorHelper::CalculatePlane(
                                                                 &v35,
                                                                 *(struct D2D_VECTOR_4F **)(v36 + 16),
                                                                 (const struct D2D_VECTOR_4F *)(*(_QWORD *)(v36 + 16)
                                                                                              + 20LL),
                                                                 (const struct D2D_VECTOR_4F *)(*(_QWORD *)(v36 + 16)
                                                                                              + 40LL)));
  v30 = v36;
  v36 = 0LL;
  *a13 = v30;
LABEL_11:
  v31 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  }
  return v22;
}
