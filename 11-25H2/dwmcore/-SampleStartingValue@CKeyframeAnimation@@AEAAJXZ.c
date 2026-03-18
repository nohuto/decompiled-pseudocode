/*
 * XREFs of ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18003A6F0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180039DD0 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800F1914 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18003D670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180103E3C (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?GetValue@CExpressionValue@@QEBAPEBXXZ @ 0x1801CB8D0 (-GetValue@CExpressionValue@@QEBAPEBXXZ.c)
 *     ??$reset@PEAE$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z @ 0x1801D5AF8 (--$reset@PEAE$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z.c)
 *     ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1802034C4 (-GetPathData@CPathData@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180236804 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x180297F6C (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x1802993D0 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802A4414 (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleStartingValue(CKeyframeAnimation *this)
{
  bool v2; // zf
  struct CResource *v4; // rsi
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  size_t ExpressionTypeByteSize; // rsi
  void *v15; // rax
  void **v16; // r14
  const void *Value; // rax
  _QWORD *v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int ChannelCallbackId; // eax
  __int64 v24; // r9
  int v25; // r10d
  int v26; // eax
  int v27; // [rsp+28h] [rbp-59h]
  int v28; // [rsp+28h] [rbp-59h]
  _QWORD v29[2]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v30[64]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+27h] BYREF
  int v32; // [rsp+B0h] [rbp+2Fh]
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
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)0x88982F04LL,
      v27);
    return 2291674884LL;
  }
  memset_0(v30, 0, sizeof(v30));
  v5 = *((unsigned int *)this + 47);
  v31 = 0LL;
  v32 = 0;
  v6 = (*(__int64 (__fastcall **)(struct CResource *, __int64, _BYTE *))(*(_QWORD *)v4 + 136LL))(v4, v5, v30);
  v9 = v6;
  if ( v6 < 0 )
  {
    v10 = 1986LL;
LABEL_14:
    v12 = (unsigned int)v6;
    goto LABEL_15;
  }
  v11 = *((_QWORD *)this + 25);
  if ( v11 )
  {
    if ( *(_BYTE *)(v11 + 4) )
    {
      v6 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)v30, (const struct SubchannelMaskInfo *)v11);
      v9 = v6;
      if ( v6 < 0 )
      {
        v10 = 1992LL;
        goto LABEL_14;
      }
    }
  }
  v13 = *((unsigned int *)this + 40);
  if ( v32 == (_DWORD)v13 )
  {
    if ( (_DWORD)v13 == 11 )
    {
      v18 = (_QWORD *)((char *)this + 344);
      wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((char *)this + 344, v31);
      v16 = (void **)((char *)this + 336);
    }
    else
    {
      ExpressionTypeByteSize = (unsigned int)GetExpressionTypeByteSize(v13, v11, v7, v8);
      v15 = MIDL_user_allocate(ExpressionTypeByteSize);
      v16 = (void **)((char *)this + 336);
      std::unique_ptr<unsigned char [0]>::reset<unsigned char *,0>((char *)this + 336, v15);
      if ( !*((_QWORD *)this + 42) )
      {
        v9 = -2147024882;
        v10 = 2002LL;
        v12 = 2147942414LL;
        goto LABEL_15;
      }
      Value = CExpressionValue::GetValue((CExpressionValue *)v30);
      memcpy_0(*v16, Value, ExpressionTypeByteSize);
      v18 = (_QWORD *)((char *)this + 344);
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
            *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
            0LL);
    if ( v19 && CNotificationResource::ShouldNotify(this) )
    {
      v22 = *((unsigned int *)this + 40);
      if ( (_DWORD)v22 == 11 )
        CPathData::GetPathData(*v18, v29);
      else
        GetExpressionTypeByteSize(v22, v20, v21, *v16);
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
      v29[1] = *((unsigned int *)this + 18);
      v29[0] = ChannelCallbackId;
      v26 = CoreUICallSend(v19, v29, 2LL, 0LL, 10, &unk_180336E47, 0, v24, v25);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7F6,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
          (const char *)(unsigned int)v26,
          v28);
    }
    v9 = 0;
    goto LABEL_31;
  }
  v9 = -2147024809;
  v10 = 1995LL;
  v12 = 2147942487LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
    (const char *)v12,
    v27);
LABEL_31:
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v31);
  return v9;
}
