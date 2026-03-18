/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180245A14
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18005B4B0 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?reset@?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEAVKeyframeSequence@@@Z @ 0x18005D35C (-reset@-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAXPEA.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800604F0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180103E3C (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18019C774 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$reset@PEAE$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z @ 0x1801D5AF8 (--$reset@PEAE$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1801E6588 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1801EF898 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802A4414 (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x1802A8A74 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802AFDFC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  KeyframeSequence **v3; // r13
  unsigned int v7; // edx
  int v8; // edi
  int v9; // r9d
  CSharedSectionBase *Resource; // r12
  unsigned int v11; // edx
  __int64 v12; // rax
  void **v13; // r15
  CSharedSectionBase *v14; // rax
  const void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  const void *v20; // rdi
  unsigned int ExpressionTypeByteSize; // eax
  int v22; // r9d
  unsigned int v23; // r14d
  void *v24; // rax
  void *v25; // r14
  gsl::details *v26; // rcx
  __int64 v27; // rax
  const void *v28; // r14
  unsigned int v29; // r14d
  bool v30; // zf
  int v31; // eax
  unsigned int v33; // [rsp+20h] [rbp-48h]
  unsigned int v34; // [rsp+20h] [rbp-48h]
  SIZE_T v35[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (KeyframeSequence **)((char *)this + 352);
  if ( *((_QWORD *)this + 44) || *((_QWORD *)this + 51) )
  {
    v8 = -2003303421;
    v31 = 213;
    goto LABEL_46;
  }
  v7 = *((_DWORD *)a3 + 3);
  if ( !v7 )
  {
    v34 = 219;
LABEL_5:
    v8 = -2003303421;
    v9 = -2003303421;
LABEL_48:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v34, 0LL);
LABEL_49:
    std::unique_ptr<KeyframeSequence>::reset(v3, 0LL);
    return (unsigned int)v8;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v34 = 225;
    goto LABEL_5;
  }
  if ( *((unsigned int *)a3 + 5) < 48 * (unsigned __int64)*((unsigned int *)a3 + 2) )
  {
    v34 = 231;
    goto LABEL_5;
  }
  Resource = (CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, v7, 0x9Cu);
  if ( !Resource )
  {
    v34 = 238;
    goto LABEL_5;
  }
  v11 = *((_DWORD *)a3 + 11);
  if ( v11 )
  {
    v12 = CResourceTable::GetResource((__int64)a2, v11, 2u);
    if ( !v12 || *((_DWORD *)a3 + 8) != 4 )
    {
      v34 = 251;
      goto LABEL_5;
    }
    *((_QWORD *)this + 51) = v12;
  }
  *((_DWORD *)this + 123) = *((_DWORD *)a3 + 2);
  v8 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  if ( v8 < 0 )
  {
    v31 = 258;
    goto LABEL_46;
  }
  if ( *((_DWORD *)a3 + 14) )
  {
    v13 = (void **)((char *)this + 336);
    if ( *((_QWORD *)this + 42) || *((_QWORD *)this + 43) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x108,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
        (const char *)0x8007029CLL,
        v33);
    v14 = (CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 12), 0x9Cu);
    if ( v14 )
    {
      v15 = CSharedSectionBase::ResolveAllocation(v14, *((unsigned int *)a3 + 13), *((unsigned int *)a3 + 14));
      v19 = *((unsigned int *)this + 40);
      v20 = v15;
      if ( (_DWORD)v19 == 11 )
      {
        v25 = MIDL_user_allocate(0x48uLL);
        if ( v25 )
        {
          gsl::details::extent_type<-1>::extent_type<-1>(v35, *((unsigned int *)a3 + 14));
          v35[1] = (SIZE_T)v20;
          if ( v35[0] == -1LL || !v20 && v35[0] )
          {
            gsl::details::terminate(v26);
            JUMPOUT(0x180245D7CLL);
          }
          v27 = CPathData::CPathData((__int64)v25, g_DeviceManager, v35);
        }
        else
        {
          v27 = 0LL;
        }
        wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)this + 43, v27);
      }
      else
      {
        ExpressionTypeByteSize = GetExpressionTypeByteSize(v19, v16, v17, v18);
        if ( ExpressionTypeByteSize == v22 )
        {
          v23 = ExpressionTypeByteSize;
          v24 = MIDL_user_allocate(ExpressionTypeByteSize);
          std::unique_ptr<unsigned char [0]>::reset<unsigned char *,0>((void **)this + 42, v24);
          if ( *v13 )
            memcpy_0(*v13, v20, v23);
        }
      }
    }
  }
  v28 = CSharedSectionBase::ResolveAllocation(Resource, *((unsigned int *)a3 + 4), *((unsigned int *)a3 + 5));
  if ( !v28 )
  {
    v34 = 299;
    v8 = -2147024882;
LABEL_47:
    v9 = v8;
    goto LABEL_48;
  }
  v8 = CKeyframeAnimation::SetIterationInfo(
         (__int64)this,
         *((float *)a3 + 7),
         *((_DWORD *)a3 + 8),
         COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 6)),
         *((_DWORD *)a3 + 9));
  if ( v8 < 0 )
  {
    v31 = 306;
    goto LABEL_46;
  }
  v29 = (unsigned int)CKeyframeAnimation::SetKeyFrameData(
                        this,
                        *((unsigned int *)a3 + 15),
                        *((unsigned int *)a3 + 10),
                        v28) >> 31;
  v30 = (*((_BYTE *)this + 224) & 0x20) == 0;
  *((_BYTE *)this + 537) ^= (*((_BYTE *)this + 537) ^ (16 * *((_BYTE *)a3 + 64))) & 0x10;
  if ( v30 && !(_BYTE)v29 )
  {
    v8 = CBaseExpression::TryRegisterWithExpressionManager(this);
    if ( v8 < 0 )
    {
      v31 = 317;
LABEL_46:
      v34 = v31;
      goto LABEL_47;
    }
  }
  v8 = 0;
  if ( (_BYTE)v29 )
    goto LABEL_49;
  return (unsigned int)v8;
}
