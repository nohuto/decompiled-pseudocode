/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180034A90
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003CBE0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1802AA4B0 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000D0B0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003313C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800331B0 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1800331E4 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800339D0 (-GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180033D10 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180033E20 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ??$?0V?$extent_type@$07@details@gsl@@@?$storage_type@V?$extent_type@$0?0@details@gsl@@@?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@QEAA@UKnownNotNull@12@V?$extent_type@$07@details@2@@Z @ 0x180033E60 (--$-0V-$extent_type@$07@details@gsl@@@-$storage_type@V-$extent_type@$0-0@details@gsl@@@-$span@QE.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x180034230 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180034550 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180035440 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x1800355B0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180035860 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800E62E0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A3110 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801A4810 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1801C31C0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ??$?0V?$extent_type@$05@details@gsl@@@?$storage_type@V?$extent_type@$0?0@details@gsl@@@?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@QEAA@UKnownNotNull@12@V?$extent_type@$05@details@2@@Z @ 0x18020FAC8 (--$-0V-$extent_type@$05@details@gsl@@@-$storage_type@V-$extent_type@$0-0@details@gsl@@@-$span@QE.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x180297F6C (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(CBaseExpression *this, const struct CExpressionValue *a2)
{
  bool v2; // bl
  float *v5; // r14
  struct CResource *v6; // rax
  struct CResource *v7; // rsi
  unsigned int v8; // r13d
  int v9; // r12d
  __int64 (__fastcall *v10)(CVisual *, int, struct CExpressionValue *); // rax
  int v11; // r15d
  bool v12; // al
  __int64 v13; // r15
  CPathData *v14; // rcx
  void (*v15)(void); // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r9d
  unsigned int i; // edx
  unsigned int v21; // ecx
  CPathData *v22; // rcx
  void (*v23)(void); // rax
  __int64 v24; // r8
  __int64 v25; // rax
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  FLOAT v27; // xmm1_4
  unsigned int v28; // eax
  unsigned int v29; // xmm0_4
  unsigned int v30; // xmm1_4
  __int64 (__fastcall *v31)(struct CResource *, _QWORD, _QWORD, float *); // rax
  unsigned int v32; // r15d
  unsigned int v33; // edi
  const struct AnimationHelper::AnimatedProperty *v34; // rax
  FLOAT v35; // xmm0_4
  float v36; // xmm0_4
  int v37; // eax
  WCHAR *v38; // r14
  int v39; // r15d
  unsigned int v40; // edi
  __int64 (__fastcall *v41)(__int64, int, int, float *); // rax
  const struct AnimationHelper::AnimatedProperty *v42; // rax
  float v43; // xmm0_4
  int v44; // eax
  CPathData *v45; // rcx
  void (*v46)(void); // rax
  unsigned int TracingCookie; // eax
  int v48; // eax
  unsigned int v49; // esi
  HANDLE EventW; // rbx
  int Property; // eax
  bool v52; // al
  int v53; // eax
  int v54; // eax
  unsigned int v55; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v56; // [rsp+30h] [rbp-D0h]
  _DWORD v57[2]; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_VECTOR_3F v58; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_VECTOR_3F Buf1; // [rsp+50h] [rbp-B0h] BYREF
  CPathData *v60; // [rsp+90h] [rbp-70h]
  int v61; // [rsp+98h] [rbp-68h]
  WCHAR Name[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v63; // [rsp+B0h] [rbp-50h]
  __int128 v64; // [rsp+C0h] [rbp-40h]
  __int128 v65; // [rsp+D0h] [rbp-30h]
  WCHAR *v66; // [rsp+E0h] [rbp-20h]
  unsigned int v67; // [rsp+E8h] [rbp-18h]

  v2 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 39) + 4LL) & 0x40000000) != 0 )
    v2 = (unsigned __int8)CExpressionValue::operator==((char *)this + 80) == 0;
  v5 = (float *)((char *)this + 80);
  CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 80), a2);
  if ( v2 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v48 = StringCchPrintfW(Name, 60LL, L"DwmExpression_SetValue_%d", TracingCookie);
    v49 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x243u, 0LL);
      return v49;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (*((_BYTE *)this + 224) & 3) != 3 )
    return 0LL;
  v6 = CBaseExpression::ResolveTargetNoRef(this);
  v7 = v6;
  if ( !v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024782, 0x257u, 0LL);
    return 2147942514LL;
  }
  v8 = *((_DWORD *)this + 47);
  v9 = -2147024809;
  v10 = *(__int64 (__fastcall **)(CVisual *, int, struct CExpressionValue *))(*(_QWORD *)v6 + 136LL);
  v60 = 0LL;
  v61 = 0;
  memset(&Buf1, 0, 64);
  if ( v10 == CVisual::GetProperty )
  {
    v11 = 0;
    if ( v8 == 38 )
    {
      v12 = (*((_BYTE *)v7 + 106) & 0x40) != 0;
      v61 = 17;
      LOBYTE(Buf1.x) = v12;
    }
    else
    {
      switch ( v8 )
      {
        case 0x1Au:
          Buf1.x = CVisual::GetOpacityInternal(v7);
          v61 = 18;
          break;
        case 0x1Bu:
          v52 = (*((_BYTE *)v7 + 105) & 0x40) != 0;
          v61 = 17;
          LOBYTE(Buf1.x) = v52;
          break;
        case 0x1Cu:
          v27 = *((float *)v7 + 30);
          Buf1.x = *((FLOAT *)v7 + 29);
          Buf1.z = *((FLOAT *)v7 + 31);
          Buf1.y = v27;
          v61 = 52;
          break;
        case 0x1Du:
          v29 = *((_DWORD *)v7 + 34);
          v30 = *((_DWORD *)v7 + 35);
          goto LABEL_50;
        case 0x1Eu:
          CVisual::GetRelativeOffsetInternal(v7, &v58);
          Buf1 = v58;
          v61 = 52;
          break;
        case 0x1Fu:
          CVisual::GetRelativeLayoutSizeInternal(v7);
          v29 = v57[0];
          v30 = v57[1];
LABEL_50:
          *(_QWORD *)&Buf1.x = __PAIR64__(v30, v29);
          v61 = 35;
          break;
        default:
          v55 = 5902;
          goto LABEL_61;
      }
    }
  }
  else if ( (char *)v10 == (char *)CComponentTransform3D::GetProperty )
  {
    v11 = 0;
    if ( v8 == 6 )
    {
      v35 = *((float *)v7 + 58) * 57.295776;
      v61 = 18;
      Buf1.x = v35;
    }
    else
    {
      gsl::span<AnimationHelper::AnimatedProperty const * const,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
        &v58,
        (__int64)&CComponentTransform3D::k_rgAnimDef);
      AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                                   &v58,
                                                                                   v8,
                                                                                   0);
      if ( AnimatablePropertyInfo )
      {
        CResource::GetPropertyImpl(v7, AnimatablePropertyInfo, (struct CExpressionValue *)&Buf1);
      }
      else
      {
        v55 = 120;
LABEL_61:
        v11 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, v55, 0LL);
      }
    }
  }
  else
  {
    if ( (char *)v10 == (char *)CPropertySet::GetProperty )
      Property = CPropertySet::GetProperty(v7, v8, (struct CExpressionValue *)&Buf1);
    else
      Property = v10(v7, v8, (struct CExpressionValue *)&Buf1);
    v11 = Property;
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x275u, 0LL);
    goto LABEL_15;
  }
  v13 = *((_QWORD *)this + 25);
  if ( v13 && *(_BYTE *)(v13 + 4) )
  {
    v66 = 0LL;
    *(_OWORD *)Name = 0LL;
    v67 = 0;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    if ( *(_DWORD *)v13 == 1 )
    {
      v17 = (unsigned int)(v61 - 18);
      if ( (unsigned int)v17 <= 0x33 )
      {
        v18 = 0x8000400020001LL;
        if ( _bittest64(&v18, v17) )
        {
LABEL_24:
          CExpressionValue::CopyFrom((CExpressionValue *)Name, (const struct CExpressionValue *)&Buf1);
          v19 = v61;
          for ( i = 0; ; ++i )
          {
            v21 = *(unsigned __int8 *)(v13 + 4);
            if ( i >= v21 )
              break;
            if ( *(_DWORD *)v13 == 1 )
            {
              LODWORD(v24) = (*(unsigned __int8 *)(v13 + 8) >> (2 * (v21 - i) - 2)) & 3;
            }
            else if ( *(_DWORD *)v13 == 2 )
            {
              v24 = (*(_QWORD *)(v13 + 8) >> (4 * ((unsigned __int8)v21 - (unsigned __int8)i) - 4)) & 0xFLL;
            }
            else
            {
              LODWORD(v24) = -1;
            }
            if ( v19 != 42 )
            {
              switch ( v19 )
              {
                case 17:
                case 18:
                case 35:
                case 52:
                case 69:
                case 70:
                case 71:
                case 104:
                case 265:
                  break;
                default:
                  goto LABEL_91;
              }
            }
            if ( (unsigned int)v24 >= v19 >> 4 || (unsigned int)v24 >= 0x10 )
            {
LABEL_91:
              v9 = -2147467259;
              v28 = 1972;
              goto LABEL_86;
            }
            v25 = i;
            *(float *)&Name[2 * (unsigned int)v24] = v5[v25];
          }
          if ( (unsigned __int8)CExpressionValue::operator==(Name)
            && !(*(unsigned __int8 (__fastcall **)(struct CResource *))(*(_QWORD *)v7 + 128LL))(v7) )
          {
            goto LABEL_28;
          }
          v38 = Name;
          v39 = v67;
          v40 = *((_DWORD *)this + 47);
          v41 = *(__int64 (__fastcall **)(__int64, int, int, float *))(*(_QWORD *)v7 + 96LL);
          if ( v67 == 11 )
            v38 = v66;
          if ( v41 == CComponentTransform2D::SetProperty )
          {
            v57[0] = 0;
            if ( v40 == 5 && v67 == 18 )
            {
              v42 = (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform2D::sc_RotationAngle;
              v43 = *(float *)v38 * 0.017453292;
              v38 = (WCHAR *)v57;
              *(float *)v57 = v43;
            }
            else
            {
              gsl::span<AnimationHelper::AnimatedProperty const * const,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
                &v58,
                &CComponentTransform2D::k_rgAnimDef,
                v56);
              v42 = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                        &v58,
                                                                        v40,
                                                                        v39);
              if ( !v42 )
              {
                v11 = -2147024809;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4Au, 0LL);
                goto LABEL_75;
              }
            }
            v44 = CResource::SetPropertyImpl(v7, v42, v38);
            v11 = v44;
            if ( v44 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x46u, 0LL);
LABEL_75:
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x28Bu, 0LL);
              goto LABEL_77;
            }
LABEL_28:
            v22 = (CPathData *)v66;
            if ( v66 )
            {
              v66 = 0LL;
              v23 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
              if ( (char *)v23 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
                CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v22);
              else
                v23();
            }
            goto LABEL_14;
          }
          if ( (char *)v41 == (char *)CComponentTransform3D::SetProperty )
          {
            v54 = CComponentTransform3D::SetProperty(v7, v40, v67, v38);
          }
          else
          {
            if ( (char *)v41 == (char *)CVisual::SetProperty )
            {
              v11 = CVisual::SetProperty((float *)v7, v40, v67, (__int64)v38);
              goto LABEL_75;
            }
            v54 = v41((__int64)v7, v40, v67, (float *)v38);
          }
          v11 = v54;
          goto LABEL_75;
        }
      }
      v28 = 1914;
    }
    else if ( *(_DWORD *)v13 == 2 )
    {
      if ( v61 == 104 || v61 == 265 )
        goto LABEL_24;
      v28 = 1923;
    }
    else
    {
      v9 = -2147467259;
      v28 = 1933;
    }
LABEL_86:
    v11 = v9;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v28, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x287u, 0LL);
LABEL_77:
    v45 = (CPathData *)v66;
    if ( v66 )
    {
      v66 = 0LL;
      v46 = *(void (**)(void))(*(_QWORD *)v45 + 16LL);
      if ( (char *)v46 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v45);
      else
        v46();
    }
    goto LABEL_15;
  }
  if ( !(unsigned __int8)CExpressionValue::operator==(&Buf1)
    || (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 264LL))(this)
    || (*(unsigned __int8 (__fastcall **)(struct CResource *))(*(_QWORD *)v7 + 128LL))(v7) )
  {
    v31 = *(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, float *))(*(_QWORD *)v7 + 96LL);
    if ( *((_DWORD *)this + 38) == 11 )
      v5 = (float *)*((_QWORD *)this + 18);
    v32 = *((_DWORD *)this + 40);
    v33 = *((_DWORD *)this + 47);
    if ( (char *)v31 == (char *)CComponentTransform3D::SetProperty )
    {
      v57[0] = 0;
      if ( v33 == 6 && v32 == 18 )
      {
        v34 = (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform3D::sc_RotationAngle;
        v36 = *v5 * 0.017453292;
        v5 = (float *)v57;
        *(float *)v57 = v36;
      }
      else
      {
        gsl::span<AnimationHelper::AnimatedProperty const * const,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
          &v58,
          (__int64)&CComponentTransform3D::k_rgAnimDef);
        v34 = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                  &v58,
                                                                  v33,
                                                                  v32);
        if ( !v34 )
        {
          v11 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x54u, 0LL);
          goto LABEL_57;
        }
      }
      v37 = CResource::SetPropertyImpl(v7, v34, v5);
      v11 = v37;
      if ( v37 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x50u, 0LL);
    }
    else
    {
      if ( (char *)v31 == (char *)CPropertySet::SetProperty )
        v53 = CPropertySet::SetProperty(v7, v33, v32, v5);
      else
        v53 = v31(v7, v33, v32, v5);
      v11 = v53;
    }
LABEL_57:
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x27Cu, 0LL);
      goto LABEL_15;
    }
  }
LABEL_14:
  v11 = 0;
LABEL_15:
  v14 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    v15 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
    if ( (char *)v15 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v14);
    else
      v15();
  }
  if ( v11 >= 0 )
    return 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x25Au, 0LL);
  return (unsigned int)v11;
}
