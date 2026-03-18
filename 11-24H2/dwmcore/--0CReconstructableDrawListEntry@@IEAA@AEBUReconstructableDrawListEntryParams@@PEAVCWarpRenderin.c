/*
 * XREFs of ??0CReconstructableDrawListEntry@@IEAA@AEBUReconstructableDrawListEntryParams@@PEAVCWarpRenderingEffect@@$$QEAV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@V?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@@Z @ 0x18016FEA0
 * Callers:
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x18016F400 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x18016EC60 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ @ 0x180170D00 (-GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CReconstructableDrawListEntry::CReconstructableDrawListEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  __int64 v7; // rax
  volatile signed __int32 *v9; // rcx
  void (*v10)(void); // rax
  int v11; // et0
  __int64 v12; // rcx
  int v13; // ecx
  _OWORD *v14; // rax
  _QWORD *v15; // rax
  CCommonRenderingEffect *v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 (*v19)(void); // rax
  unsigned int UsedSamplersBitmask; // eax
  unsigned int v21; // edx
  _DWORD *v22; // rax
  int v23; // xmm1_4
  int v24; // xmm0_4
  int v25; // xmm1_4
  int v26; // xmm0_4
  unsigned int i; // ecx
  unsigned __int64 v28; // r9
  __int64 v29; // r8
  float *v30; // rax
  float v31; // xmm4_4
  float v32; // xmm7_4
  float v33; // xmm5_4
  float v34; // xmm10_4
  float v35; // xmm6_4
  float v36; // xmm9_4
  float v37; // xmm8_4
  float v38; // xmm11_4
  float v39; // xmm12_4
  float v40; // xmm14_4
  float v41; // xmm13_4
  float v42; // xmm15_4
  float v43; // xmm3_4
  int v45; // [rsp+20h] [rbp-F8h]
  float v46; // [rsp+20h] [rbp-F8h]
  _DWORD v47[10]; // [rsp+28h] [rbp-F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  float v49; // [rsp+120h] [rbp+8h]
  float v50; // [rsp+128h] [rbp+10h]
  float v51; // [rsp+130h] [rbp+18h]
  float v52; // [rsp+138h] [rbp+20h]
  float v53; // [rsp+140h] [rbp+28h]

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CDrawListEntry::`vftable';
  v7 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  v9 = *(volatile signed __int32 **)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)a2;
  if ( v9 )
  {
    v10 = **(void (***)(void))v9;
    if ( (char *)v10 == (char *)CMILRefCountImpl::AddReference )
    {
      v11 = _InterlockedAdd(v9, 1u);
      if ( (v11 < 0) ^ __OFSUB__(v10, CMILRefCountImpl::AddReference) | (v11 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v45);
    }
    else
    {
      v10();
    }
  }
  v12 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_DWORD *)(a1 + 56) = 1065353216;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v13 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 64) = v13;
  v14 = *(_OWORD **)(a2 + 32);
  if ( v14 )
    *(_OWORD *)(a1 + 48) = *v14;
  v15 = *(_QWORD **)(a2 + 40);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 68) = *v15;
    *(_DWORD *)(a1 + 64) = v13 | 0x100;
  }
  *(_QWORD *)a1 = &CReconstructableDrawListEntry::`vftable';
  *(_QWORD *)(a1 + 80) = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a3 + 8));
  v17 = *(CCommonRenderingEffect **)(a1 + 24);
  v18 = *a5;
  *(_QWORD *)(a1 + 88) = *a5;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 104);
  *(_BYTE *)(a1 + 100) = *(_BYTE *)(a2 + 109);
  *(_BYTE *)(a1 + 101) = *(_BYTE *)(a2 + 110);
  v19 = *(__int64 (**)(void))(*(_QWORD *)v17 + 24LL);
  if ( (char *)v19 == (char *)CCommonRenderingEffect::GetUsedSamplersBitmask )
  {
    UsedSamplersBitmask = CCommonRenderingEffect::GetUsedSamplersBitmask(v17);
  }
  else if ( (char *)v19 == (char *)CBrushRenderingEffect::GetUsedSamplersBitmask )
  {
    UsedSamplersBitmask = CBrushRenderingEffect::GetUsedSamplersBitmask(v17);
  }
  else
  {
    UsedSamplersBitmask = v19();
  }
  v21 = UsedSamplersBitmask;
  if ( UsedSamplersBitmask )
  {
    v22 = *(_DWORD **)(a2 + 80);
    if ( v22 )
    {
      v23 = v22[1];
      v47[0] = *v22;
      v24 = v22[3];
      v47[1] = v23;
      v47[3] = v22[2];
      v25 = v22[4];
      v47[4] = v24;
      v26 = v22[5];
      v47[6] = v25;
      v47[7] = v26;
      v47[2] = 0;
      v47[5] = 0;
      v47[8] = 1065353216;
    }
    for ( i = 0; i < v18; ++i )
    {
      if ( _bittest((const int *)&v21, i) )
      {
        if ( i >= v18 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v28 = a5[1];
        v29 = 56LL * i;
        v30 = (float *)v47;
        if ( !*(_QWORD *)(a2 + 80) )
          v30 = 0LL;
        if ( v30 )
        {
          v31 = *v30;
          v32 = v30[4];
          v33 = v30[1];
          v34 = *(float *)(v29 + v28);
          v35 = v30[2];
          v36 = v30[3];
          v37 = v30[5];
          v38 = *(float *)(v29 + v28 + 12);
          v39 = *(float *)(v29 + v28 + 24);
          v40 = *(float *)(v29 + v28 + 16);
          v41 = *(float *)(v29 + v28 + 4);
          v42 = *(float *)(v29 + v28 + 28);
          v50 = *(float *)(v29 + v28 + 20);
          v49 = *(float *)(v29 + v28 + 8);
          v53 = *(float *)(v29 + v28 + 32);
          v52 = v30[7];
          v51 = v30[6];
          v46 = v30[8];
          v43 = (float)(v41 * *v30) + (float)(v40 * v33);
          *(float *)(v29 + a1 + 104) = (float)((float)(*v30 * v34) + (float)(v33 * v38)) + (float)(v35 * v39);
          *(float *)(v29 + a1 + 108) = v43 + (float)(v42 * v35);
          *(float *)(v29 + a1 + 112) = (float)((float)(v49 * v31) + (float)(v50 * v33)) + (float)(v53 * v35);
          *(float *)(v29 + a1 + 116) = (float)((float)(v36 * v34) + (float)(v32 * v38)) + (float)(v37 * v39);
          *(float *)(v29 + a1 + 120) = (float)((float)(v36 * v41) + (float)(v32 * v40)) + (float)(v37 * v42);
          *(float *)(v29 + a1 + 124) = (float)((float)(v36 * v49) + (float)(v32 * v50)) + (float)(v37 * v53);
          *(float *)(v29 + a1 + 128) = (float)((float)(v51 * v34) + (float)(v52 * v38)) + (float)(v46 * v39);
          *(float *)(v29 + a1 + 132) = (float)((float)(v51 * v41) + (float)(v52 * v40)) + (float)(v46 * v42);
          *(float *)(v29 + a1 + 136) = (float)((float)(v51 * v49) + (float)(v52 * v50)) + (float)(v46 * v53);
        }
        else
        {
          *(_OWORD *)(v29 + a1 + 104) = *(_OWORD *)(v29 + v28);
          *(_OWORD *)(v29 + a1 + 120) = *(_OWORD *)(v29 + v28 + 16);
          *(_DWORD *)(v29 + a1 + 136) = *(_DWORD *)(v29 + v28 + 32);
        }
        *(_BYTE *)(v29 + a1 + 156) = *(_BYTE *)(v29 + v28 + 52);
        if ( *(_BYTE *)(v29 + v28 + 52) )
          *(_OWORD *)(v29 + a1 + 140) = *(_OWORD *)(v29 + v28 + 36);
      }
    }
  }
  return a1;
}
