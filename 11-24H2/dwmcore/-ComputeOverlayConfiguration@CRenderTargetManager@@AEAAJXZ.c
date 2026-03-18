/*
 * XREFs of ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180101DE0
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x1801033D0 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x180069194 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x1801017D8 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x1801020F0 (-CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180102130 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x180102980 (-CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetManager::ComputeOverlayConfiguration(CRenderTargetManager *this)
{
  CLegacyRenderTarget **v1; // rdi
  _BYTE *v2; // rbx
  CLegacyRenderTarget **v3; // rax
  unsigned int v4; // r13d
  CLegacyRenderTarget *v5; // rcx
  struct COverlayContext *(__fastcall *v6)(CLegacyRenderTarget *__hidden); // rax
  struct COverlayContext *v7; // rax
  struct COverlayContext *v8; // r12
  CRenderTargetManager **v9; // r8
  _BYTE *v10; // r15
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  CRenderTargetManager **v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rbx
  CRenderTargetManager **v17; // rax
  signed __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  HANDLE ProcessHeap; // rax
  unsigned __int64 v25; // r14
  void *v26; // rbx
  void *v27; // rcx
  bool v28; // zf
  __int128 v29; // [rsp+38h] [rbp-59h] BYREF
  __int64 v30; // [rsp+48h] [rbp-49h]
  _QWORD v31[2]; // [rsp+58h] [rbp-39h] BYREF
  __int128 v32; // [rsp+68h] [rbp-29h] BYREF
  __int64 v33; // [rsp+78h] [rbp-19h]
  LPVOID lpMem; // [rsp+88h] [rbp-9h]
  CRenderTargetManager **v35; // [rsp+90h] [rbp-1h]
  char *v36; // [rsp+98h] [rbp+7h]
  _BYTE v37[32]; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+C0h] [rbp+2Fh] BYREF

  v1 = (CLegacyRenderTarget **)*((_QWORD *)this + 3);
  v35 = (CRenderTargetManager **)v37;
  v2 = v37;
  v36 = (char *)&v38;
  v3 = (CLegacyRenderTarget **)*((_QWORD *)this + 4);
  v4 = 0;
  v31[0] = v3;
  lpMem = v37;
  while ( v1 != v3 )
  {
    v5 = *v1;
    v6 = *(struct COverlayContext *(__fastcall **)(CLegacyRenderTarget *__hidden))(*(_QWORD *)*v1 + 80LL);
    if ( v6 == CLegacyRenderTarget::CollectOverlayCandidates )
    {
      v7 = CLegacyRenderTarget::CollectOverlayCandidates(v5);
    }
    else if ( v6 == CDDisplayRenderTarget::CollectOverlayCandidates )
    {
      v7 = CDDisplayRenderTarget::CollectOverlayCandidates(v5);
    }
    else
    {
      v7 = (struct COverlayContext *)((__int64 (__fastcall *)(CLegacyRenderTarget *, struct COverlayContext *(__fastcall *)(CLegacyRenderTarget *__hidden), struct COverlayContext *(__fastcall *)(CDDisplayRenderTarget *__hidden)))v6)(
                                       v5,
                                       CLegacyRenderTarget::CollectOverlayCandidates,
                                       CDDisplayRenderTarget::CollectOverlayCandidates);
    }
    v8 = v7;
    if ( v7 )
    {
      v9 = v35;
      v10 = lpMem;
      v11 = ((char *)v35 - (_BYTE *)lpMem) >> 3;
      if ( !((v36 - (char *)v35) >> 3) )
      {
        if ( v11 + 1 >= v11 )
        {
          v25 = detail::liberal_expansion_policy::expand(this, (v36 - (_BYTE *)lpMem) >> 3, v11 + 1);
          *(_QWORD *)&v29 = operator new[](saturated_mul(v25, 8uLL));
          *((_QWORD *)&v29 + 1) = v11;
          v26 = (void *)v29;
          v30 = 0LL;
          v32 = v29;
          v33 = 0LL;
          std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
            (__int64)&v29,
            lpMem,
            (__int64)v35,
            &v32);
          v27 = lpMem;
          v28 = lpMem == v37;
          lpMem = v26;
          if ( v28 )
            v27 = 0LL;
          operator delete(v27);
          v10 = lpMem;
          v9 = (CRenderTargetManager **)((char *)lpMem + 8 * v11);
          v36 = (char *)lpMem + 8 * v25;
          v35 = v9;
        }
        else
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
        }
      }
      v12 = ((char *)v9 - v10) >> 3;
      v13 = v12 - v11;
      v14 = (CRenderTargetManager **)&v10[8 * v12];
      if ( !v14 )
LABEL_16:
        _invalid_parameter_noinfo_noreturn();
      v15 = (((char *)v9 - v10) >> 3) - v11;
      v16 = 1LL;
      if ( v13 > 1 )
        v15 = 1LL;
      this = (CRenderTargetManager *)(8 * v15);
      v17 = (CRenderTargetManager **)((char *)v9 - (char *)this);
      if ( v9 != (CRenderTargetManager **)((char *)v9 - (char *)this) )
      {
        do
        {
          --v9;
          if ( !v16 )
            goto LABEL_16;
          if ( --v16 )
            goto LABEL_16;
          this = *v9;
          *v14 = *v9;
        }
        while ( v9 != v17 );
        v9 = v35;
      }
      if ( v13 > 1 )
      {
        if ( v12 && (!v10 || v12 < 0) )
          goto LABEL_16;
        *((_QWORD *)&v29 + 1) = v12;
        v30 = v12;
        *(_QWORD *)&v29 = v10;
        v18 = 8 * v12 - 8 * v11 - 8;
        v19 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
                &v29,
                -(v18 >> 3));
        memmove_0((void *)(v19 - v18), &v10[8 * v11], v18);
        v9 = v35;
      }
      v35 = v9 + 1;
      *(_QWORD *)&v10[8 * v11] = v8;
    }
    v2 = lpMem;
    ++v1;
    v3 = (CLegacyRenderTarget **)v31[0];
  }
  v20 = ((char *)v35 - v2) >> 3;
  if ( v20 )
  {
    v31[0] = ((char *)v35 - v2) >> 3;
    if ( v20 == -1 || (v31[1] = v2) == 0LL )
    {
      ((void (__fastcall *)(CRenderTargetManager *, struct COverlayContext *(__fastcall *)(CLegacyRenderTarget *__hidden), struct COverlayContext *(__fastcall *)(CDDisplayRenderTarget *__hidden)))`gsl::details::get_terminate_handler'::`2'::handler)(
        this,
        CLegacyRenderTarget::CollectOverlayCandidates,
        CDDisplayRenderTarget::CollectOverlayCandidates);
      __debugbreak();
    }
    v21 = COverlayContext::ComputeOverlayConfiguration(
            v31,
            CLegacyRenderTarget::CollectOverlayCandidates,
            CDDisplayRenderTarget::CollectOverlayCandidates);
    v4 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x33Au, 0LL);
    v2 = lpMem;
  }
  v22 = ((char *)v35 - v2) >> 3;
  if ( v22 )
    v35 -= v22;
  lpMem = 0LL;
  if ( v2 != v37 && v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  return v4;
}
