/*
 * XREFs of ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017B3D8
 * Callers:
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017C6C0 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444444444@Z @ 0x18017AB78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x18017B6E4 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     _anonymous_namespace_::ReverseAndLeftShift @ 0x18017B76C (_anonymous_namespace_--ReverseAndLeftShift.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B8F8 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        struct D2DMatrix *a5)
{
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  const struct D2DMatrix *v10; // rax
  const struct D2DVector3 *v11; // r10
  __int64 v12; // rcx
  float v13; // esi
  __m128 v14; // xmm2
  _BYTE *v15; // rcx
  _BYTE *v16; // rax
  __m128 v17; // xmm1
  _BYTE *v18; // rdx
  _BYTE *v19; // rcx
  __int64 result; // rax
  __int64 v21; // [rsp+E0h] [rbp-80h] BYREF
  float v22; // [rsp+E8h] [rbp-78h]
  int v23; // [rsp+F0h] [rbp-70h]
  int v24; // [rsp+F4h] [rbp-6Ch]
  int v25; // [rsp+F8h] [rbp-68h]
  int v26; // [rsp+FCh] [rbp-64h]
  int v27; // [rsp+100h] [rbp-60h]
  int v28; // [rsp+104h] [rbp-5Ch]
  int v29; // [rsp+108h] [rbp-58h]
  int v30; // [rsp+10Ch] [rbp-54h]
  int v31; // [rsp+110h] [rbp-50h]
  int v32; // [rsp+114h] [rbp-4Ch]
  int v33; // [rsp+118h] [rbp-48h]
  int v34; // [rsp+11Ch] [rbp-44h]
  int v35; // [rsp+120h] [rbp-40h]
  int v36; // [rsp+124h] [rbp-3Ch]
  int v37; // [rsp+128h] [rbp-38h]
  float v38; // [rsp+12Ch] [rbp-34h]
  int v39; // [rsp+130h] [rbp-30h]
  int v40; // [rsp+134h] [rbp-2Ch]
  int v41; // [rsp+138h] [rbp-28h]
  __int64 v42; // [rsp+140h] [rbp-20h]
  __int64 v43; // [rsp+148h] [rbp-18h]
  _DWORD v44[16]; // [rsp+150h] [rbp-10h] BYREF
  char v45[64]; // [rsp+190h] [rbp+30h] BYREF

  v8 = (_OWORD *)anonymous_namespace_::ReverseAndLeftShift(v45, (char *)a3 + 20);
  *(_OWORD *)a5 = *v8;
  *((_OWORD *)a5 + 1) = v8[1];
  *((_OWORD *)a5 + 2) = v8[2];
  v9 = v8[3];
  v21 = 0LL;
  *((_OWORD *)a5 + 3) = v9;
  v22 = 0.0;
  v10 = D2DMatrixTranspose((struct D2DMatrix *)v44, a5);
  D3DXVec3TransformCoord((struct D2DVector3 *)&v21, v11, v10);
  v13 = v22;
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v23 = *((_DWORD *)a3 + 11);
    v24 = *((_DWORD *)a3 + 10);
    v25 = *((_DWORD *)a3 + 9);
    v26 = *((_DWORD *)a3 + 7);
    v27 = *((_DWORD *)a3 + 6);
    v28 = *((_DWORD *)a3 + 5);
    v29 = v44[10];
    v30 = v44[9];
    v31 = v44[8];
    v32 = v44[6];
    v33 = v44[5];
    v34 = v44[4];
    v35 = v44[2];
    v36 = v44[1];
    v37 = v44[0];
    v39 = HIDWORD(v21);
    v40 = v21;
    v41 = *(_DWORD *)(a1 + 788);
    v42 = *a3;
    v38 = v22;
    v43 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (__int64)&unk_1803D6B30);
  }
  v14 = (__m128)(unsigned int)v21;
  v15 = a3 + 2;
  if ( *(float *)&v21 > 0.0 && (*v15 & 1) == 0 || (v16 = a3 + 2, *(float *)&v21 < 0.0) && (*v15 & 2) == 0 )
  {
    v14 = 0LL;
    v16 = a3 + 2;
  }
  v17 = (__m128)HIDWORD(v21);
  v18 = v16;
  if ( *((float *)&v21 + 1) <= 0.0 )
  {
LABEL_8:
    v19 = v16;
    if ( *((float *)&v21 + 1) >= 0.0 || (*v16 & 8) != 0 )
      goto LABEL_9;
    goto LABEL_13;
  }
  if ( (*v16 & 4) != 0 )
  {
    v18 = a3 + 2;
    goto LABEL_8;
  }
LABEL_13:
  v17 = 0LL;
  v19 = v18;
LABEL_9:
  if ( v13 < 0.0 && (*v19 & 0x10) == 0 || v13 > 0.0 && (*v19 & 0x20) == 0 )
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32((__m128i)0LL));
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  result = a2;
  *(_QWORD *)(a2 + 4) = _mm_unpacklo_ps(v14, v17).m128_u64[0];
  *(float *)(a2 + 12) = v13;
  return result;
}
