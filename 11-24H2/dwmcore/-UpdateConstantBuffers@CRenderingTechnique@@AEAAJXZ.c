/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800401A0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180042470 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180106BE0 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?GetFragmentIterator@CRenderingTechnique@@AEBA?AVCFragmentIterator@@XZ @ 0x18010E8F0 (-GetFragmentIterator@CRenderingTechnique@@AEBA-AVCFragmentIterator@@XZ.c)
 *     ?FillConstantBuffer@CCustomKernelEffect@@UEBAXIIPEAX@Z @ 0x1801F1870 (-FillConstantBuffer@CCustomKernelEffect@@UEBAXIIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this, __int64 a2, unsigned int a3)
{
  char v3; // si
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rdx
  struct ID3D11Resource *v8; // r12
  CD3DDevice *v9; // r13
  int v10; // eax
  unsigned int v11; // esi
  _OWORD *pData; // rsi
  char *v13; // rcx
  unsigned int *v14; // r15
  unsigned int v15; // eax
  CCustomKernelEffect *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  void (*v19)(CCustomKernelEffect *__hidden, unsigned int, unsigned int, void *); // rax
  unsigned int v20; // edx
  char *v21; // rdx
  SIZE_T size_of; // rax
  D3D11_MAPPED_SUBRESOURCE *v23; // rdi
  D3D11_MAPPED_SUBRESOURCE *v24; // rcx
  const void *v25; // rdx
  size_t v26; // r8
  void *v27; // rcx
  unsigned __int64 v28; // rdx
  char *v29; // rcx
  char *v30; // rdx
  unsigned int *v31; // rdi
  int v32; // eax
  char *v33; // rdx
  char *v34; // rax
  unsigned __int64 v35; // rdx
  char *v37; // rax
  unsigned __int64 v38; // rdx
  unsigned int i; // r8d
  int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // [rsp+20h] [rbp-40h]
  D3D11_MAPPED_SUBRESOURCE v43; // [rsp+30h] [rbp-30h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-20h] BYREF
  D3D11_MAPPED_SUBRESOURCE *v45; // [rsp+50h] [rbp-10h]

  v3 = *((_BYTE *)this + 276);
  if ( !v3 )
  {
    v43.pData = (void *)*((_QWORD *)this + 1);
    *(_OWORD *)Src = 0LL;
    v45 = 0LL;
    v43.RowPitch = 0;
    size_of = std::_Get_size_of_n<16>(1LL);
    v23 = (D3D11_MAPPED_SUBRESOURCE *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v24 = v23;
    *v23 = v43;
    v25 = Src[0];
    if ( Src[1] )
    {
      memmove_0(v23, Src[0], -(__int64)Src[0]);
      v26 = (size_t)Src[1];
      v25 = 0LL;
      v24 = v23 + 1;
    }
    else
    {
      v26 = -(__int64)Src[0];
    }
    memmove_0(v24, v25, v26);
    v27 = Src[0];
    if ( Src[0] )
    {
      v28 = ((char *)v45 - (char *)Src[0]) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v28 >= 0x1000 )
      {
        v27 = (void *)*((_QWORD *)Src[0] - 1);
        v28 += 39LL;
        if ( (unsigned __int64)((char *)Src[0] - (char *)v27 - 8) > 0x1F )
LABEL_34:
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v27, v28);
    }
    Src[0] = v23;
    Src[1] = &v23[1];
    v45 = v23 + 1;
    while ( 1 )
    {
      CFragmentIterator::FindFirst((CFragmentIterator *)Src);
      v29 = (char *)Src[0];
      v30 = (char *)Src[1];
      if ( Src[1] == Src[0] )
        break;
      v31 = (unsigned int *)*((_QWORD *)Src[1] - 2);
      if ( v31[5] )
      {
        v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v31 + 80LL))(*(_QWORD *)v31, v31[4]);
        v29 = (char *)Src[0];
        if ( v31[6] != v32 )
        {
          v3 = 1;
          break;
        }
        v30 = (char *)Src[1];
      }
      v33 = v30 - 16;
      Src[1] = v33;
      if ( v33 == v29 )
        break;
      ++*((_DWORD *)v33 - 2);
    }
    if ( v29 )
    {
      v34 = v29;
      v35 = ((char *)v45 - v29) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v35 >= 0x1000 )
      {
        v29 = (char *)*((_QWORD *)v29 - 1);
        v35 += 39LL;
        if ( (unsigned __int64)(v34 - v29 - 8) > 0x1F )
          goto LABEL_34;
      }
      operator delete(v29, v35);
    }
    if ( !v3 )
      goto LABEL_37;
  }
  v5 = 0;
  v6 = (__int64)(*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 3;
  while ( v5 < (unsigned int)v6 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v5);
    v8 = *(struct ID3D11Resource **)(v7 + 120);
    v9 = *(CD3DDevice **)(*(_QWORD *)(v7 + 40) + 80LL);
    v43 = 0LL;
    v10 = CD3DDevice::Map(v9, v8, a3, D3D11_MAP_WRITE_DISCARD, v42, &v43);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x297u, 0LL);
      return v11;
    }
    pData = v43.pData;
    if ( *((_DWORD *)this + 64) )
    {
      CRenderingTechnique::GetFragmentIterator(this, Src);
LABEL_7:
      v13 = (char *)Src[0];
      while ( Src[1] != v13 )
      {
        v14 = (unsigned int *)*((_QWORD *)Src[1] - 2);
        if ( v14[5] )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v14 + 80LL))(*(_QWORD *)v14, v14[4]);
          v16 = *(CCustomKernelEffect **)v14;
          v17 = v14[5];
          v18 = v14[4];
          v14[6] = v15;
          v19 = *(void (**)(CCustomKernelEffect *__hidden, unsigned int, unsigned int, void *))(*(_QWORD *)v16 + 72LL);
          if ( v19 == CCustomKernelEffect::FillConstantBuffer )
            CCustomKernelEffect::FillConstantBuffer(v16, v18, v17, pData);
          else
            ((void (__fastcall *)(CCustomKernelEffect *, __int64, __int64, _OWORD *))v19)(v16, v18, v17, pData);
          v13 = (char *)Src[0];
        }
        v20 = v14[5];
        if ( (v20 & 0xF) != 0 )
          v20 = v20 - (v14[5] & 0xF) + 16;
        pData = (_OWORD *)((char *)pData + v20);
        v21 = (char *)Src[1] - 16;
        Src[1] = v21;
        if ( v21 != v13 )
        {
          ++*((_DWORD *)v21 - 2);
          CFragmentIterator::FindFirst((CFragmentIterator *)Src);
          goto LABEL_7;
        }
      }
      if ( v13 )
      {
        v37 = v13;
        v38 = ((char *)v45 - v13) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v38 >= 0x1000 )
        {
          v13 = (char *)*((_QWORD *)v13 - 1);
          v38 += 39LL;
          if ( (unsigned __int64)(v37 - v13 - 8) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        operator delete(v13, v38);
      }
    }
    if ( *((_DWORD *)this + 68) )
    {
      for ( i = 0; i < *((_DWORD *)this + 65); ++i )
      {
        v40 = *((_DWORD *)this + 67);
        if ( _bittest(&v40, i) )
        {
          v41 = 44LL * i;
          *pData = *(_OWORD *)((char *)this + v41 + 92);
          pData[1] = *(_OWORD *)((char *)this + v41 + 108);
          pData += 2;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD *, struct ID3D11Resource *, _QWORD))(**((_QWORD **)v9 + 70) + 120LL))(
      *((_QWORD **)v9 + 70),
      v8,
      0LL);
    ++v5;
  }
LABEL_37:
  *((_BYTE *)this + 276) = 0;
  return 0;
}
