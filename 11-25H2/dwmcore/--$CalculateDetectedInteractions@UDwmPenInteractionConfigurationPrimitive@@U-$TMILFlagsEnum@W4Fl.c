/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x180203C44
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18017C86C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18015F85C (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B8F8 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18017E2E0 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18017E414 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18017E528 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        char *a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v8; // ebx
  char *v9; // r12
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
  unsigned int v30; // ebx
  __int64 v31; // r13
  unsigned int v32; // r12d
  __int64 v33; // r14
  __int64 v34; // rsi
  __int64 v35; // r13
  char *v36; // r14
  __int64 v37; // rax
  unsigned __int64 v38; // xmm0_8
  __int64 v39; // rsi
  const struct D2DMatrix *v40; // rcx
  unsigned int v41; // eax
  unsigned int v42; // edx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  const struct D2DVector3 *v47; // rax
  const struct D2DVector3 *v48; // rax
  const struct D2DVector3 *v49; // rax
  char v50; // [rsp+68h] [rbp-A0h]
  int v51; // [rsp+78h] [rbp-90h]
  unsigned int v53; // [rsp+88h] [rbp-80h]
  unsigned int v54; // [rsp+8Ch] [rbp-7Ch]
  int v55; // [rsp+90h] [rbp-78h]
  __int128 v56; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v57; // [rsp+B8h] [rbp-50h] BYREF
  char *v58; // [rsp+C8h] [rbp-40h] BYREF
  int v59; // [rsp+D0h] [rbp-38h]
  _BYTE v60[16]; // [rsp+D8h] [rbp-30h] BYREF
  float v61; // [rsp+E8h] [rbp-20h]
  int v62; // [rsp+ECh] [rbp-1Ch]
  int v63; // [rsp+118h] [rbp+10h] BYREF
  char v64; // [rsp+11Ch] [rbp+14h]

  v8 = 0;
  v9 = a2;
  *a5 = 0;
  *a7 = 0;
  v12 = *(_QWORD *)a2;
  v58 = a2;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 40LL))(v12, v60);
  (*(void (__fastcall **)(char *, int *))(*(_QWORD *)a3 + 40LL))(a3, &v63);
  if ( (unsigned int)(*(_DWORD *)(a1 + 784) - 2) > 2 && (v60[4] & 1) == 0 && (v64 & 1) == 0
    || (v14 = v63 == 2, *(_DWORD *)(a1 + 784) = 3, v14) )
  {
    if ( (v9[16] & 0x40) != 0 )
      *(_BYTE *)a4 = 1;
  }
  if ( (v63 == 4 || (unsigned int)(*(_DWORD *)(a1 + 784) - 2) > 2) && v9[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v15 = 0;
  v50 = 0;
  if ( (v9[16] & 3) != 0 )
  {
    DWORD2(v56) = 0;
    *(_QWORD *)&v56 = _mm_unpacklo_ps(
                        (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue,
                        (__m128)0LL).m128_u64[0];
    *(_QWORD *)&v57 = v56;
    DWORD2(v57) = 0;
    if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v47 = D3DXVec3TransformCoord((struct D2DVector3 *)&v57, (const struct D2DVector3 *)&v56, v16);
      D3DXVec3Normalize((struct D2DVector3 *)&v57, v47);
    }
    HIDWORD(v57) = *(_DWORD *)(a1 + 1344);
    v17 = *(_DWORD *)(a4 + 32);
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
      goto LABEL_99;
    if ( v18 > *(_DWORD *)(a4 + 28) )
    {
      v44 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v57);
      v8 = v44;
      if ( v44 < 0 )
      {
LABEL_77:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0xC0u, 0LL);
LABEL_78:
        v36 = a3;
        goto LABEL_65;
      }
    }
    else
    {
      v13 = 2LL * v17;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v17) = v57;
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
  v51 = v8;
  if ( (v9[16] & 4) != 0 || (v9[16] & 8) != 0 )
  {
    DWORD2(v56) = 0;
    *(_QWORD *)&v56 = _mm_unpacklo_ps(
                        (__m128)0LL,
                        (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue).m128_u64[0];
    *(_QWORD *)&v57 = v56;
    DWORD2(v57) = 0;
    if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v48 = D3DXVec3TransformCoord((struct D2DVector3 *)&v57, (const struct D2DVector3 *)&v56, v20);
      D3DXVec3Normalize((struct D2DVector3 *)&v57, v48);
    }
    HIDWORD(v57) = *(_DWORD *)(a1 + 1344);
    v21 = *(_DWORD *)(a4 + 32);
    v22 = v21 + 1;
    if ( v21 + 1 >= v21 )
    {
      v8 = 0;
      v51 = 0;
      if ( v22 <= *(_DWORD *)(a4 + 28) )
      {
        v13 = 2LL * v21;
        *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v21) = v57;
        *(_DWORD *)(a4 + 32) = v22;
LABEL_18:
        v19 = a5;
        v23 = 1;
        ++*a5;
        goto LABEL_19;
      }
      v44 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v57);
      v51 = v44;
      v8 = v44;
      if ( v44 >= 0 )
        goto LABEL_18;
      goto LABEL_77;
    }
LABEL_99:
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_78;
  }
  v23 = 0;
  if ( v8 < 0 )
  {
LABEL_64:
    v36 = a3;
    goto LABEL_65;
  }
LABEL_19:
  if ( (v9[16] & 0x10) != 0 || (v9[16] & 0x20) != 0 )
  {
    v24 = *(_DWORD *)(a1 + 1344);
    *(_QWORD *)&v56 = 0LL;
    HIDWORD(v56) = v24;
    v25 = *(_DWORD *)(a4 + 32);
    DWORD2(v56) = 1065353216;
    v26 = v25 + 1;
    if ( v25 + 1 < v25 )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_64;
    }
    v8 = 0;
    v51 = 0;
    if ( v26 > *(_DWORD *)(a4 + 28) )
    {
      v45 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v56);
      v51 = v45;
      v8 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0xC0u, 0LL);
        goto LABEL_64;
      }
      v19 = a5;
    }
    else
    {
      v13 = 2LL * v25;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v25) = v56;
      *(_DWORD *)(a4 + 32) = v26;
    }
    ++*v19;
    LOBYTE(v13) = 1;
    v50 = 1;
  }
  else
  {
    LOBYTE(v13) = 0;
  }
  if ( *v19 > 0 )
  {
    v27 = *(_DWORD *)(a4 + 32) - *v19;
    v55 = v27;
    v28 = v27 + 1;
    if ( !v15 )
      v28 = *(_DWORD *)(a4 + 32) - *v19;
    v54 = v28;
    v29 = v28 + 1;
    if ( !v23 )
      v29 = v28;
    *(_DWORD *)(a1 + 812) = 0;
    *(_DWORD *)(a1 + 816) = 0;
    *(_DWORD *)(a1 + 820) = 0;
    v53 = v29;
    if ( v27 > 3LL )
    {
      v30 = v27;
      *(_QWORD *)&v56 = 3LL;
      v31 = 48LL;
      *(_QWORD *)&v57 = 48LL;
      v32 = 3;
      while ( v15 )
      {
        v33 = *(_QWORD *)(a4 + 8);
        if ( anonymous_namespace_::VectorInsideAngleThreshold(
               (const struct D2DVector3 *)(v33 + 16LL * v30),
               (const struct D2DVector3 *)(v33 + 16LL * v32)) )
        {
          *(_DWORD *)(a1 + 812) |= *(_DWORD *)(v33 + v31 + 12);
        }
        v15 = *(_DWORD *)(a1 + 812) != 7;
        if ( v23 )
          goto LABEL_35;
LABEL_38:
        LOBYTE(v13) = v50;
        if ( v50 )
        {
          v29 = v53;
LABEL_40:
          v35 = *(_QWORD *)(a4 + 8);
          if ( anonymous_namespace_::VectorInsideAngleThreshold(
                 (const struct D2DVector3 *)(v35 + 16LL * v29),
                 (const struct D2DVector3 *)(v35 + 16LL * v32)) )
          {
            *(_DWORD *)(a1 + 820) |= *(_DWORD *)(v57 + v35 + 12);
          }
          v31 = v57;
          LOBYTE(v13) = *(_DWORD *)(a1 + 820) != 7;
          v50 = v13;
        }
        v31 += 16LL;
        v29 = v53;
        ++v32;
        *(_QWORD *)&v56 = v56 + 1;
        *(_QWORD *)&v57 = v31;
        if ( (__int64)v56 >= v55 )
          goto LABEL_44;
      }
      if ( !v23 )
      {
        if ( !(_BYTE)v13 )
        {
LABEL_44:
          v8 = v51;
          v9 = v58;
          goto LABEL_45;
        }
        goto LABEL_40;
      }
LABEL_35:
      v34 = *(_QWORD *)(a4 + 8);
      if ( anonymous_namespace_::VectorInsideAngleThreshold(
             (const struct D2DVector3 *)(v34 + 16LL * v54),
             (const struct D2DVector3 *)(v34 + 16LL * v32)) )
      {
        *(_DWORD *)(a1 + 816) |= *(_DWORD *)(v34 + v31 + 12);
      }
      v23 = *(_DWORD *)(a1 + 816) != 7;
      goto LABEL_38;
    }
  }
LABEL_45:
  v36 = a3;
  if ( !*(_BYTE *)a4 && !*(_BYTE *)(a4 + 1) && a3 != *(char **)v9 )
  {
    if ( (*(_BYTE *)(a1 + 808) & 4) != 0 || v61 != 1.0 )
    {
      v37 = a6;
      if ( (v9[16] & 0x30) != 0 )
        *(_BYTE *)(a6 + 2) = 1;
    }
    else
    {
      v37 = a6;
    }
    if ( !*(_BYTE *)(v37 + 2) )
    {
      if ( v62 == 1 )
      {
        if ( (v9[16] & 1) == 0 && (v9[16] & 2) == 0 )
          goto LABEL_65;
        v38 = _mm_unpacklo_ps((__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue, (__m128)0LL).m128_u64[0];
      }
      else
      {
        if ( v62 != 2 || (v9[16] & 4) == 0 && (v9[16] & 8) == 0 )
          goto LABEL_65;
        v38 = _mm_unpacklo_ps((__m128)0LL, (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue).m128_u64[0];
      }
      DWORD2(v56) = 0;
      v59 = 0;
      v39 = v37 + 8;
      v58 = (char *)v38;
      *(_QWORD *)&v56 = v38;
      if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
      {
        v49 = D3DXVec3TransformCoord((struct D2DVector3 *)&v56, (const struct D2DVector3 *)&v58, v40);
        D3DXVec3Normalize((struct D2DVector3 *)&v56, v49);
      }
      HIDWORD(v56) = *(_DWORD *)(a1 + 1344);
      v41 = *(_DWORD *)(v39 + 24);
      v42 = v41 + 1;
      if ( v41 + 1 < v41 )
      {
        v8 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
        goto LABEL_65;
      }
      v8 = 0;
      if ( v42 > *(_DWORD *)(v39 + 20) )
      {
        v46 = DynArrayImpl<0>::AddMultipleAndSet(v39, 16, 1, &v56);
        v8 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0xC0u, 0LL);
          goto LABEL_65;
        }
      }
      else
      {
        v13 = 2LL * v41;
        *(_OWORD *)(*(_QWORD *)v39 + 16LL * v41) = v56;
        *(_DWORD *)(v39 + 24) = v42;
      }
      ++*a7;
    }
  }
LABEL_65:
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v58 = v36;
    *(_QWORD *)&v56 = *(_QWORD *)v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (__int64)&unk_1803D6C3D);
  }
  return (unsigned int)v8;
}
