/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18017C168
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BA18 (--$CalculateHandledInteractions@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BD68 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ??$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x1801F1444 (--$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@444444444444444444444444@Z @ 0x18017A890 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18017ADCC (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x18017B6E4 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B8F8 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18017E528 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ConvertGlobalMotionToLocalMotion(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        struct D2DMatrix *a6)
{
  __int128 v7; // xmm4
  __int128 v9; // xmm8
  __int128 v10; // xmm12
  __int128 v11; // xmm8
  __int128 v12; // xmm12
  __int128 v13; // xmm4
  int v14; // xmm0_4
  float v15; // xmm2_4
  __int64 v16; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v17; // r8
  const struct D2DMatrix *v18; // r9
  __int64 v19; // rcx
  const struct D2DMatrix *v20; // r9
  struct D2DMatrix *v21; // r10
  const struct D2DMatrix *v22; // rax
  __m128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __m128 v28; // [rsp+168h] [rbp-30h] BYREF
  __int128 v29; // [rsp+178h] [rbp-20h]
  __m256i v30; // [rsp+188h] [rbp-10h]
  __m128 v31; // [rsp+1A8h] [rbp+10h] BYREF
  __int128 v32; // [rsp+1B8h] [rbp+20h]
  __m256i v33; // [rsp+1C8h] [rbp+30h]
  int v34; // [rsp+1E8h] [rbp+50h]
  __int64 v35; // [rsp+1F8h] [rbp+60h]
  __int64 v36; // [rsp+200h] [rbp+68h]
  __int64 v37; // [rsp+208h] [rbp+70h]
  __int64 v38; // [rsp+210h] [rbp+78h]
  _QWORD *v39; // [rsp+218h] [rbp+80h]

  v7 = xmmword_1804058D0;
  v9 = xmmword_1804058E0;
  v10 = xmmword_1804058F0;
  *a5 = CMILMatrix::Identity;
  a5[1] = v7;
  a5[2] = v9;
  a5[3] = v10;
  v11 = xmmword_1804058E0;
  v12 = xmmword_1804058F0;
  v13 = xmmword_1804058D0;
  *(_OWORD *)a6 = CMILMatrix::Identity;
  *((_OWORD *)a6 + 1) = v13;
  *((_OWORD *)a6 + 2) = v11;
  *((_OWORD *)a6 + 3) = v12;
  v14 = *(_DWORD *)(a3 + 4);
  v15 = *(float *)(a3 + 8);
  *(_DWORD *)a2 = *(_DWORD *)a3;
  *(_DWORD *)(a2 + 4) = v14;
  *(float *)(a2 + 8) = (float)(1.0 / v15) - 1.0;
  v28.m128_i32[3] = *(&CMILMatrix::Identity + 3);
  HIDWORD(v29) = HIDWORD(xmmword_1804058D0);
  *(_OWORD *)((char *)&v30.m256i_u64[1] + 4) = *(__int128 *)((char *)&xmmword_1804058E0 + 12);
  v30.m256i_i32[7] = HIDWORD(xmmword_1804058F0);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a1 + 1044) )
  {
    v24 = *(__m128 *)v16;
    v25 = *(_OWORD *)(v16 + 16);
    v34 = *(_DWORD *)(v16 + 64);
    v31 = v24;
    v26 = *(_OWORD *)(v16 + 32);
    v32 = v25;
    v27 = *(_OWORD *)(v16 + 48);
    *(_OWORD *)v33.m256i_i8 = v26;
    *(_OWORD *)&v33.m256i_u64[2] = v27;
    if ( Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v31, &v31, v17) )
    {
      v28 = v31;
      v30 = v33;
      v29 = v32;
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, (const struct D2DMatrix *)&v28);
    }
  }
  if ( !(unsigned int)D2DMatrixIsIdentity(v18) )
  {
    v22 = D2DMatrixTranspose(v21, v20);
    if ( D2DMatrixInverse(a6, 0LL, v22) )
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, a6);
  }
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v35 = a1[60];
    v36 = a1[40];
    v37 = a1[20];
    v38 = *a1;
    v39 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      (__int64)&unk_1803D700A);
  }
  return a2;
}
