/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18021B18C
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18017C86C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18015F85C (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B8F8 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18017E2E0 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18017E414 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18017E4E0 (_anonymous_namespace_--TransformAndNormalize.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18017E528 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v8; // ebx
  char *v9; // r15
  __int64 v12; // rcx
  __int64 v13; // rcx
  bool v14; // zf
  bool v15; // r14
  const struct D2DMatrix *v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  int *v19; // r8
  const struct D2DMatrix *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // edx
  bool v23; // si
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // eax
  int v28; // edx
  unsigned int v29; // r8d
  __int64 v30; // r14
  __int64 v31; // rax
  int v33; // eax
  int v34; // eax
  unsigned int v35; // ebx
  __int64 v36; // r13
  unsigned int v37; // r15d
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // r13
  const struct D2DVector3 *v41; // rax
  const struct D2DVector3 *v42; // rax
  __int64 v43; // rsi
  unsigned int v44; // eax
  unsigned int v45; // edx
  int v46; // eax
  char v47; // [rsp+68h] [rbp-A0h]
  int v48; // [rsp+78h] [rbp-90h]
  unsigned int v50; // [rsp+88h] [rbp-80h]
  unsigned int v51; // [rsp+8Ch] [rbp-7Ch]
  int v52; // [rsp+90h] [rbp-78h]
  __int128 v53; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-40h] BYREF
  int v56; // [rsp+D0h] [rbp-38h]
  _BYTE v57[16]; // [rsp+D8h] [rbp-30h] BYREF
  float v58; // [rsp+E8h] [rbp-20h]
  int v59; // [rsp+ECh] [rbp-1Ch]
  int v60; // [rsp+118h] [rbp+10h] BYREF
  char v61; // [rsp+11Ch] [rbp+14h]

  v8 = 0;
  v9 = a2;
  *a5 = 0;
  *a7 = 0;
  v12 = *(_QWORD *)a2;
  v55 = (__int64)a2;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 40LL))(v12, v57);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v60);
  if ( (unsigned int)(*(_DWORD *)(a1 + 784) - 2) > 2 && (v57[4] & 1) == 0 && (v61 & 1) == 0
    || (v14 = v60 == 2, *(_DWORD *)(a1 + 784) = 3, v14) )
  {
    if ( (v9[16] & 0x40) != 0 )
      *(_BYTE *)a4 = 1;
  }
  if ( ((unsigned int)(*(_DWORD *)(a1 + 784) - 2) > 2 || v60 == 4) && v9[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v15 = 0;
  v47 = 0;
  if ( (v9[16] & 3) != 0 )
  {
    DWORD2(v53) = 0;
    *(_QWORD *)&v53 = _mm_unpacklo_ps(
                        (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue,
                        (__m128)0LL).m128_u64[0];
    *(_QWORD *)&v54 = v53;
    DWORD2(v54) = 0;
    if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v41 = D3DXVec3TransformCoord((struct D2DVector3 *)&v54, (const struct D2DVector3 *)&v53, v16);
      D3DXVec3Normalize((struct D2DVector3 *)&v54, v41);
    }
    HIDWORD(v54) = *(_DWORD *)(a1 + 1344);
    v17 = *(_DWORD *)(a4 + 32);
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
      goto LABEL_81;
    if ( v18 > *(_DWORD *)(a4 + 28) )
    {
      v33 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v54);
      v8 = v33;
      if ( v33 < 0 )
      {
LABEL_48:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0xC0u, 0LL);
LABEL_49:
        v30 = a3;
        goto LABEL_45;
      }
    }
    else
    {
      v13 = 2LL * v17;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v17) = v54;
      *(_DWORD *)(a4 + 32) = v18;
    }
    v19 = a5;
    v15 = 1;
    ++*a5;
  }
  else
  {
    v19 = a5;
  }
  v48 = v8;
  if ( (v9[16] & 4) != 0 || (v9[16] & 8) != 0 )
  {
    DWORD2(v53) = 0;
    *(_QWORD *)&v53 = _mm_unpacklo_ps(
                        (__m128)0LL,
                        (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue).m128_u64[0];
    *(_QWORD *)&v54 = v53;
    DWORD2(v54) = 0;
    if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v42 = D3DXVec3TransformCoord((struct D2DVector3 *)&v54, (const struct D2DVector3 *)&v53, v20);
      D3DXVec3Normalize((struct D2DVector3 *)&v54, v42);
    }
    HIDWORD(v54) = *(_DWORD *)(a1 + 1344);
    v21 = *(_DWORD *)(a4 + 32);
    v22 = v21 + 1;
    if ( v21 + 1 >= v21 )
    {
      v8 = 0;
      v48 = 0;
      if ( v22 <= *(_DWORD *)(a4 + 28) )
      {
        v13 = 2LL * v21;
        *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v21) = v54;
        *(_DWORD *)(a4 + 32) = v22;
LABEL_18:
        v19 = a5;
        v23 = 1;
        ++*a5;
        goto LABEL_19;
      }
      v33 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v54);
      v48 = v33;
      v8 = v33;
      if ( v33 >= 0 )
        goto LABEL_18;
      goto LABEL_48;
    }
LABEL_81:
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_49;
  }
  v23 = 0;
  if ( v8 < 0 )
  {
LABEL_44:
    v30 = a3;
    goto LABEL_45;
  }
LABEL_19:
  if ( (v9[16] & 0x10) != 0 || (v9[16] & 0x20) != 0 )
  {
    v24 = *(_DWORD *)(a1 + 1344);
    *(_QWORD *)&v53 = 0LL;
    HIDWORD(v53) = v24;
    v25 = *(_DWORD *)(a4 + 32);
    DWORD2(v53) = 1065353216;
    v26 = v25 + 1;
    if ( v25 + 1 < v25 )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_44;
    }
    v8 = 0;
    v48 = 0;
    if ( v26 > *(_DWORD *)(a4 + 28) )
    {
      v34 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v53);
      v48 = v34;
      v8 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0xC0u, 0LL);
        goto LABEL_44;
      }
      v19 = a5;
    }
    else
    {
      v13 = 2LL * v25;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v25) = v53;
      *(_DWORD *)(a4 + 32) = v26;
    }
    ++*v19;
    LOBYTE(v13) = 1;
    v47 = 1;
  }
  else
  {
    LOBYTE(v13) = 0;
  }
  if ( *v19 > 0 )
  {
    v27 = *(_DWORD *)(a4 + 32) - *v19;
    v52 = v27;
    v28 = v27 + 1;
    if ( !v15 )
      v28 = *(_DWORD *)(a4 + 32) - *v19;
    v51 = v28;
    v29 = v28 + 1;
    if ( !v23 )
      v29 = v28;
    *(_DWORD *)(a1 + 812) = 0;
    *(_DWORD *)(a1 + 816) = 0;
    *(_DWORD *)(a1 + 820) = 0;
    v50 = v29;
    if ( v27 > 3LL )
    {
      v35 = v27;
      *(_QWORD *)&v53 = 3LL;
      v36 = 48LL;
      *(_QWORD *)&v54 = 48LL;
      v37 = 3;
      while ( v15 )
      {
        v38 = *(_QWORD *)(a4 + 8);
        if ( anonymous_namespace_::VectorInsideAngleThreshold(
               (const struct D2DVector3 *)(v38 + 16LL * v35),
               (const struct D2DVector3 *)(v38 + 16LL * v37)) )
        {
          *(_DWORD *)(a1 + 812) |= *(_DWORD *)(v38 + v36 + 12);
        }
        v15 = *(_DWORD *)(a1 + 812) != 7;
        if ( v23 )
          goto LABEL_59;
LABEL_62:
        LOBYTE(v13) = v47;
        if ( v47 )
        {
          v29 = v50;
LABEL_72:
          v40 = *(_QWORD *)(a4 + 8);
          if ( anonymous_namespace_::VectorInsideAngleThreshold(
                 (const struct D2DVector3 *)(v40 + 16LL * v29),
                 (const struct D2DVector3 *)(v40 + 16LL * v37)) )
          {
            *(_DWORD *)(a1 + 820) |= *(_DWORD *)(v54 + v40 + 12);
          }
          v36 = v54;
          LOBYTE(v13) = *(_DWORD *)(a1 + 820) != 7;
          v47 = v13;
        }
        v36 += 16LL;
        v29 = v50;
        ++v37;
        *(_QWORD *)&v53 = v53 + 1;
        *(_QWORD *)&v54 = v36;
        if ( (__int64)v53 >= v52 )
          goto LABEL_64;
      }
      if ( !v23 )
      {
        if ( !(_BYTE)v13 )
        {
LABEL_64:
          v8 = v48;
          v9 = (char *)v55;
          goto LABEL_30;
        }
        goto LABEL_72;
      }
LABEL_59:
      v39 = *(_QWORD *)(a4 + 8);
      if ( anonymous_namespace_::VectorInsideAngleThreshold(
             (const struct D2DVector3 *)(v39 + 16LL * v51),
             (const struct D2DVector3 *)(v39 + 16LL * v37)) )
      {
        *(_DWORD *)(a1 + 816) |= *(_DWORD *)(v39 + v36 + 12);
      }
      v23 = *(_DWORD *)(a1 + 816) != 7;
      goto LABEL_62;
    }
  }
LABEL_30:
  v30 = a3;
  if ( !*(_BYTE *)a4 && !*(_BYTE *)(a4 + 1) && a3 != *(_QWORD *)v9 )
  {
    if ( (*(_BYTE *)(a1 + 808) & 4) != 0 || v58 != 1.0 )
    {
      v31 = a6;
      if ( (v9[16] & 0x30) != 0 )
        *(_BYTE *)(a6 + 2) = 1;
    }
    else
    {
      v31 = a6;
    }
    if ( !*(_BYTE *)(v31 + 2) )
    {
      if ( v59 == 1 )
      {
        if ( (v9[16] & 1) == 0 && (v9[16] & 2) == 0 )
          goto LABEL_45;
        v55 = 1065353216LL;
      }
      else
      {
        if ( v59 != 2 || (v9[16] & 4) == 0 && (v9[16] & 8) == 0 )
          goto LABEL_45;
        v55 = 0x3F80000000000000LL;
      }
      v56 = 0;
      v43 = v31 + 8;
      anonymous_namespace_::TransformAndNormalize(
        (struct D2DVector3 *)&v53,
        (__int64)&v55,
        (const struct D2DMatrix *)(a1 + 976));
      HIDWORD(v53) = *(_DWORD *)(a1 + 1344);
      v44 = *(_DWORD *)(v43 + 24);
      v45 = v44 + 1;
      if ( v44 + 1 >= v44 )
      {
        v8 = 0;
        if ( v45 <= *(_DWORD *)(v43 + 20) )
        {
          v13 = 2LL * *(unsigned int *)(v43 + 24);
          *(_OWORD *)(*(_QWORD *)v43 + 16LL * *(unsigned int *)(v43 + 24)) = v53;
          *(_DWORD *)(v43 + 24) = v45;
        }
        else
        {
          v46 = DynArrayImpl<0>::AddMultipleAndSet(v43, 16, 1, &v53);
          v8 = v46;
          if ( v46 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0xC0u, 0LL);
            goto LABEL_45;
          }
        }
        ++*a7;
        goto LABEL_45;
      }
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
  }
LABEL_45:
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v55 = v30;
    *(_QWORD *)&v53 = *(_QWORD *)v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (__int64)&unk_1803D6C3D);
  }
  return (unsigned int)v8;
}
