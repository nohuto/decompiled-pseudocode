/*
 * XREFs of ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AB4A4
 * Callers:
 *     ?OnInput@EdgyLegacyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801A8C00 (-OnInput@EdgyLegacyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespo.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180021EFC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x1801AAE00 (-Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ.c)
 *     ?QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z @ 0x1801ABEA4 (-QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801AC4A0 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801AC610 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     ?HasCandidates@EdgyImpl@@QEAA_NXZ @ 0x1801AC70C (-HasCandidates@EdgyImpl@@QEAA_NXZ.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801AC820 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     ?EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z @ 0x1801C6A0C (-EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x1801C6A8C (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnContextualInput(
        EdgyProcessorTarget *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  _DWORD *v11; // r14
  __int128 v12; // xmm0
  SessionBasedPointerDeviceArbitration *v13; // rcx
  __int128 v14; // xmm1
  int v15; // eax
  const char *v16; // r9
  unsigned int v17; // edi
  _DWORD *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r8
  EdgyImpl *v21; // rcx
  __int64 v22; // rcx
  const char *v23; // r9
  __int64 v24; // rdx
  __m256i v25; // [rsp+28h] [rbp-39h] BYREF
  __int16 v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 v27; // [rsp+50h] [rbp-11h]
  __int64 v28; // [rsp+58h] [rbp-9h]
  __int64 v29; // [rsp+60h] [rbp-1h]
  __int128 v30; // [rsp+68h] [rbp+7h]
  __int128 v31; // [rsp+78h] [rbp+17h]
  __int64 v32; // [rsp+88h] [rbp+27h]
  __int64 v33; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v25.m256i_i32[0] = -1;
  *(_OWORD *)((char *)v25.m256i_i64 + 4) = 0uLL;
  v25.m256i_i64[3] = 0LL;
  if ( !a2 )
  {
    v8 = 226LL;
LABEL_3:
    v9 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( !a4 )
  {
    v8 = 227LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)a3 + 26) == 2 )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 15) + 112LL) )
    {
      *((_DWORD *)a4 + 2) = 2;
      v24 = *((_QWORD *)this + 15);
      if ( *(_DWORD *)(v24 + 96) != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x148,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
          (const char *)a4);
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)a4 + 10, (_QWORD *)(v24 + 112));
      return 0LL;
    }
    goto LABEL_48;
  }
  if ( *((_DWORD *)a3 + 26) == 3 )
  {
LABEL_48:
    *((_DWORD *)a4 + 2) = 3;
    return 0LL;
  }
  if ( EdgyProcessorTarget::QualifyEdgyInputReport(this, a2, (struct EdgyPointerInfo *)&v25) )
  {
    v12 = *(_OWORD *)v25.m256i_i8;
    v13 = (SessionBasedPointerDeviceArbitration *)*((_QWORD *)this + 17);
    v14 = *(_OWORD *)&v25.m256i_u64[2];
    *((_DWORD *)this + 9) = *((_DWORD *)a3 + 26);
    *((_OWORD *)this + 3) = v12;
    *((_OWORD *)this + 4) = v14;
    v15 = SessionBasedPointerDeviceArbitration::OnInputReport(v13, a2);
    v17 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v15);
      return v17;
    }
    v18 = (_DWORD *)((char *)this + 32);
    if ( *((_DWORD *)this + 8) != 1 )
    {
      v19 = *((_QWORD *)this + 22);
      if ( v19 )
      {
        v20 = *((unsigned int *)a2 + 79);
        if ( (_DWORD)v20 != 1 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x37E,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
            v16);
        if ( (int)ProcessPointerFramesInteractionContext(v19, 1LL, v20, (char *)a2 + 320) < 0 )
          EdgyProcessorTarget::InteractionContext::Configure((EdgyProcessorTarget *)((char *)this + 168));
      }
    }
    v11 = (_DWORD *)((char *)this + 32);
    if ( *v18 != 1 && *((_DWORD *)a2 + 2) >= *((_DWORD *)this + 10) && !*v18 )
    {
      v21 = (EdgyImpl *)(*((_QWORD *)this + 15) + 80LL);
      *v18 = 1;
      EdgyImpl::Reset(v21);
    }
  }
  else
  {
    v11 = (_DWORD *)((char *)this + 32);
    *((_DWORD *)this + 8) = 1;
  }
  if ( *v11 == 3 )
  {
    v22 = *((_QWORD *)this + 15);
    v26 = 0;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v32 = 0LL;
    v31 = 0LL;
    v33 = 0LL;
    if ( EdgyImpl::GetCandidateEdgyDetectedInfo((EdgyImpl *)(v22 + 80), (struct CandidateEdgyDetectedInfo *)&v26) )
    {
      if ( !v27 )
        *v11 = 2;
    }
    else
    {
      *v11 = 1;
      *((_DWORD *)this + 20) = -1;
      *(_QWORD *)((char *)this + 84) = 0LL;
      *(_QWORD *)((char *)this + 92) = 0LL;
      *((_QWORD *)this + 13) = 0LL;
      EdgyImpl::Reset((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL));
    }
  }
  if ( *v11 == 2 )
  {
    if ( EdgyImpl::EnsureInputTargeting((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL), a4) < 0 )
      *((_DWORD *)a4 + 2) = 0;
    if ( *((_DWORD *)a4 + 2) == 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x157,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        v23);
    v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
           *((SessionBasedPointerDeviceArbitration **)this + 17),
           *((_DWORD *)a2 + 1));
    if ( v9 < 0 )
    {
      v8 = 357LL;
      goto LABEL_4;
    }
  }
  else if ( !*v11 || *v11 == 3 )
  {
    if ( EdgyImpl::HasCandidates((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL)) && (*((_BYTE *)a2 + 332) & 4) != 0 )
    {
      *((_DWORD *)a4 + 2) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 2) = 0;
      v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
             *((SessionBasedPointerDeviceArbitration **)this + 17),
             *((_DWORD *)a2 + 1));
      if ( v9 < 0 )
      {
        v8 = 383LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
    v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(
           *((SessionBasedPointerDeviceArbitration **)this + 17),
           *((_DWORD *)a2 + 1));
    if ( v9 < 0 )
    {
      v8 = 406LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
