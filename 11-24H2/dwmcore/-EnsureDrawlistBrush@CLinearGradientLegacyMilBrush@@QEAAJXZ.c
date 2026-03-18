/*
 * XREFs of ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801DD55C
 * Callers:
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@@Z @ 0x1801DD054 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAPEAPEAVCColorGradientStop@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1801DDAE0 (--$_Emplace_reallocate@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PE.c)
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1801DDBDC (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801DE250 (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(CLinearGradientLegacyMilBrush *this)
{
  unsigned int v2; // esi
  CLinearGradientBrush *v3; // rax
  struct CComposition **v4; // r14
  CLinearGradientBrush *v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 *v8; // rdi
  _DWORD *v9; // rdx
  struct CComposition *v10; // rax
  _DWORD *v11; // rdx
  struct CComposition *v12; // rax
  __int64 *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  CResource *v22; // r14
  _QWORD *v23; // rbx
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 23) )
    return v2;
  v3 = (CLinearGradientBrush *)DefaultHeap::AllocClear(0x100uLL);
  v4 = (struct CComposition **)((char *)this + 24);
  if ( v3 )
    v5 = CLinearGradientBrush::CLinearGradientBrush(v3, *v4);
  else
    v5 = 0LL;
  v6 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = v5;
  if ( v5 )
    (*(void (__fastcall **)(CLinearGradientBrush *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( !*((_QWORD *)this + 23) )
  {
    v7 = 113;
    v8 = (__int64 *)((char *)this + 192);
LABEL_21:
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v7, 0LL);
    v14 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = *v8;
    *v8 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    return v2;
  }
  v9 = DefaultHeap::AllocClear(0x60uLL);
  if ( v9 )
  {
    v10 = *v4;
    v9[2] = 0;
    *((_QWORD *)v9 + 3) = v10;
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    v9[10] = 0;
    *(_QWORD *)v9 = &CColorGradientStop::`vftable';
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
    v9[22] = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v8 = (__int64 *)((char *)this + 192);
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)this + 24, (__int64)v9);
  if ( !*((_QWORD *)this + 24) )
  {
    v7 = 115;
    goto LABEL_21;
  }
  v11 = DefaultHeap::AllocClear(0x60uLL);
  if ( v11 )
  {
    v12 = *v4;
    v11[2] = 0;
    *((_QWORD *)v11 + 3) = v12;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 6) = 0LL;
    v11[10] = 0;
    *(_QWORD *)v11 = &CColorGradientStop::`vftable';
    *((_QWORD *)v11 + 9) = 0LL;
    *((_QWORD *)v11 + 10) = 0LL;
    v11[22] = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v13 = (__int64 *)((char *)this + 200);
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)this + 25, (__int64)v11);
  if ( !*((_QWORD *)this + 25) )
  {
    v7 = 117;
    goto LABEL_21;
  }
  v26 = *v8;
  v25 = 0LL;
  v24 = 0LL;
  std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(&v24, 0LL, &v26);
  v18 = *((_QWORD *)&v24 + 1);
  v19 = v25;
  v20 = *v13;
  v26 = *v13;
  if ( *((_QWORD *)&v24 + 1) == v25 )
  {
    std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(&v24, *((_QWORD *)&v24 + 1), &v26);
    v21 = *((_QWORD *)&v24 + 1);
    v19 = v25;
  }
  else
  {
    **((_QWORD **)&v24 + 1) = v20;
    v21 = v18 + 8;
  }
  v22 = (CResource *)*((_QWORD *)this + 23);
  v23 = (_QWORD *)v24;
  gsl::details::extent_type<-1>::extent_type<-1>(&v24, (int)((v21 - (__int64)v24) >> 3));
  *((_QWORD *)&v24 + 1) = v23;
  if ( (_QWORD)v24 == -1LL || !v23 && (_QWORD)v24 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  CGradientBrush::SetStops(v22);
  if ( v23 )
    std::_Deallocate<16,0>(v23, (v19 - (_QWORD)v23) & 0xFFFFFFFFFFFFFFF8uLL);
  return v2;
}
