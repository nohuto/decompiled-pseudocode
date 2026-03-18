/*
 * XREFs of ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18000ED10
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180154180 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C3F0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18000D550 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18000D5E0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ??$?0V?$extent_type@$05@details@gsl@@@?$storage_type@V?$extent_type@$0?0@details@gsl@@@?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@QEAA@UKnownNotNull@12@V?$extent_type@$05@details@2@@Z @ 0x18000D658 (--$-0V-$extent_type@$05@details@gsl@@@-$storage_type@V-$extent_type@$0-0@details@gsl@@@-$span@QE.c)
 *     ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000DA20 (-GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18000DF90 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18000E0A0 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ??$?0V?$extent_type@$07@details@gsl@@@?$storage_type@V?$extent_type@$0?0@details@gsl@@@?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@QEAA@UKnownNotNull@12@V?$extent_type@$07@details@2@@Z @ 0x18000E0E0 (--$-0V-$extent_type@$07@details@gsl@@@-$storage_type@V-$extent_type@$0-0@details@gsl@@@-$span@QE.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x18000E4B0 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18000E7D0 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18000F6E0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18000F990 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180080C60 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801841F0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValueOnTarget(CBaseExpression *this, struct CResource *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 (__fastcall *v5)(CVisual *, int, struct CExpressionValue *); // rax
  int v7; // r12d
  int v8; // ebx
  bool v9; // al
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r9d
  unsigned int i; // edx
  unsigned int v15; // ecx
  CPathData *v16; // rcx
  void (*v17)(void); // rax
  float *v18; // rbx
  CPathData *v19; // rcx
  void (*v20)(void); // rax
  __int64 v22; // r8
  __int64 v23; // rax
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  FLOAT v25; // xmm1_4
  unsigned int v26; // eax
  unsigned int v27; // xmm0_4
  unsigned int v28; // xmm1_4
  __int64 (__fastcall *v29)(struct CResource *, _QWORD, _QWORD, float *); // rax
  unsigned int v30; // r15d
  unsigned int v31; // edi
  const struct AnimationHelper::AnimatedProperty *v32; // rax
  FLOAT v33; // xmm0_4
  float v34; // xmm0_4
  int v35; // eax
  float *v36; // rbx
  int v37; // edi
  unsigned int v38; // esi
  __int64 (__fastcall *v39)(float *, unsigned int, int, __int64); // rax
  const struct AnimationHelper::AnimatedProperty *v40; // rax
  float v41; // xmm0_4
  int v42; // eax
  CPathData *v43; // rcx
  void (*v44)(void); // rax
  int Property; // eax
  bool v46; // al
  int v47; // eax
  int v48; // eax
  unsigned int v49; // [rsp+20h] [rbp-B9h]
  __int64 v50; // [rsp+38h] [rbp-A1h] BYREF
  D2D_VECTOR_3F v51; // [rsp+40h] [rbp-99h] BYREF
  D2D_VECTOR_3F v52; // [rsp+50h] [rbp-89h] BYREF
  CPathData *v53; // [rsp+90h] [rbp-49h]
  int v54; // [rsp+98h] [rbp-41h]
  _OWORD Buf1[4]; // [rsp+A0h] [rbp-39h] BYREF
  float *v56; // [rsp+E0h] [rbp+7h]
  unsigned int v57; // [rsp+E8h] [rbp+Fh]

  v2 = *(_QWORD *)a2;
  v3 = *((_DWORD *)this + 47);
  v53 = 0LL;
  v5 = *(__int64 (__fastcall **)(CVisual *, int, struct CExpressionValue *))(v2 + 136);
  v54 = 0;
  v7 = -2147024809;
  memset(&v52, 0, 64);
  if ( v5 == CVisual::GetProperty )
  {
    v8 = 0;
    if ( v3 == 38 )
    {
      v9 = (*((_BYTE *)a2 + 106) & 0x40) != 0;
      v54 = 17;
      LOBYTE(v52.x) = v9;
    }
    else
    {
      switch ( v3 )
      {
        case 0x1Au:
          v52.x = CVisual::GetOpacityInternal(a2);
          v54 = 18;
          break;
        case 0x1Bu:
          v46 = (*((_BYTE *)a2 + 105) & 0x40) != 0;
          v54 = 17;
          LOBYTE(v52.x) = v46;
          break;
        case 0x1Cu:
          v25 = *((float *)a2 + 30);
          v52.x = *((FLOAT *)a2 + 29);
          v52.z = *((FLOAT *)a2 + 31);
          v52.y = v25;
          v54 = 52;
          break;
        case 0x1Du:
          v27 = *((_DWORD *)a2 + 34);
          v28 = *((_DWORD *)a2 + 35);
          goto LABEL_43;
        case 0x1Eu:
          CVisual::GetRelativeOffsetInternal(a2, &v51);
          v52 = v51;
          v54 = 52;
          break;
        case 0x1Fu:
          CVisual::GetRelativeLayoutSizeInternal(a2, &v50);
          v27 = v50;
          v28 = HIDWORD(v50);
LABEL_43:
          *(_QWORD *)&v52.x = __PAIR64__(v28, v27);
          v54 = 35;
          break;
        default:
          v49 = 5972;
          goto LABEL_53;
      }
    }
  }
  else if ( (char *)v5 == (char *)CComponentTransform3D::GetProperty )
  {
    v8 = 0;
    if ( v3 == 6 )
    {
      v33 = *((float *)a2 + 58) * 57.295776;
      v54 = 18;
      v52.x = v33;
    }
    else
    {
      gsl::span<AnimationHelper::AnimatedProperty const * const,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
        &v51,
        (__int64)&CComponentTransform3D::k_rgAnimDef);
      AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                                   &v51,
                                                                                   v3,
                                                                                   0);
      if ( AnimatablePropertyInfo )
      {
        CResource::GetPropertyImpl(a2, AnimatablePropertyInfo, (struct CExpressionValue *)&v52);
      }
      else
      {
        v49 = 120;
LABEL_53:
        v8 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, v49, 0LL);
      }
    }
  }
  else
  {
    if ( (char *)v5 == (char *)CPropertySet::GetProperty )
      Property = CPropertySet::GetProperty(a2, v3, (struct CExpressionValue *)&v52);
    else
      Property = v5(a2, v3, (struct CExpressionValue *)&v52);
    v8 = Property;
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x288u, 0LL);
    goto LABEL_21;
  }
  v10 = *((_QWORD *)this + 25);
  if ( !v10 || !*(_BYTE *)(v10 + 4) )
  {
    v18 = (float *)((char *)this + 80);
    if ( (unsigned __int8)CExpressionValue::operator==(&v52)
      && !(*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 264LL))(this)
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 128LL))(a2) )
    {
      goto LABEL_20;
    }
    v29 = *(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, float *))(*(_QWORD *)a2 + 96LL);
    if ( *((_DWORD *)this + 38) == 11 )
      v18 = (float *)*((_QWORD *)this + 18);
    v30 = *((_DWORD *)this + 40);
    v31 = *((_DWORD *)this + 47);
    if ( (char *)v29 == (char *)CComponentTransform3D::SetProperty )
    {
      LODWORD(v50) = 0;
      if ( v31 == 6 && v30 == 18 )
      {
        v32 = (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform3D::sc_RotationAngle;
        v34 = *v18 * 0.017453292;
        v18 = (float *)&v50;
        *(float *)&v50 = v34;
      }
      else
      {
        gsl::span<AnimationHelper::AnimatedProperty const * const,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
          &v51,
          (__int64)&CComponentTransform3D::k_rgAnimDef);
        v32 = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                  &v51,
                                                                  v31,
                                                                  v30);
        if ( !v32 )
        {
          v8 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x54u, 0LL);
          goto LABEL_50;
        }
      }
      v35 = CResource::SetPropertyImpl(a2, v32, v18);
      v8 = v35;
      if ( v35 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x50u, 0LL);
    }
    else
    {
      if ( (char *)v29 == (char *)CPropertySet::SetProperty )
        v47 = CPropertySet::SetProperty(a2, v31, v30, v18);
      else
        v47 = v29(a2, v31, v30, v18);
      v8 = v47;
    }
LABEL_50:
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x28Fu, 0LL);
      goto LABEL_21;
    }
LABEL_20:
    v8 = 0;
    goto LABEL_21;
  }
  v56 = 0LL;
  memset(Buf1, 0, sizeof(Buf1));
  v57 = 0;
  if ( *(_DWORD *)v10 == 1 )
  {
    v11 = (unsigned int)(v54 - 18);
    if ( (unsigned int)v11 <= 0x33 )
    {
      v12 = 0x8000400020001LL;
      if ( _bittest64(&v12, v11) )
      {
LABEL_10:
        CExpressionValue::CopyFrom((CExpressionValue *)Buf1, (const struct CExpressionValue *)&v52);
        v13 = v54;
        for ( i = 0; ; ++i )
        {
          v15 = *(unsigned __int8 *)(v10 + 4);
          if ( i >= v15 )
            break;
          if ( *(_DWORD *)v10 == 1 )
          {
            LODWORD(v22) = (*(unsigned __int8 *)(v10 + 8) >> (2 * (v15 - i) - 2)) & 3;
          }
          else if ( *(_DWORD *)v10 == 2 )
          {
            v22 = (*(_QWORD *)(v10 + 8) >> (4 * ((unsigned __int8)v15 - (unsigned __int8)i) - 4)) & 0xFLL;
          }
          else
          {
            LODWORD(v22) = -1;
          }
          if ( v13 != 42 )
          {
            switch ( v13 )
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
                goto LABEL_81;
            }
          }
          if ( (unsigned int)v22 >= v13 >> 4 || (unsigned int)v22 >= 0x10 )
          {
LABEL_81:
            v7 = -2147467259;
            v26 = 1991;
            goto LABEL_76;
          }
          v23 = i;
          *((_DWORD *)Buf1 + (unsigned int)v22) = *((_DWORD *)this + v23 + 20);
        }
        if ( (unsigned __int8)CExpressionValue::operator==(Buf1)
          && !(*(unsigned __int8 (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 128LL))(a2) )
        {
          goto LABEL_14;
        }
        v36 = (float *)Buf1;
        v37 = v57;
        v38 = *((_DWORD *)this + 47);
        v39 = *(__int64 (__fastcall **)(float *, unsigned int, int, __int64))(*(_QWORD *)a2 + 96LL);
        if ( v57 == 11 )
          v36 = v56;
        if ( (char *)v39 == (char *)&CComponentTransform2D::SetProperty )
        {
          LODWORD(v50) = 0;
          if ( v38 == 5 && v57 == 18 )
          {
            v40 = (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform2D::sc_RotationAngle;
            v41 = *v36 * 0.017453292;
            v36 = (float *)&v50;
            *(float *)&v50 = v41;
          }
          else
          {
            gsl::span<AnimationHelper::AnimatedProperty const * const,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
              &v51,
              (__int64)&CComponentTransform2D::k_rgAnimDef);
            v40 = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                      &v51,
                                                                      v38,
                                                                      v37);
            if ( !v40 )
            {
              v8 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4Au, 0LL);
              goto LABEL_67;
            }
          }
          v42 = CResource::SetPropertyImpl(a2, v40, v36);
          v8 = v42;
          if ( v42 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x46u, 0LL);
LABEL_67:
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x29Eu, 0LL);
            goto LABEL_69;
          }
LABEL_14:
          v16 = (CPathData *)v56;
          if ( v56 )
          {
            v56 = 0LL;
            v17 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
            if ( (char *)v17 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v16);
            else
              v17();
          }
          goto LABEL_20;
        }
        if ( (char *)v39 == (char *)CComponentTransform3D::SetProperty )
        {
          v48 = CComponentTransform3D::SetProperty(a2, v38, v57, v36);
        }
        else
        {
          if ( v39 == CVisual::SetProperty )
          {
            v8 = CVisual::SetProperty((float *)a2, v38, v57, (__int64)v36);
            goto LABEL_67;
          }
          v48 = v39((float *)a2, v38, v57, (__int64)v36);
        }
        v8 = v48;
        goto LABEL_67;
      }
    }
    v26 = 1933;
  }
  else if ( *(_DWORD *)v10 == 2 )
  {
    if ( v54 == 104 || v54 == 265 )
      goto LABEL_10;
    v26 = 1942;
  }
  else
  {
    v7 = -2147467259;
    v26 = 1952;
  }
LABEL_76:
  v8 = v7;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v26, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x29Au, 0LL);
LABEL_69:
  v43 = (CPathData *)v56;
  if ( v56 )
  {
    v56 = 0LL;
    v44 = *(void (**)(void))(*(_QWORD *)v43 + 16LL);
    if ( (char *)v44 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v43);
    else
      v44();
  }
LABEL_21:
  v19 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    v20 = *(void (**)(void))(*(_QWORD *)v19 + 16LL);
    if ( (char *)v20 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v19);
    else
      v20();
  }
  return (unsigned int)v8;
}
