/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017CD80
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18017C86C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18015F85C (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B8F8 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetRawOutput@CInteractionContextWrapper@@UEAA?AUInteractionOutput@@XZ @ 0x18017D580 (-GetRawOutput@CInteractionContextWrapper@@UEAA-AUInteractionOutput@@XZ.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18017E2E0 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18017E414 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18017E528 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        unsigned int *a7)
{
  int v8; // ebx
  unsigned __int64 v9; // r15
  __int64 v12; // rcx
  void (__fastcall *v13)(__int64, _BYTE *); // rax
  void (__fastcall *v14)(unsigned __int64, int *); // rax
  int v15; // ecx
  int v16; // r9d
  bool v17; // zf
  bool v18; // r14
  const struct D2DMatrix *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int *v22; // r8
  const struct D2DMatrix *v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // edx
  bool v26; // si
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // edx
  int v30; // eax
  int v31; // edx
  __int64 v32; // rbx
  __int64 v33; // r13
  unsigned int v34; // r15d
  unsigned __int64 v35; // r14
  __int64 v36; // rax
  unsigned __int64 v37; // xmm0_8
  __int64 v38; // rsi
  const struct D2DMatrix *v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // edx
  unsigned int *v42; // rdx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int64 v47; // r14
  __int64 v48; // rsi
  __int64 v49; // r13
  const struct D2DVector3 *v50; // rax
  const struct D2DVector3 *v51; // rax
  const struct D2DVector3 *v52; // rax
  char v53; // [rsp+68h] [rbp-A0h]
  __int64 v54; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v55; // [rsp+80h] [rbp-88h]
  int v56; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v57; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v58; // [rsp+90h] [rbp-78h] BYREF
  int *v59; // [rsp+98h] [rbp-70h]
  __int64 v60; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v61; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v62; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v63; // [rsp+C8h] [rbp-40h] BYREF
  int v64; // [rsp+D0h] [rbp-38h]
  _BYTE v65[16]; // [rsp+D8h] [rbp-30h] BYREF
  float v66; // [rsp+E8h] [rbp-20h]
  int v67; // [rsp+ECh] [rbp-1Ch]
  int v68; // [rsp+118h] [rbp+10h] BYREF
  char v69; // [rsp+11Ch] [rbp+14h]

  v59 = a5;
  v8 = 0;
  v60 = a6;
  v9 = a2;
  *a5 = 0;
  v63 = a2;
  v55 = a3;
  *a7 = 0;
  v12 = *(_QWORD *)a2;
  v13 = *(void (__fastcall **)(__int64, _BYTE *))(**(_QWORD **)a2 + 40LL);
  if ( (char *)v13 == (char *)CInteractionContextWrapper::GetRawOutput )
    CInteractionContextWrapper::GetRawOutput(v12, v65);
  else
    v13(v12, v65);
  v14 = *(void (__fastcall **)(unsigned __int64, int *))(*(_QWORD *)a3 + 40LL);
  if ( (char *)v14 == (char *)CInteractionContextWrapper::GetRawOutput )
    CInteractionContextWrapper::GetRawOutput(a3, &v68);
  else
    v14(a3, &v68);
  if ( (unsigned int)(*(_DWORD *)(a1 + 784) - 2) > 2 && (v65[4] & 1) == 0 && (v69 & 1) == 0
    || (v17 = v68 == 2, *(_DWORD *)(a1 + 784) = 3, v17) )
  {
    if ( (*(_BYTE *)(v9 + 16) & 0x40) != 0 )
      *(_BYTE *)a4 = 1;
  }
  if ( ((unsigned int)(*(_DWORD *)(a1 + 784) - 2) > 2 || v68 == 4) && *(char *)(v9 + 16) < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v18 = 0;
  v53 = 0;
  if ( (*(_BYTE *)(v9 + 16) & 3) != 0 )
  {
    DWORD2(v61) = 0;
    *(_QWORD *)&v61 = _mm_unpacklo_ps(
                        (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue,
                        (__m128)0LL).m128_u64[0];
    *(_QWORD *)&v62 = v61;
    DWORD2(v62) = 0;
    if ( !(unsigned int)D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v50 = D3DXVec3TransformCoord((struct D2DVector3 *)&v62, (const struct D2DVector3 *)&v61, v19);
      D3DXVec3Normalize((struct D2DVector3 *)&v62, v50);
    }
    HIDWORD(v62) = *(_DWORD *)(a1 + 1344);
    v20 = *(_DWORD *)(a4 + 32);
    v21 = v20 + 1;
    if ( v20 + 1 < v20 )
      goto LABEL_106;
    if ( v21 > *(_DWORD *)(a4 + 28) )
    {
      v45 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v62);
      v8 = v45;
      if ( v45 < 0 )
      {
LABEL_80:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0xC0u, 0LL);
LABEL_81:
        v35 = a3;
        goto LABEL_100;
      }
    }
    else
    {
      v15 = 2 * v20;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v20) = v62;
      *(_DWORD *)(a4 + 32) = v21;
    }
    v22 = v59;
    v18 = 1;
    ++*v59;
  }
  else
  {
    v22 = v59;
  }
  v17 = (*(_BYTE *)(v9 + 16) & 4) == 0;
  LODWORD(v54) = v8;
  if ( !v17 || (*(_BYTE *)(v9 + 16) & 8) != 0 )
  {
    DWORD2(v61) = 0;
    *(_QWORD *)&v61 = _mm_unpacklo_ps(
                        (__m128)0LL,
                        (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue).m128_u64[0];
    *(_QWORD *)&v62 = v61;
    DWORD2(v62) = 0;
    if ( !(unsigned int)D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v51 = D3DXVec3TransformCoord((struct D2DVector3 *)&v62, (const struct D2DVector3 *)&v61, v23);
      D3DXVec3Normalize((struct D2DVector3 *)&v62, v51);
    }
    HIDWORD(v62) = *(_DWORD *)(a1 + 1344);
    v24 = *(_DWORD *)(a4 + 32);
    v25 = v24 + 1;
    if ( v24 + 1 >= v24 )
    {
      v8 = 0;
      LODWORD(v54) = 0;
      if ( v25 <= *(_DWORD *)(a4 + 28) )
      {
        v15 = 2 * v24;
        *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v24) = v62;
        *(_DWORD *)(a4 + 32) = v25;
LABEL_30:
        v22 = v59;
        v26 = 1;
        ++*v59;
        goto LABEL_31;
      }
      v45 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v62);
      LODWORD(v54) = v45;
      v8 = v45;
      if ( v45 >= 0 )
        goto LABEL_30;
      goto LABEL_80;
    }
LABEL_106:
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_81;
  }
  v26 = 0;
  if ( v8 < 0 )
    goto LABEL_99;
LABEL_31:
  if ( (*(_BYTE *)(v9 + 16) & 0x10) == 0 && (*(_BYTE *)(v9 + 16) & 0x20) == 0 )
  {
    LOBYTE(v15) = 0;
    goto LABEL_37;
  }
  v27 = *(_DWORD *)(a1 + 1344);
  *(_QWORD *)&v61 = 0LL;
  HIDWORD(v61) = v27;
  v28 = *(_DWORD *)(a4 + 32);
  DWORD2(v61) = 1065353216;
  v29 = v28 + 1;
  if ( v28 + 1 < v28 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_99;
  }
  v8 = 0;
  LODWORD(v54) = 0;
  if ( v29 > *(_DWORD *)(a4 + 28) )
  {
    v46 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v61);
    LODWORD(v54) = v46;
    v8 = v46;
    if ( v46 >= 0 )
    {
      v22 = v59;
      goto LABEL_36;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0xC0u, 0LL);
LABEL_99:
    v35 = v55;
    goto LABEL_100;
  }
  v15 = 2 * v28;
  *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v28) = v61;
  *(_DWORD *)(a4 + 32) = v29;
LABEL_36:
  ++*v22;
  LOBYTE(v15) = 1;
  v53 = 1;
LABEL_37:
  if ( *v22 > 0 )
  {
    v30 = *(_DWORD *)(a4 + 32) - *v22;
    v58 = v30;
    v31 = v30 + 1;
    if ( !v18 )
      v31 = v30;
    v57 = v31;
    LODWORD(v22) = v31 + 1;
    if ( !v26 )
      LODWORD(v22) = v31;
    *(_DWORD *)(a1 + 812) = 0;
    *(_DWORD *)(a1 + 816) = 0;
    *(_DWORD *)(a1 + 820) = 0;
    v56 = (int)v22;
    if ( v30 > 3LL )
    {
      v32 = v58;
      *(_QWORD *)&v61 = 3LL;
      v33 = 48LL;
      *(_QWORD *)&v62 = 48LL;
      v34 = 3;
      while ( v18 )
      {
        v47 = *(_QWORD *)(a4 + 8);
        if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                v47 + 16LL * (unsigned int)v32,
                                v47 + 16LL * v34) )
          *(_DWORD *)(a1 + 812) |= *(_DWORD *)(v47 + v33 + 12);
        v18 = *(_DWORD *)(a1 + 812) != 7;
        if ( v26 )
          goto LABEL_89;
LABEL_92:
        LOBYTE(v15) = v53;
        if ( v53 )
        {
          LODWORD(v22) = v56;
LABEL_94:
          v49 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                  v49 + 16LL * (unsigned int)v22,
                                  v49 + 16LL * v34) )
            *(_DWORD *)(a1 + 820) |= *(_DWORD *)(v62 + v49 + 12);
          v33 = v62;
          LOBYTE(v15) = *(_DWORD *)(a1 + 820) != 7;
          v53 = v15;
        }
        v33 += 16LL;
        LODWORD(v22) = v56;
        ++v34;
        *(_QWORD *)&v61 = v61 + 1;
        *(_QWORD *)&v62 = v33;
        if ( (__int64)v61 >= v32 )
        {
LABEL_47:
          v8 = v54;
          v9 = v63;
          goto LABEL_48;
        }
      }
      if ( !v26 )
      {
        if ( !(_BYTE)v15 )
          goto LABEL_47;
        goto LABEL_94;
      }
LABEL_89:
      v48 = *(_QWORD *)(a4 + 8);
      if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v48 + 16LL * v57, v48 + 16LL * v34) )
        *(_DWORD *)(a1 + 816) |= *(_DWORD *)(v48 + v33 + 12);
      v26 = *(_DWORD *)(a1 + 816) != 7;
      goto LABEL_92;
    }
  }
LABEL_48:
  v35 = v55;
  if ( *(_BYTE *)a4 || *(_BYTE *)(a4 + 1) || v55 == *(_QWORD *)v9 )
    goto LABEL_100;
  if ( (*(_BYTE *)(a1 + 808) & 4) != 0 || v66 != 1.0 )
  {
    v36 = v60;
    if ( (*(_BYTE *)(v9 + 16) & 0x30) != 0 )
      *(_BYTE *)(v60 + 2) = 1;
  }
  else
  {
    v36 = v60;
  }
  if ( *(_BYTE *)(v36 + 2) )
    goto LABEL_100;
  if ( v67 == 1 )
  {
    if ( (*(_BYTE *)(v9 + 16) & 1) == 0 && (*(_BYTE *)(v9 + 16) & 2) == 0 )
      goto LABEL_100;
    v37 = _mm_unpacklo_ps((__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue, (__m128)0LL).m128_u64[0];
  }
  else
  {
    if ( v67 != 2 || (*(_BYTE *)(v9 + 16) & 4) == 0 && (*(_BYTE *)(v9 + 16) & 8) == 0 )
      goto LABEL_100;
    v37 = _mm_unpacklo_ps((__m128)0LL, (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue).m128_u64[0];
  }
  DWORD2(v61) = 0;
  v64 = 0;
  v38 = v36 + 8;
  v63 = v37;
  *(_QWORD *)&v61 = v37;
  if ( !(unsigned int)D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
  {
    v52 = D3DXVec3TransformCoord((struct D2DVector3 *)&v61, (const struct D2DVector3 *)&v63, v39);
    D3DXVec3Normalize((struct D2DVector3 *)&v61, v52);
  }
  HIDWORD(v61) = *(_DWORD *)(a1 + 1344);
  v40 = *(_DWORD *)(v38 + 24);
  v41 = v40 + 1;
  if ( v40 + 1 < v40 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_100;
  }
  v8 = 0;
  if ( v41 > *(_DWORD *)(v38 + 20) )
  {
    v44 = DynArrayImpl<0>::AddMultipleAndSet(v38, 16, 1, &v61);
    v8 = v44;
    if ( v44 >= 0 )
      goto LABEL_65;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0xC0u, 0LL);
LABEL_100:
    v42 = a7;
    goto LABEL_66;
  }
  v15 = 2 * v40;
  *(_OWORD *)(*(_QWORD *)v38 + 16LL * v40) = v61;
  *(_DWORD *)(v38 + 24) = v41;
LABEL_65:
  v42 = a7;
  ++*a7;
LABEL_66:
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v57 = *v42;
    v63 = v35;
    v60 = a1;
    v58 = *v59;
    v56 = *(_DWORD *)(a1 + 784);
    LODWORD(v54) = *(_DWORD *)(a1 + 788);
    *(_QWORD *)&v61 = *(_QWORD *)v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (unsigned int)&unk_1803D6C3D,
      (_DWORD)v22,
      v16,
      (__int64)&v60,
      (__int64)&v61,
      (__int64)&v63,
      (__int64)&v54,
      (__int64)&v56,
      (__int64)&v58,
      (__int64)&v57);
  }
  return (unsigned int)v8;
}
