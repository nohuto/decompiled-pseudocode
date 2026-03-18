/*
 * XREFs of ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180152FAC
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180013630 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800E6EC4 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180154670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$reset@PEAE$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z @ 0x18018BB14 (--$reset@PEAE$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z.c)
 *     ?GetValue@CExpressionValue@@QEBAPEBXXZ @ 0x1801BA4B0 (-GetValue@CExpressionValue@@QEBAPEBXXZ.c)
 *     ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1801F74C4 (-GetPathData@CPathData@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022AA04 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18028CAFC (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x18028DFA0 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18029A654 (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleStartingValue(CKeyframeAnimation *this)
{
  bool v2; // zf
  struct CResource *v4; // rsi
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // ecx
  size_t v12; // rsi
  void *v13; // rax
  void **v14; // r14
  const void *Value; // rax
  _QWORD *v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int ChannelCallbackId; // eax
  __int64 v22; // r9
  int v23; // r10d
  int v24; // eax
  int v25; // [rsp+28h] [rbp-59h]
  _QWORD v26[2]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v27[64]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+27h] BYREF
  int v29; // [rsp+B0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  if ( *((_DWORD *)this + 40) == 11 )
    v2 = *((_QWORD *)this + 43) == 0LL;
  else
    v2 = *((_QWORD *)this + 42) == 0LL;
  if ( !v2 )
    return 0LL;
  v4 = CBaseExpression::ResolveTargetNoRef(this);
  if ( !v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7BF,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)0x88982F04LL);
    return 2291674884LL;
  }
  memset_0(v27, 0, sizeof(v27));
  v5 = *((unsigned int *)this + 47);
  v28 = 0LL;
  v29 = 0;
  v6 = (*(__int64 (__fastcall **)(struct CResource *, __int64, _BYTE *))(*(_QWORD *)v4 + 136LL))(v4, v5, v27);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1986LL;
LABEL_14:
    v10 = (unsigned int)v6;
    goto LABEL_15;
  }
  v9 = *((_QWORD *)this + 25);
  if ( v9 )
  {
    if ( *(_BYTE *)(v9 + 4) )
    {
      v6 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)v27, (const struct SubchannelMaskInfo *)v9);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 1992LL;
        goto LABEL_14;
      }
    }
  }
  v11 = *((_DWORD *)this + 40);
  if ( v29 == v11 )
  {
    if ( v11 == 11 )
    {
      v16 = (_QWORD *)((char *)this + 344);
      wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)this + 43, v28);
      v14 = (void **)((char *)this + 336);
    }
    else
    {
      v12 = (unsigned int)((__int64 (*)(void))GetExpressionTypeByteSize)();
      v13 = MIDL_user_allocate(v12);
      v14 = (void **)((char *)this + 336);
      std::unique_ptr<unsigned char [0]>::reset<unsigned char *,0>((char *)this + 336, v13);
      if ( !*((_QWORD *)this + 42) )
      {
        v7 = -2147024882;
        v8 = 2002LL;
        v10 = 2147942414LL;
        goto LABEL_15;
      }
      Value = CExpressionValue::GetValue((CExpressionValue *)v27);
      memcpy_0(*v14, Value, v12);
      v16 = (_QWORD *)((char *)this + 344);
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
            *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
            0LL);
    if ( v17 && CNotificationResource::ShouldNotify(this) )
    {
      v20 = *((unsigned int *)this + 40);
      if ( (_DWORD)v20 == 11 )
        CPathData::GetPathData(*v16, v26);
      else
        GetExpressionTypeByteSize(v20, v18, v19, *v14);
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
      v26[1] = *((unsigned int *)this + 18);
      v26[0] = ChannelCallbackId;
      v24 = CoreUICallSend(v17, v26, 2LL, 0LL, 10, &unk_18032BF07, 0, v22, v23);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7F6,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
          (const char *)(unsigned int)v24,
          v25);
    }
    v7 = 0;
    goto LABEL_31;
  }
  v7 = -2147024809;
  v8 = 1995LL;
  v10 = 2147942487LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
    (const char *)v10);
LABEL_31:
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v28);
  return v7;
}
