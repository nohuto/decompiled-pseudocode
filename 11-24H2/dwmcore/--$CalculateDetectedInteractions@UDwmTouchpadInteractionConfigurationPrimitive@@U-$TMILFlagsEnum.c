/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x180129CD4
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180128F8C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180128018 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18012AA00 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18012AB34 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18012AC48 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18015B40C (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        char *a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        unsigned int *a7)
{
  int v8; // ebx
  char *v9; // r12
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // r9d
  bool v15; // zf
  bool v16; // r14
  const struct D2DMatrix *v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // edx
  int *v20; // r8
  const struct D2DMatrix *v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // edx
  bool v24; // si
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // eax
  int v29; // edx
  __int64 v30; // rbx
  __int64 v31; // r13
  unsigned int v32; // r12d
  __int64 v33; // r14
  __int64 v34; // rsi
  char *v35; // r14
  __int64 v36; // rax
  unsigned __int64 v37; // xmm0_8
  __int64 v38; // rsi
  const struct D2DMatrix *v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // edx
  unsigned int *v42; // rdx
  __int64 v44; // r13
  int v45; // eax
  int v46; // eax
  int v47; // eax
  const struct D2DVector3 *v48; // rax
  const struct D2DVector3 *v49; // rax
  const struct D2DVector3 *v50; // rax
  char v51; // [rsp+68h] [rbp-A0h]
  __int64 v52; // [rsp+78h] [rbp-90h] BYREF
  char *v53; // [rsp+80h] [rbp-88h]
  int v54; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v55; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v56; // [rsp+90h] [rbp-78h] BYREF
  int *v57; // [rsp+98h] [rbp-70h]
  __int64 v58; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v59; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-50h] BYREF
  char *v61; // [rsp+C8h] [rbp-40h] BYREF
  int v62; // [rsp+D0h] [rbp-38h]
  _BYTE v63[16]; // [rsp+D8h] [rbp-30h] BYREF
  float v64; // [rsp+E8h] [rbp-20h]
  int v65; // [rsp+ECh] [rbp-1Ch]
  int v66; // [rsp+118h] [rbp+10h] BYREF
  char v67; // [rsp+11Ch] [rbp+14h]

  v8 = 0;
  v58 = a6;
  v9 = a2;
  *a5 = 0;
  v57 = a5;
  *a7 = 0;
  v12 = *(_QWORD *)a2;
  v61 = a2;
  v53 = a3;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 40LL))(v12, v63);
  (*(void (__fastcall **)(char *, int *))(*(_QWORD *)a3 + 40LL))(a3, &v66);
  if ( (unsigned int)(*(_DWORD *)(a1 + 784) - 2) > 2 && (v63[4] & 1) == 0 && (v67 & 1) == 0
    || (v15 = v66 == 2, *(_DWORD *)(a1 + 784) = 3, v15) )
  {
    if ( (v9[16] & 0x40) != 0 )
      *(_BYTE *)a4 = 1;
  }
  if ( ((unsigned int)(*(_DWORD *)(a1 + 784) - 2) > 2 || v66 == 4) && v9[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v16 = 0;
  v51 = 0;
  if ( (v9[16] & 3) != 0 )
  {
    DWORD2(v59) = 0;
    *(_QWORD *)&v59 = _mm_unpacklo_ps(
                        (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue,
                        (__m128)0LL).m128_u64[0];
    *(_QWORD *)&v60 = v59;
    DWORD2(v60) = 0;
    if ( !(unsigned int)D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v48 = D3DXVec3TransformCoord((struct D2DVector3 *)&v60, (const struct D2DVector3 *)&v59, v17);
      D3DXVec3Normalize((struct D2DVector3 *)&v60, v48);
    }
    HIDWORD(v60) = *(_DWORD *)(a1 + 1344);
    v18 = *(_DWORD *)(a4 + 32);
    v19 = v18 + 1;
    if ( v18 + 1 < v18 )
      goto LABEL_98;
    if ( v19 > *(_DWORD *)(a4 + 28) )
    {
      v46 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v60);
      v8 = v46;
      if ( v46 < 0 )
      {
LABEL_85:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0xC0u, 0LL);
LABEL_86:
        v35 = a3;
        goto LABEL_81;
      }
    }
    else
    {
      v13 = 2 * v18;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v18) = v60;
      *(_DWORD *)(a4 + 32) = v19;
    }
    v20 = v57;
    v16 = 1;
    ++*v57;
  }
  else
  {
    v20 = v57;
  }
  v15 = (v9[16] & 4) == 0;
  LODWORD(v52) = v8;
  if ( !v15 || (v9[16] & 8) != 0 )
  {
    DWORD2(v59) = 0;
    *(_QWORD *)&v59 = _mm_unpacklo_ps(
                        (__m128)0LL,
                        (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue).m128_u64[0];
    *(_QWORD *)&v60 = v59;
    DWORD2(v60) = 0;
    if ( !(unsigned int)D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v49 = D3DXVec3TransformCoord((struct D2DVector3 *)&v60, (const struct D2DVector3 *)&v59, v21);
      D3DXVec3Normalize((struct D2DVector3 *)&v60, v49);
    }
    HIDWORD(v60) = *(_DWORD *)(a1 + 1344);
    v22 = *(_DWORD *)(a4 + 32);
    v23 = v22 + 1;
    if ( v22 + 1 >= v22 )
    {
      v8 = 0;
      LODWORD(v52) = 0;
      if ( v23 <= *(_DWORD *)(a4 + 28) )
      {
        v13 = 2 * v22;
        *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v22) = v60;
        *(_DWORD *)(a4 + 32) = v23;
LABEL_19:
        v20 = v57;
        v24 = 1;
        ++*v57;
        goto LABEL_20;
      }
      v46 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v60);
      LODWORD(v52) = v46;
      v8 = v46;
      if ( v46 >= 0 )
        goto LABEL_19;
      goto LABEL_85;
    }
LABEL_98:
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_86;
  }
  v24 = 0;
  if ( v8 < 0 )
    goto LABEL_80;
LABEL_20:
  if ( (v9[16] & 0x10) == 0 && (v9[16] & 0x20) == 0 )
  {
    LOBYTE(v13) = 0;
    goto LABEL_26;
  }
  v25 = *(_DWORD *)(a1 + 1344);
  *(_QWORD *)&v59 = 0LL;
  HIDWORD(v59) = v25;
  v26 = *(_DWORD *)(a4 + 32);
  DWORD2(v59) = 1065353216;
  v27 = v26 + 1;
  if ( v26 + 1 < v26 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_80;
  }
  v8 = 0;
  LODWORD(v52) = 0;
  if ( v27 > *(_DWORD *)(a4 + 28) )
  {
    v47 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v59);
    LODWORD(v52) = v47;
    v8 = v47;
    if ( v47 >= 0 )
    {
      v20 = v57;
      goto LABEL_25;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0xC0u, 0LL);
LABEL_80:
    v35 = v53;
    goto LABEL_81;
  }
  v13 = 2 * v26;
  *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v26) = v59;
  *(_DWORD *)(a4 + 32) = v27;
LABEL_25:
  ++*v20;
  LOBYTE(v13) = 1;
  v51 = 1;
LABEL_26:
  if ( *v20 > 0 )
  {
    v28 = *(_DWORD *)(a4 + 32) - *v20;
    v56 = v28;
    v29 = v28 + 1;
    if ( !v16 )
      v29 = v28;
    v55 = v29;
    LODWORD(v20) = v29 + 1;
    if ( !v24 )
      LODWORD(v20) = v29;
    *(_DWORD *)(a1 + 812) = 0;
    *(_DWORD *)(a1 + 816) = 0;
    *(_DWORD *)(a1 + 820) = 0;
    v54 = (int)v20;
    if ( v28 > 3LL )
    {
      v30 = v56;
      *(_QWORD *)&v59 = 3LL;
      v31 = 48LL;
      *(_QWORD *)&v60 = 48LL;
      v32 = 3;
      while ( v16 )
      {
        v33 = *(_QWORD *)(a4 + 8);
        if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                v33 + 16LL * (unsigned int)v30,
                                v33 + 16LL * v32) )
          *(_DWORD *)(a1 + 812) |= *(_DWORD *)(v33 + v31 + 12);
        v16 = *(_DWORD *)(a1 + 812) != 7;
        if ( v24 )
          goto LABEL_37;
LABEL_40:
        LOBYTE(v13) = v51;
        if ( v51 )
        {
          LODWORD(v20) = v54;
LABEL_70:
          v44 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                  v44 + 16LL * (unsigned int)v20,
                                  v44 + 16LL * v32) )
            *(_DWORD *)(a1 + 820) |= *(_DWORD *)(v60 + v44 + 12);
          v31 = v60;
          LOBYTE(v13) = *(_DWORD *)(a1 + 820) != 7;
          v51 = v13;
        }
        v31 += 16LL;
        LODWORD(v20) = v54;
        ++v32;
        *(_QWORD *)&v59 = v59 + 1;
        *(_QWORD *)&v60 = v31;
        if ( (__int64)v59 >= v30 )
          goto LABEL_45;
      }
      if ( !v24 )
      {
        if ( !(_BYTE)v13 )
        {
LABEL_45:
          v8 = v52;
          v9 = v61;
          goto LABEL_46;
        }
        goto LABEL_70;
      }
LABEL_37:
      v34 = *(_QWORD *)(a4 + 8);
      if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v34 + 16LL * v55, v34 + 16LL * v32) )
        *(_DWORD *)(a1 + 816) |= *(_DWORD *)(v34 + v31 + 12);
      v24 = *(_DWORD *)(a1 + 816) != 7;
      goto LABEL_40;
    }
  }
LABEL_46:
  v35 = v53;
  if ( *(_BYTE *)a4 || *(_BYTE *)(a4 + 1) || v53 == *(char **)v9 )
    goto LABEL_81;
  if ( (*(_BYTE *)(a1 + 808) & 4) != 0 || v64 != 1.0 )
  {
    v36 = v58;
    if ( (v9[16] & 0x30) != 0 )
      *(_BYTE *)(v58 + 2) = 1;
  }
  else
  {
    v36 = v58;
  }
  if ( *(_BYTE *)(v36 + 2) )
    goto LABEL_81;
  if ( v65 == 1 )
  {
    if ( (v9[16] & 1) == 0 && (v9[16] & 2) == 0 )
      goto LABEL_81;
    v37 = _mm_unpacklo_ps((__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue, (__m128)0LL).m128_u64[0];
  }
  else
  {
    if ( v65 != 2 || (v9[16] & 4) == 0 && (v9[16] & 8) == 0 )
      goto LABEL_81;
    v37 = _mm_unpacklo_ps((__m128)0LL, (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue).m128_u64[0];
  }
  DWORD2(v59) = 0;
  v62 = 0;
  v38 = v36 + 8;
  v61 = (char *)v37;
  *(_QWORD *)&v59 = v37;
  if ( !(unsigned int)D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
  {
    v50 = D3DXVec3TransformCoord((struct D2DVector3 *)&v59, (const struct D2DVector3 *)&v61, v39);
    D3DXVec3Normalize((struct D2DVector3 *)&v59, v50);
  }
  HIDWORD(v59) = *(_DWORD *)(a1 + 1344);
  v40 = *(_DWORD *)(v38 + 24);
  v41 = v40 + 1;
  if ( v40 + 1 < v40 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_81;
  }
  v8 = 0;
  if ( v41 > *(_DWORD *)(v38 + 20) )
  {
    v45 = DynArrayImpl<0>::AddMultipleAndSet(v38, 16, 1, &v59);
    v8 = v45;
    if ( v45 >= 0 )
      goto LABEL_63;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0xC0u, 0LL);
LABEL_81:
    v42 = a7;
    goto LABEL_64;
  }
  v13 = 2 * v40;
  *(_OWORD *)(*(_QWORD *)v38 + 16LL * v40) = v59;
  *(_DWORD *)(v38 + 24) = v41;
LABEL_63:
  v42 = a7;
  ++*a7;
LABEL_64:
  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v55 = *v42;
    v61 = v35;
    v58 = a1;
    v56 = *v57;
    v54 = *(_DWORD *)(a1 + 784);
    LODWORD(v52) = *(_DWORD *)(a1 + 788);
    *(_QWORD *)&v59 = *(_QWORD *)v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (unsigned int)&unk_1803CBCC5,
      (_DWORD)v20,
      v14,
      (__int64)&v58,
      (__int64)&v59,
      (__int64)&v61,
      (__int64)&v52,
      (__int64)&v54,
      (__int64)&v56,
      (__int64)&v55);
  }
  return (unsigned int)v8;
}
