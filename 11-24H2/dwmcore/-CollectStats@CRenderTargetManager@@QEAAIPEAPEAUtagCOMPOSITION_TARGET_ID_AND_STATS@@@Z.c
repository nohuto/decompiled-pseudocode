/*
 * XREFs of ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180103700
 * Callers:
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x1800F36C0 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1800EDFC0 (-GetTargetId@CDDisplayRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?clear_region@?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801032F8 (-clear_region@-$vector_facade@PEAVIRenderTarget@@V-$buffer_impl@PEAVIRenderTarget@@$03$00Vlibera.c)
 *     ?GetStats@CTargetStats@@QEAAX_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x180104EF0 (-GetStats@CTargetStats@@QEAAX_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@_J@Z @ 0x1801B4460 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext.c)
 *     ??$_Emplace_reallocate@AEAPEAVIRenderTarget@@@?$vector@V?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VIRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVIRenderTarget@@@Z @ 0x1801D2A54 (--$_Emplace_reallocate@AEAPEAVIRenderTarget@@@-$vector@V-$com_ptr_t@VIRenderTarget@@Uerr_returnc.c)
 *     ?GetStats@CDDisplayRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1801D5980 (-GetStats@CDDisplayRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18022939C (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vlibe.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@0@0V12@@Z @ 0x18024A5F0 (--$uninitialized_move@V-$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V-$checked_.c)
 *     __std_find_trivial_8 @ 0x180250770 (__std_find_trivial_8.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180277090 (-GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1802770E0 (-GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CRenderTargetManager::CollectStats(
        CRenderTargetManager *this,
        struct tagCOMPOSITION_TARGET_ID_AND_STATS **a2)
{
  int v2; // r12d
  unsigned __int64 v4; // r13
  CLegacyRenderTarget *v5; // rcx
  CDDisplayRenderTarget **v6; // rdi
  bool (__fastcall *v7)(CLegacyRenderTarget *__hidden, unsigned __int64, struct tagCOMPOSITION_TARGET_STATS_2 *); // rax
  CDDisplayRenderTarget *v8; // rcx
  __int64 (*v9)(void); // rax
  const struct tagCOMPOSITION_TARGET_ID *TargetId; // rax
  detail::liberal_expansion_policy *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  signed __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int (__fastcall ****v22)(_QWORD, GUID *, __int64 *); // r13
  int (__fastcall ****v23)(_QWORD, GUID *, __int64 *); // r15
  __int64 *v24; // rcx
  __int64 *v25; // rdx
  struct tagCOMPOSITION_TARGET_ID_AND_STATS *v26; // rcx
  unsigned __int64 result; // rax
  CDDisplayRenderTarget *v28; // rbx
  __int64 v29; // rcx
  int (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // rdi
  bool (__fastcall *v31)(CLegacyRenderTarget *__hidden, unsigned __int64, struct tagCOMPOSITION_TARGET_STATS_2 *); // rax
  CDDisplayRenderTarget *v32; // rcx
  const struct tagCOMPOSITION_TARGET_ID *(__fastcall *v33)(CDDisplayRenderTarget *); // rax
  const struct tagCOMPOSITION_TARGET_ID *v34; // rax
  _QWORD *i; // rbx
  _QWORD *v36; // rdx
  __int64 v37; // r11
  __int64 v38; // rdx
  __int64 v39; // r15
  unsigned __int64 v40; // r9
  signed __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int64 v43; // r10
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  int (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v49; // rcx
  CDDisplayRenderTarget *v50; // rcx
  bool Stats; // al
  signed __int64 v52; // rdi
  __int64 v53; // rax
  CGlobalComposition *v54; // r8
  int v55; // ecx
  const void *v56; // rbx
  signed __int64 v57; // rsi
  __int64 v58; // rax
  __int64 trivial_8; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r10
  unsigned __int64 v63; // rdi
  LPVOID v64; // rax
  __int64 v65; // r8
  __int64 v66; // rdx
  LPVOID v67; // rbx
  CRenderTargetManager *v68; // rcx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rsi
  LPVOID v71; // rax
  __int64 v72; // r8
  __int64 v73; // rdx
  LPVOID v74; // rbx
  CRenderTargetManager *v75; // rcx
  unsigned __int64 v76; // [rsp+20h] [rbp-E0h] BYREF
  BOOL v77; // [rsp+28h] [rbp-D8h]
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v79; // [rsp+40h] [rbp-C0h] BYREF
  signed __int64 v80; // [rsp+50h] [rbp-B0h]
  __int64 v81; // [rsp+60h] [rbp-A0h] BYREF
  int (__fastcall ***v82)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-98h] BYREF
  struct tagCOMPOSITION_TARGET_ID_AND_STATS **v83; // [rsp+70h] [rbp-90h]
  __int128 v84; // [rsp+80h] [rbp-80h] BYREF
  __int64 v85; // [rsp+90h] [rbp-70h]
  __int128 v86; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v87; // [rsp+B0h] [rbp-50h]
  __int128 v88; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v89; // [rsp+D0h] [rbp-30h]
  __int128 v90; // [rsp+E0h] [rbp-20h]
  __int128 v91; // [rsp+F0h] [rbp-10h]
  __int128 v92; // [rsp+100h] [rbp+0h]
  __int64 v93; // [rsp+110h] [rbp+10h]

  v83 = a2;
  LOBYTE(v2) = 0;
  v77 = v2;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v4 = 0xEEEEEEEEEEEEEEEFuLL;
  if ( 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3) )
    *((_QWORD *)this + 24) -= 8 * ((__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3);
  memset_0(&v86, 0, 0x78uLL);
  v5 = *(CLegacyRenderTarget **)this;
  v6 = (CDDisplayRenderTarget **)CDDisplayRenderTarget::GetTargetId;
  if ( *(_QWORD *)this )
  {
    v7 = *(bool (__fastcall **)(CLegacyRenderTarget *__hidden, unsigned __int64, struct tagCOMPOSITION_TARGET_STATS_2 *))(*(_QWORD *)v5 + 136LL);
    if ( v7 == CLegacyRenderTarget::GetStats )
    {
      CTargetStats::GetStats(
        (CLegacyRenderTarget *)((char *)v5 + 32968),
        PerformanceCount.QuadPart,
        (struct tagCOMPOSITION_TARGET_STATS_2 *)&v88);
LABEL_6:
      v8 = (CDDisplayRenderTarget *)(*(_QWORD *)this + 8LL);
      v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 32LL);
      if ( (char *)v9 == (char *)CLegacyRenderTarget::GetTargetId )
      {
        TargetId = (const struct tagCOMPOSITION_TARGET_ID *)CLegacyRenderTarget::GetTargetId(v8);
      }
      else if ( (char *)v9 == (char *)CDDisplayRenderTarget::GetTargetId )
      {
        TargetId = (const struct tagCOMPOSITION_TARGET_ID *)CDDisplayRenderTarget::GetTargetId(v8);
      }
      else if ( (char *)v9 == (char *)CDDisplayRenderTarget::GetTargetId )
      {
        TargetId = CDDisplayRenderTarget::GetTargetId(v8);
      }
      else
      {
        TargetId = (const struct tagCOMPOSITION_TARGET_ID *)v9();
      }
      v12 = *((_QWORD *)this + 24);
      v13 = *((_QWORD *)this + 25);
      v14 = *((_QWORD *)this + 23);
      v86 = *(_OWORD *)TargetId;
      *(_QWORD *)&v87 = *((_QWORD *)TargetId + 2);
      DWORD2(v87) = *((_DWORD *)TargetId + 6);
      LOBYTE(v2) = (_DWORD)v88 != 0;
      v15 = 0xEEEEEEEEEEEEEEEFuLL * ((v12 - v14) >> 3);
      v77 = v88 != 0;
      if ( !(0xEEEEEEEEEEEEEEEFuLL * ((v13 - v12) >> 3)) )
      {
        if ( v15 + 1 < v15 )
          goto LABEL_79;
        v63 = detail::liberal_expansion_policy::expand(v11, 0xEEEEEEEEEEEEEEEFuLL * ((v13 - v14) >> 3), v15 + 1);
        v64 = operator new[](saturated_mul(v63, 0x78uLL));
        v65 = *((_QWORD *)this + 24);
        v66 = *((_QWORD *)this + 23);
        *(_QWORD *)&v79 = v64;
        *((_QWORD *)&v79 + 1) = v15;
        v67 = v64;
        v80 = 0LL;
        v84 = v79;
        v85 = 0LL;
        std::uninitialized_move<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>(
          &v79,
          v66,
          v65,
          &v84);
        v68 = (CRenderTargetManager *)*((_QWORD *)this + 23);
        *((_QWORD *)this + 23) = v67;
        if ( v68 == (CRenderTargetManager *)((char *)this + 208) )
          v68 = 0LL;
        operator delete(v68);
        v14 = *((_QWORD *)this + 23);
        v12 = v14 + 120 * v15;
        *((_QWORD *)this + 24) = v12;
        *((_QWORD *)this + 25) = v14 + 120 * v63;
      }
      v16 = 0xEEEEEEEEEEEEEEEFuLL * ((v12 - v14) >> 3);
      v17 = v16 - v15;
      v18 = v14 + 8 * ((v12 - v14) >> 3);
      if ( !v18 )
        goto LABEL_24;
      v19 = 0xEEEEEEEEEEEEEEEFuLL * ((v12 - v14) >> 3) - v15;
      if ( v17 > 1 )
        v19 = 1LL;
      v20 = v12 - 120 * v19;
      if ( v12 != v20 )
      {
        v61 = v12 - 120;
        *(_OWORD *)v18 = *(_OWORD *)v61;
        *(_OWORD *)(v18 + 16) = *(_OWORD *)(v61 + 16);
        *(_OWORD *)(v18 + 32) = *(_OWORD *)(v61 + 32);
        *(_OWORD *)(v18 + 48) = *(_OWORD *)(v61 + 48);
        *(_OWORD *)(v18 + 64) = *(_OWORD *)(v61 + 64);
        *(_OWORD *)(v18 + 80) = *(_OWORD *)(v61 + 80);
        *(_OWORD *)(v18 + 96) = *(_OWORD *)(v61 + 96);
        *(_QWORD *)(v18 + 112) = *(_QWORD *)(v61 + 112);
        if ( v61 != v20 )
LABEL_24:
          _invalid_parameter_noinfo_noreturn();
      }
      if ( v17 > 1 )
      {
        if ( v16 && (!v14 || v16 < 0) )
          goto LABEL_24;
        *((_QWORD *)&v79 + 1) = v16;
        v80 = v16;
        *(_QWORD *)&v79 = v14;
        v52 = 120 * v16 - 120 * v15 - 120;
        v53 = std::_Get_unwrapped_n<stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *> &,__int64>(
                &v79,
                0x1111111111111111LL * (v52 >> 3));
        memmove_0((void *)(v53 - v52), (const void *)(v14 + 120 * v15), v52);
      }
      *((_QWORD *)this + 24) += 120LL;
      v21 = 120 * v15;
      *(_OWORD *)(v21 + v14) = v86;
      *(_OWORD *)(v21 + v14 + 16) = v87;
      *(_OWORD *)(v21 + v14 + 32) = v88;
      *(_OWORD *)(v21 + v14 + 48) = v89;
      *(_OWORD *)(v21 + v14 + 64) = v90;
      *(_OWORD *)(v21 + v14 + 80) = v91;
      *(_OWORD *)(v21 + v14 + 96) = v92;
      *(_QWORD *)(v21 + v14 + 112) = v93;
      goto LABEL_15;
    }
    if ( v7 == CDDisplayRenderTarget::GetStats )
    {
      CTargetStats::GetStats(
        (CLegacyRenderTarget *)((char *)v5 + 32984),
        PerformanceCount.QuadPart,
        (struct tagCOMPOSITION_TARGET_STATS_2 *)&v88);
      goto LABEL_6;
    }
    if ( v7(v5, PerformanceCount.QuadPart, (struct tagCOMPOSITION_TARGET_STATS_2 *)&v88) )
      goto LABEL_6;
  }
LABEL_15:
  *((_BYTE *)this + 744) = 1;
  v6 = (CDDisplayRenderTarget **)*((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 4);
  while ( v6 != (CDDisplayRenderTarget **)v4 )
  {
    v28 = *v6;
    if ( *v6 == *(CDDisplayRenderTarget **)this )
      goto LABEL_26;
    v31 = *(bool (__fastcall **)(CLegacyRenderTarget *__hidden, unsigned __int64, struct tagCOMPOSITION_TARGET_STATS_2 *))(*(_QWORD *)v28 + 136LL);
    if ( v31 == CLegacyRenderTarget::GetStats )
    {
      CTargetStats::GetStats(
        (CDDisplayRenderTarget *)((char *)v28 + 32968),
        PerformanceCount.QuadPart,
        (struct tagCOMPOSITION_TARGET_STATS_2 *)&v88);
    }
    else
    {
      v50 = *v6;
      if ( v31 == CDDisplayRenderTarget::GetStats )
        Stats = CDDisplayRenderTarget::GetStats(
                  v50,
                  PerformanceCount.QuadPart,
                  (struct tagCOMPOSITION_TARGET_STATS_2 *)&v88);
      else
        Stats = v31(v50, PerformanceCount.QuadPart, (struct tagCOMPOSITION_TARGET_STATS_2 *)&v88);
      if ( !Stats )
        goto LABEL_26;
    }
    v32 = (CDDisplayRenderTarget *)((char *)v28 + 8);
    v33 = *(const struct tagCOMPOSITION_TARGET_ID *(__fastcall **)(CDDisplayRenderTarget *))(*((_QWORD *)v28 + 1) + 32LL);
    if ( (char *)v33 != (char *)CDDisplayRenderTarget::GetTargetId )
    {
      if ( (char *)v33 == (char *)CLegacyRenderTarget::GetTargetId )
      {
        v34 = (const struct tagCOMPOSITION_TARGET_ID *)CLegacyRenderTarget::GetTargetId(v32);
        goto LABEL_53;
      }
      goto LABEL_80;
    }
    v34 = (const struct tagCOMPOSITION_TARGET_ID *)CDDisplayRenderTarget::GetTargetId(v32);
    while ( 1 )
    {
LABEL_53:
      v37 = *((_QWORD *)this + 24);
      v38 = *((_QWORD *)this + 25);
      v39 = *((_QWORD *)this + 23);
      v86 = *(_OWORD *)v34;
      *(_QWORD *)&v87 = *((_QWORD *)v34 + 2);
      DWORD2(v87) = *((_DWORD *)v34 + 6);
      v2 = (unsigned __int8)v2;
      if ( (_DWORD)v88 )
        v2 = 1;
      v40 = 0xEEEEEEEEEEEEEEEFuLL * ((v37 - v39) >> 3);
      v77 = v2;
      v76 = v40;
      if ( 0xEEEEEEEEEEEEEEEFuLL * ((v38 - v37) >> 3) )
        break;
      if ( v40 + 1 >= v40 )
      {
        v69 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)0xEEEEEEEEEEEEEEEFLL,
                0xEEEEEEEEEEEEEEEFuLL * ((v38 - v39) >> 3),
                v40 + 1);
        v70 = v69;
        v71 = operator new[](saturated_mul(v69, 0x78uLL));
        v72 = *((_QWORD *)this + 24);
        v73 = *((_QWORD *)this + 23);
        *(_QWORD *)&v79 = v71;
        v74 = v71;
        *((_QWORD *)&v79 + 1) = v76;
        v80 = 0LL;
        v84 = v79;
        v85 = 0LL;
        std::uninitialized_move<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>(
          &v79,
          v73,
          v72,
          &v84);
        v75 = (CRenderTargetManager *)*((_QWORD *)this + 23);
        *((_QWORD *)this + 23) = v74;
        if ( v75 == (CRenderTargetManager *)((char *)this + 208) )
          v75 = 0LL;
        operator delete(v75);
        v39 = *((_QWORD *)this + 23);
        v40 = v76;
        v37 = v39 + 120 * v76;
        *((_QWORD *)this + 24) = v37;
        *((_QWORD *)this + 25) = v39 + 120 * v70;
        break;
      }
LABEL_79:
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_80:
      if ( v33 == CDDisplayRenderTarget::GetTargetId )
        v34 = CDDisplayRenderTarget::GetTargetId(v32);
      else
        v34 = v33(v32);
    }
    v41 = 0xEEEEEEEEEEEEEEEFuLL * ((v37 - v39) >> 3);
    v42 = v41 - v40;
    v43 = v39 + 8 * ((v37 - v39) >> 3);
    if ( !v43 )
      goto LABEL_24;
    v44 = 0xEEEEEEEEEEEEEEEFuLL * ((v37 - v39) >> 3) - v40;
    if ( v42 > 1 )
      v44 = 1LL;
    v45 = v37 - 120 * v44;
    v46 = 1LL;
    if ( v37 != v45 )
    {
      v62 = v43 + 120;
      do
      {
        v37 -= 120LL;
        if ( !v46 )
          goto LABEL_24;
        --v46;
        v62 -= 120LL;
        if ( v46 )
          goto LABEL_24;
        *(_OWORD *)v62 = *(_OWORD *)v37;
        *(_OWORD *)(v62 + 16) = *(_OWORD *)(v37 + 16);
        *(_OWORD *)(v62 + 32) = *(_OWORD *)(v37 + 32);
        *(_OWORD *)(v62 + 48) = *(_OWORD *)(v37 + 48);
        *(_OWORD *)(v62 + 64) = *(_OWORD *)(v37 + 64);
        *(_OWORD *)(v62 + 80) = *(_OWORD *)(v37 + 80);
        *(_OWORD *)(v62 + 96) = *(_OWORD *)(v37 + 96);
        *(_QWORD *)(v62 + 112) = *(_QWORD *)(v37 + 112);
      }
      while ( v37 != v45 );
    }
    if ( v42 > 1 )
    {
      if ( v41 && (!v39 || v41 < 0) )
        goto LABEL_24;
      *((_QWORD *)&v79 + 1) = v41;
      v80 = v41;
      *(_QWORD *)&v79 = v39;
      v56 = (const void *)(v39 + 120 * v40);
      v57 = 120 * v41 - 120 * v40 - 120;
      v58 = std::_Get_unwrapped_n<stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *> &,__int64>(
              &v79,
              0x1111111111111111LL * (v57 >> 3));
      memmove_0((void *)(v58 - v57), v56, v57);
      v40 = v76;
    }
    *((_QWORD *)this + 24) += 120LL;
    v47 = 120 * v40;
    *(_OWORD *)(v47 + v39) = v86;
    *(_OWORD *)(v47 + v39 + 16) = v87;
    *(_OWORD *)(v47 + v39 + 32) = v88;
    *(_OWORD *)(v47 + v39 + 48) = v89;
    *(_OWORD *)(v47 + v39 + 64) = v90;
    *(_OWORD *)(v47 + v39 + 80) = v91;
    *(_OWORD *)(v47 + v39 + 96) = v92;
    *(_QWORD *)(v47 + v39 + 112) = v93;
LABEL_26:
    ++v6;
  }
  *((_BYTE *)this + 744) = 0;
  v22 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 21);
  v23 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 20);
  if ( v23 == v22 )
    goto LABEL_18;
  while ( 2 )
  {
    v29 = *((_QWORD *)this + 17);
    v30 = *v23;
    v82 = *v23;
    if ( v29 != *((_QWORD *)this + 18) )
    {
      trivial_8 = _std_find_trivial_8(v29, *((_QWORD *)this + 18), v30);
      v60 = *((_QWORD *)this + 18);
      if ( trivial_8 != v60 )
      {
        memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v60 - (trivial_8 + 8));
        *((_QWORD *)this + 18) -= 8LL;
        goto LABEL_31;
      }
    }
    if ( *((_BYTE *)this + 744) )
    {
      if ( *((_QWORD *)this + 21) == *((_QWORD *)this + 22) )
      {
        std::vector<wil::com_ptr_t<IRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<IRenderTarget * &>(
          (char *)this + 160,
          *((_QWORD *)this + 21),
          &v82);
      }
      else
      {
        wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
          *((_QWORD **)this + 21),
          (__int64)v30);
        *((_QWORD *)this + 21) += 8LL;
      }
      goto LABEL_31;
    }
    v76 = 0LL;
    if ( (**v30)(v30, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, (__int64 *)&v76) >= 0 )
    {
      v36 = (_QWORD *)*((_QWORD *)this + 3);
      v49 = v76;
      while ( v36 != *((_QWORD **)this + 4) && *v36 != v76 )
        ++v36;
      if ( v36 == *((_QWORD **)this + 4) )
        goto LABEL_68;
      v54 = g_pComposition;
      v55 = CCommonRegistryData::m_compositorClockPolicy;
      if ( *v36 == *(_QWORD *)this )
      {
        *(_QWORD *)this = 0LL;
        if ( !v55 )
          *((_BYTE *)v54 + 6468) = 1;
      }
      if ( *v36 == *((_QWORD *)this + 1) )
      {
        *((_QWORD *)this + 1) = 0LL;
        if ( v55 == 1 )
          *((_BYTE *)v54 + 6468) = 1;
      }
      *((_BYTE *)this + 745) = 1;
      *((_BYTE *)this + 750) = 1;
      detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 24,
        ((__int64)v36 - *((_QWORD *)this + 3)) >> 3,
        1LL,
        v36);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v76);
    }
    else
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 10); ; ++i )
      {
        v36 = i;
        if ( i == *((_QWORD **)this + 11) || (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*i == v30 )
          break;
      }
      if ( i != *((_QWORD **)this + 11) )
      {
        v48 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*i;
        v81 = 0LL;
        if ( (**v48)(v48, &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e, &v81) >= 0 )
          *((_BYTE *)this + 750) = 1;
        detail::vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)this + 10,
          ((__int64)i - *((_QWORD *)this + 10)) >> 3,
          1LL);
        if ( v81 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
      }
      v49 = v76;
LABEL_68:
      if ( v49 )
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v49 + 16LL))(v49, v36);
    }
LABEL_31:
    if ( ++v23 != v22 )
      continue;
    break;
  }
  LOBYTE(v2) = v77;
LABEL_18:
  v24 = (__int64 *)*((_QWORD *)this + 20);
  v25 = (__int64 *)*((_QWORD *)this + 21);
  if ( v24 != v25 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v24,
      v25);
    *((_QWORD *)this + 21) = *((_QWORD *)this + 20);
  }
  if ( (_BYTE)v2 && !*((_BYTE *)this + 753) && g_pComposition && *((_BYTE *)g_pComposition + 6473) )
    CComposition::ScheduleCompositionPass((__int64)g_pComposition, 0x3E8u, 0x80u);
  v26 = (struct tagCOMPOSITION_TARGET_ID_AND_STATS *)*((_QWORD *)this + 23);
  result = 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(*((_QWORD *)this + 24) - (_QWORD)v26) >> 3);
  if ( !result )
    v26 = 0LL;
  *v83 = v26;
  return result;
}
