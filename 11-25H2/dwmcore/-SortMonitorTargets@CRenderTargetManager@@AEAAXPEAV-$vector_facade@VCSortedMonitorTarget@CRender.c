/*
 * XREFs of ?SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180140050
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x18013EEDC (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x18013FF0C (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCSortedMonitorTarget@CRenderTargetManager@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCSortedMonitorTarget@CRenderTargetManager@@@stdext@@_J@Z @ 0x180140000 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVCSortedMonitorTarget@CRenderTargetManager@@.c)
 *     ?IsOccluded@CTargetStats@@QEBA_NXZ @ 0x1801405F4 (-IsOccluded@CTargetStats@@QEBA_NXZ.c)
 *     ?GetTargetTime@CTargetStats@@QEAA_K_K0@Z @ 0x180140604 (-GetTargetTime@CTargetStats@@QEAA_K_K0@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?GetTargetTime@CDDisplayRenderTarget@@UEAA_K_K0@Z @ 0x180210C70 (-GetTargetTime@CDDisplayRenderTarget@@UEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed __int64 __fastcall CRenderTargetManager::SortMonitorTargets(__int64 a1, signed __int64 *a2)
{
  signed __int64 v2; // r14
  detail::liberal_expansion_policy *v5; // rcx
  signed __int64 result; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r13
  signed __int64 v9; // rdx
  CDDisplayRenderTarget *v10; // r12
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _OWORD *v14; // rbx
  __int64 v15; // rax
  _OWORD *v16; // r10
  signed __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned __int64 *v20; // rax
  __int64 v21; // rcx
  CDDisplayRenderTarget **v22; // rdi
  CDDisplayRenderTarget **v23; // rax
  __int64 v24; // r11
  _OWORD *v25; // r9
  signed __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  _OWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned __int64 (__fastcall *v35)(CLegacyRenderTarget *, unsigned __int64, unsigned __int64); // rax
  __int64 TargetTime; // rax
  unsigned __int64 v37; // rax
  LPVOID v38; // rax
  const void *v39; // rbx
  signed __int64 v40; // rdi
  signed __int64 v41; // r14
  signed __int64 v42; // rdi
  void *v43; // rax
  signed __int64 *v44; // rcx
  unsigned __int64 v45; // rax
  SIZE_T v46; // r10
  unsigned __int64 v47; // r12
  SIZE_T v48; // rax
  LPVOID v49; // rax
  const void *v50; // rbx
  signed __int64 v51; // r14
  signed __int64 v52; // r15
  void *v53; // rax
  signed __int64 *v54; // rdx
  signed __int64 *v55; // rcx
  __int64 v56; // r12
  _OWORD *v57; // rbx
  _OWORD *v58; // r8
  CDDisplayRenderTarget *v59; // [rsp+28h] [rbp-29h]
  CDDisplayRenderTarget **v60; // [rsp+30h] [rbp-21h]
  __int128 v61; // [rsp+38h] [rbp-19h] BYREF
  unsigned __int64 v62; // [rsp+48h] [rbp-9h]
  __int128 v63; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int64 v64; // [rsp+68h] [rbp+17h]
  signed __int64 v65; // [rsp+80h] [rbp+2Fh]
  unsigned __int64 QuadPart; // [rsp+B8h] [rbp+67h] BYREF
  unsigned __int64 v67; // [rsp+C8h] [rbp+77h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+D0h] [rbp+7Fh] BYREF

  v5 = *(detail::liberal_expansion_policy **)(a1 + 24);
  result = (__int64)(*(_QWORD *)(a1 + 32) - (_QWORD)v5) >> 3;
  if ( result )
  {
    v65 = v2;
    if ( result == 1 )
    {
      v7 = a2[1];
      v8 = 0LL;
      v2 = *a2;
      v9 = a2[2];
      v10 = *(CDDisplayRenderTarget **)v5;
      v11 = (v7 - v2) >> 4;
      if ( !((v9 - v7) >> 4) )
      {
        while ( v11 + 1 < v11 )
        {
LABEL_40:
          std::_Xoverflow_error("overflow");
          __debugbreak();
        }
        QuadPart = detail::liberal_expansion_policy::expand(v5, (v9 - v2) >> 4, v11 + 1);
        v38 = operator new[](saturated_mul(QuadPart, 0x10uLL));
        v39 = (const void *)*a2;
        v40 = a2[1];
        v41 = (signed __int64)v38;
        *(_QWORD *)&v61 = v38;
        v42 = v40 - (_QWORD)v39;
        *((_QWORD *)&v61 + 1) = v11;
        v62 = v8;
        v63 = v61;
        v64 = v8;
        v43 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CRenderTargetManager::CSortedMonitorTarget *> &,__int64>(
                        &v63,
                        v42 >> 4);
        memmove_0(v43, v39, v42);
        v44 = (signed __int64 *)*a2;
        *a2 = v41;
        if ( v44 == a2 + 3 )
          v44 = (signed __int64 *)v8;
        operator delete(v44);
        v2 = *a2;
        v7 = *a2 + 16 * v11;
        v45 = *a2 + 16 * QuadPart;
        a2[1] = v7;
        a2[2] = v45;
      }
      v12 = (v7 - v2) >> 4;
      v13 = v12 - v11;
      v14 = (_OWORD *)(16 * v12 + v2);
      if ( !v14 )
        goto LABEL_15;
      v15 = ((v7 - v2) >> 4) - v11;
      if ( v13 > 1 )
        v15 = 1LL;
      result = 16 * v15;
      v16 = (_OWORD *)(v7 - result);
      if ( v7 != v7 - result )
      {
        v58 = (_OWORD *)(v7 - 16);
        *v14 = *v58;
        if ( v58 != v16 )
          goto LABEL_15;
      }
      if ( v13 > 1 )
      {
        if ( v12 && (!v2 || v12 < 0) )
          goto LABEL_15;
        *((_QWORD *)&v61 + 1) = v12;
        v62 = v12;
        *(_QWORD *)&v61 = v2;
        v17 = 16 * v12 - 16 * v11 - 16;
        v18 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CRenderTargetManager::CSortedMonitorTarget *> &,__int64>(
                &v61,
                -(v17 >> 4));
        result = (signed __int64)memmove_0((void *)(v18 - v17), (const void *)(v2 + 16 * v11), v17);
      }
      a2[1] += 16LL;
      v19 = 2 * v11;
      *(_QWORD *)(v2 + 8 * v19) = v10;
      *(_QWORD *)(v2 + 8 * v19 + 8) = v8;
    }
    else
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v20 = (unsigned __int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 39) + 24LL))(*((_QWORD *)g_pComposition + 39));
      v22 = *(CDDisplayRenderTarget ***)(a1 + 24);
      v67 = *v20;
      v23 = *(CDDisplayRenderTarget ***)(a1 + 32);
      v60 = v23;
      while ( 1 )
      {
        v24 = 1LL;
        if ( v22 == v23 )
          break;
        v25 = (_OWORD *)a2[1];
        v26 = a2[2];
        v11 = *a2;
        v10 = *v22;
        v27 = (__int64)v25 - *a2;
        QuadPart = PerformanceCount.QuadPart;
        v8 = v27 >> 4;
        v59 = v10;
        if ( !((v26 - (__int64)v25) >> 4) )
        {
          if ( v8 + 1 < v8 )
            goto LABEL_40;
          v47 = detail::liberal_expansion_policy::expand(
                  (detail::liberal_expansion_policy *)v21,
                  (__int64)(v26 - v11) >> 4,
                  v8 + 1);
          v48 = 16 * v47;
          if ( !is_mul_ok(v47, 0x10uLL) )
            v48 = v46;
          v49 = operator new[](v48);
          v50 = (const void *)*a2;
          v51 = a2[1];
          v52 = (signed __int64)v49;
          *(_QWORD *)&v61 = v49;
          v2 = v51 - (_QWORD)v50;
          *((_QWORD *)&v61 + 1) = v8;
          v62 = 0LL;
          v63 = v61;
          v64 = 0LL;
          v53 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CRenderTargetManager::CSortedMonitorTarget *> &,__int64>(
                          &v63,
                          v2 >> 4);
          memmove_0(v53, v50, v2);
          v54 = (signed __int64 *)*a2;
          v55 = 0LL;
          *a2 = v52;
          if ( v54 != a2 + 3 )
            v55 = v54;
          operator delete(v55);
          v11 = *a2;
          v24 = 1LL;
          v25 = (_OWORD *)(*a2 + 16 * v8);
          v56 = *a2 + 16 * v47;
          a2[1] = (signed __int64)v25;
          a2[2] = v56;
          v10 = v59;
        }
        v28 = (__int64)((__int64)v25 - v11) >> 4;
        v29 = v28 - v8;
        v30 = v11 + 16 * v28;
        if ( !v30 )
          goto LABEL_15;
        v31 = ((__int64)((__int64)v25 - v11) >> 4) - v8;
        if ( v29 > 1 )
          v31 = 1LL;
        v32 = &v25[-v31];
        if ( v25 != v32 )
        {
          v57 = (_OWORD *)(v30 + 16);
          while ( 1 )
          {
            --v25;
            if ( !v24 )
              break;
            --v24;
            --v57;
            if ( v24 )
              break;
            *v57 = *v25;
            if ( v25 == v32 )
              goto LABEL_23;
          }
LABEL_15:
          _invalid_parameter_noinfo_noreturn();
        }
LABEL_23:
        if ( v29 > 1 )
        {
          if ( v28 && (!v11 || v28 < 0) )
            goto LABEL_15;
          *((_QWORD *)&v61 + 1) = v28;
          v62 = v28;
          *(_QWORD *)&v61 = v11;
          v2 = 16 * v28 - 16 - 16 * v8;
          v33 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CRenderTargetManager::CSortedMonitorTarget *> &,__int64>(
                  &v61,
                  -(v2 >> 4));
          memmove_0((void *)(v33 - v2), (const void *)(v11 + 16 * v8), v2);
        }
        a2[1] += 16LL;
        v34 = 2 * v8;
        *(_QWORD *)(v11 + 8 * v34) = v10;
        v35 = *(unsigned __int64 (__fastcall **)(CLegacyRenderTarget *, unsigned __int64, unsigned __int64))(*(_QWORD *)v10 + 128LL);
        if ( v35 == CLegacyRenderTarget::GetTargetTime )
        {
          if ( CTargetStats::IsOccluded((CDDisplayRenderTarget *)((char *)v10 + 33352)) )
            TargetTime = 0LL;
          else
            TargetTime = CTargetStats::GetTargetTime((CDDisplayRenderTarget *)((char *)v10 + 33352), v67, QuadPart);
        }
        else if ( v35 == CDDisplayRenderTarget::GetTargetTime )
        {
          TargetTime = CDDisplayRenderTarget::GetTargetTime(v10, v67, QuadPart);
        }
        else
        {
          TargetTime = v35(v10, v67, QuadPart);
        }
        *(_QWORD *)(v11 + 8 * v34 + 8) = TargetTime;
        if ( !TargetTime )
        {
          v21 = -1LL;
          *(_QWORD *)(v11 + 8 * v34 + 8) = -1LL;
        }
        v23 = v60;
        ++v22;
      }
      v37 = *a2;
      QuadPart = a2[1];
      v67 = v37;
      return std::_Sort_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
               (signed __int64 *)&v67,
               (__int64 *)&QuadPart,
               (__int64)(QuadPart - v37) >> 4,
               0LL);
    }
  }
  return result;
}
