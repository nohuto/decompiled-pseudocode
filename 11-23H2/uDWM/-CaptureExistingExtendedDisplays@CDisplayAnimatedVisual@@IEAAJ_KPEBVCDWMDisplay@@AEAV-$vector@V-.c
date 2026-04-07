/*
 * XREFs of ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B740C
 * Callers:
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B77D4 (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18005AF50 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18005AFB8 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800B6D50 (--$_Emplace_reallocate@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7168 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800B8824 (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::CaptureExistingExtendedDisplays(
        CDisplayAnimatedVisual *this,
        __int64 a2,
        struct CDWMDisplay *a3,
        __int64 a4)
{
  CDWMDisplaySet *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rbp
  int v14; // eax
  unsigned int v15; // ebx
  struct tagRECT v16; // xmm6
  CAnimatedTransitionVisual *v17; // rbx
  int v18; // eax
  CAnimatedTransitionVisual **v19; // rdx
  CAnimatedTransitionVisual *v20; // rcx
  CAnimatedTransitionVisual *v22; // [rsp+30h] [rbp-78h] BYREF
  struct tagRECT v23; // [rsp+38h] [rbp-70h] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear(a4);
  v8 = (CDWMDisplaySet *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 40);
  if ( !*(_DWORD *)(v10 + 64) )
    return 0LL;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    v12 = *(_QWORD *)(v11 + 8 * v9);
    if ( !*(_BYTE *)(v12 + 268) && (!a3 || !CDWMDisplay::IsSamePhysicalDisplay(*(CDWMDisplay **)(v11 + 8 * v9), a3)) )
    {
      MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(v8, (const struct CDWMDisplay *)v12);
      if ( MatchedPhysicalDisplayNoRef )
        break;
    }
LABEL_14:
    v9 = (unsigned int)(v9 + 1);
    v10 = *((_QWORD *)this + 40);
    if ( (unsigned int)v9 >= *(_DWORD *)(v10 + 64) )
      return 0LL;
  }
  v24 = *(struct tagRECT *)(v12 + 56);
  v22 = 0LL;
  v14 = CDisplayAnimatedVisual::CaptureAndAddVisual(this, a2, &v24, &v24, &v22);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v23 = *(struct tagRECT *)((char *)MatchedPhysicalDisplayNoRef + 56);
    v16 = v23;
    v17 = v22;
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v22, &v23);
    *(struct tagRECT *)((char *)v17 + 872) = v16;
    v18 = *((_DWORD *)v17 + 24);
    if ( (v18 & 0x1000) == 0 )
    {
      *((_DWORD *)v17 + 24) = v18 | 0x1000;
      CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v17 + 8));
    }
    v19 = *(CAnimatedTransitionVisual ***)(a4 + 8);
    if ( v19 == *(CAnimatedTransitionVisual ***)(a4 + 16) )
    {
      std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
        (const char *)a4,
        (__int64)v19,
        (__int64 *)&v22);
      v20 = v22;
    }
    else
    {
      v20 = 0LL;
      *v19 = v17;
      *(_QWORD *)(a4 + 8) += 8LL;
    }
    if ( v20 )
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v20 + 8));
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x384,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
    (const char *)(unsigned int)v14);
  if ( v22 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v22 + 8));
  return v15;
}
