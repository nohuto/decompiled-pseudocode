/*
 * XREFs of ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@AEBVCMILMatrix@@I@Z @ 0x1802C0690
 * Callers:
 *     <none>
 * Callees:
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x180096900 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z @ 0x18017A664 (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1802046D4 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444@Z @ 0x180204874 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_180204874.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1802069C4 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x18020991C (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x180215DE4 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 *     ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022535C (-UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InteractionContextApis@@@details@wil@@QEAA_NXZ @ 0x1802C0C7C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InteractionContextApis@@@details@.c)
 */

__int64 __fastcall CInteractionContextWrapper::ProcessInput(
        CInteractionContextWrapper *this,
        const struct tagPOINTER_INFO *a2,
        const struct tagPOINTER_INFO_UNION *a3,
        const struct CMILMatrix *a4,
        unsigned int a5)
{
  bool *v9; // r8
  int updated; // r14d
  int v11; // eax
  int v12; // ecx
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  int v23; // r14d
  int v24; // r14d
  int v25; // r14d
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // xmm1_8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm0_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  int v46; // xmm1_4
  int v47; // xmm0_4
  int v48; // xmm1_4
  int v49; // xmm0_4
  int v50; // xmm1_4
  int v51; // xmm0_4
  int v52; // xmm1_4
  int v53; // xmm0_4
  int v54; // xmm1_4
  int v56; // [rsp+100h] [rbp-80h] BYREF
  int v57; // [rsp+104h] [rbp-7Ch] BYREF
  int v58; // [rsp+108h] [rbp-78h] BYREF
  int v59; // [rsp+10Ch] [rbp-74h] BYREF
  int v60; // [rsp+110h] [rbp-70h] BYREF
  int v61; // [rsp+114h] [rbp-6Ch] BYREF
  int v62; // [rsp+118h] [rbp-68h] BYREF
  int v63; // [rsp+11Ch] [rbp-64h] BYREF
  int v64; // [rsp+120h] [rbp-60h] BYREF
  int v65; // [rsp+124h] [rbp-5Ch] BYREF
  int v66; // [rsp+128h] [rbp-58h] BYREF
  int v67; // [rsp+12Ch] [rbp-54h] BYREF
  int v68; // [rsp+130h] [rbp-50h] BYREF
  int v69; // [rsp+134h] [rbp-4Ch] BYREF
  int v70; // [rsp+138h] [rbp-48h] BYREF
  int v71; // [rsp+13Ch] [rbp-44h] BYREF
  int v72; // [rsp+140h] [rbp-40h] BYREF
  int v73; // [rsp+144h] [rbp-3Ch] BYREF
  int v74; // [rsp+148h] [rbp-38h] BYREF
  int v75; // [rsp+14Ch] [rbp-34h] BYREF
  int v76; // [rsp+150h] [rbp-30h] BYREF
  int v77; // [rsp+154h] [rbp-2Ch] BYREF
  int v78; // [rsp+158h] [rbp-28h] BYREF
  __int128 v79; // [rsp+160h] [rbp-20h] BYREF
  __int128 v80; // [rsp+170h] [rbp-10h]
  __int128 v81; // [rsp+180h] [rbp+0h]
  __int128 v82; // [rsp+190h] [rbp+10h]
  __int128 v83; // [rsp+1A0h] [rbp+20h]
  __int128 v84; // [rsp+1B0h] [rbp+30h]
  _DWORD v85[6]; // [rsp+1C0h] [rbp+40h] BYREF
  CInteractionContextWrapper *v86; // [rsp+1D8h] [rbp+58h] BYREF
  _DWORD v87[2]; // [rsp+1E0h] [rbp+60h] BYREF
  __int128 v88; // [rsp+1E8h] [rbp+68h] BYREF
  __int128 v89; // [rsp+1F8h] [rbp+78h]
  __int128 v90; // [rsp+208h] [rbp+88h]
  __int128 v91; // [rsp+218h] [rbp+98h]
  __int128 v92; // [rsp+228h] [rbp+A8h]
  __int128 v93; // [rsp+238h] [rbp+B8h]
  __int128 v94; // [rsp+248h] [rbp+C8h]
  __int128 v95; // [rsp+258h] [rbp+D8h]
  __int128 v96; // [rsp+268h] [rbp+E8h]
  unsigned __int64 v97; // [rsp+2B0h] [rbp+130h] BYREF
  int v98; // [rsp+2B8h] [rbp+138h] BYREF

  updated = CInteractionContextWrapper::EnsureInteractionContext(this);
  *((_DWORD *)this + 79) = a5;
  *((_QWORD *)this + 30) = *((_QWORD *)a2 + 2);
  if ( updated >= 0 )
  {
    v11 = *((_DWORD *)this + 55);
    *((_DWORD *)this + 53) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 58) = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 54) = *(_DWORD *)a2;
    if ( *((_DWORD *)a2 + 2) != v11 )
    {
      CInteractionContextWrapper::ResetCachedInteractionOutput(this, 1);
      v12 = *((_DWORD *)a2 + 2);
      v97 = 0LL;
      *((_DWORD *)this + 55) = v12;
      if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                           (CInteractionContextWrapper *)((char *)this + 616),
                           *((_QWORD *)a2 + 10),
                           &v97) )
        v13 = v97;
      else
        v13 = 1000LL * *((unsigned int *)a2 + 16);
      *((_QWORD *)this + 28) = v13;
    }
    if ( CMILMatrix::operator!=((float *)this + 62, (float *)a4) )
    {
      *(_OWORD *)v14 = *(_OWORD *)a4;
      *(_OWORD *)(v14 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v14 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v14 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v14 + 64) = *((_DWORD *)a4 + 16);
      v15 = *(_DWORD *)(v14 + 4);
      v85[0] = *(_DWORD *)v14;
      v16 = *(_DWORD *)(v14 + 16);
      v85[1] = v15;
      v17 = *(_DWORD *)(v14 + 20);
      v85[2] = v16;
      v18 = *(_DWORD *)(v14 + 48);
      v85[3] = v17;
      v19 = *(_DWORD *)(v14 + 52);
      v85[4] = v18;
      v85[5] = v19;
      updated = CInteractionContextTransformHelper::UpdateTransform(
                  (CInteractionContextWrapper *)((char *)this + 328),
                  (const struct D2D1::Matrix3x2F *)v85,
                  v9);
    }
  }
  v20 = *((_OWORD *)a2 + 1);
  v79 = *(_OWORD *)a2;
  v80 = v20;
  v21 = *((_OWORD *)a2 + 3);
  v81 = *((_OWORD *)a2 + 2);
  v82 = v21;
  v22 = *((_OWORD *)a2 + 5);
  v83 = *((_OWORD *)a2 + 4);
  v84 = v22;
  if ( updated >= 0 )
  {
    LOBYTE(v9) = *((_BYTE *)this + 320);
    updated = CInteractionContextTransformHelper::TransformInput(
                (CInteractionContextWrapper *)((char *)this + 328),
                a2,
                (__int64)v9,
                (struct tagPOINTER_INFO *)&v79);
    if ( updated >= 0 )
    {
      if ( (HIDWORD(v79) & 0x180000) == 0
        || (updated = CInteractionContextWrapper::UpdateMouseWheelParameters((__int64)this), updated >= 0) )
      {
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InteractionContextApis>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InteractionContextApis>::GetImpl'::`2'::impl) )
        {
          v34 = ProcessPointerFramesInteractionContext(*((_QWORD *)this + 2), 1LL, 1LL, &v79);
          goto LABEL_21;
        }
        v87[0] = *(_DWORD *)a2;
        v23 = v87[0];
        v87[1] = 0;
        memset_0(&v88, 0, 0x90uLL);
        v24 = v23 - 2;
        if ( !v24 )
          goto LABEL_17;
        v25 = v24 - 1;
        if ( !v25 )
        {
          v35 = *((_QWORD *)a3 + 14);
          v94 = *((_OWORD *)a3 + 6);
          *(_QWORD *)&v95 = v35;
          goto LABEL_18;
        }
        if ( v25 == 2 )
        {
LABEL_17:
          v26 = *((_OWORD *)a3 + 1);
          v88 = *(_OWORD *)a3;
          v27 = *((_OWORD *)a3 + 2);
          v89 = v26;
          v28 = *((_OWORD *)a3 + 3);
          v90 = v27;
          v29 = *((_OWORD *)a3 + 4);
          v91 = v28;
          v30 = *((_OWORD *)a3 + 5);
          v92 = v29;
          v31 = *((_OWORD *)a3 + 6);
          v93 = v30;
          v32 = *((_OWORD *)a3 + 8);
          v94 = v31;
          v95 = *((_OWORD *)a3 + 7);
          v96 = v32;
        }
LABEL_18:
        v33 = *((_QWORD *)this + 2);
        v88 = v79;
        v89 = v80;
        v90 = v81;
        v91 = v82;
        v92 = v83;
        v93 = v84;
        v34 = ProcessPointerFramesInteractionContext2(v33, 1LL, 1LL, v87);
LABEL_21:
        updated = v34;
      }
    }
  }
  if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 2LL) )
  {
    v39 = *((_DWORD *)a4 + 15);
    v40 = *((_DWORD *)a4 + 14);
    v70 = HIDWORD(v82);
    v71 = DWORD2(v82);
    v72 = *((_DWORD *)a2 + 15);
    v73 = *((_DWORD *)a2 + 14);
    v74 = *((_DWORD *)a2 + 16);
    v75 = *((_DWORD *)a2 + 18);
    v76 = *((_DWORD *)a2 + 2);
    v77 = *(_DWORD *)a2;
    v78 = *((_DWORD *)a2 + 1);
    LODWORD(v97) = v39;
    v41 = *((_DWORD *)a4 + 13);
    v98 = v40;
    v42 = *((_DWORD *)a4 + 12);
    v56 = v41;
    v43 = *((_DWORD *)a4 + 11);
    v57 = v42;
    v44 = *((_DWORD *)a4 + 10);
    v58 = v43;
    v45 = *((_DWORD *)a4 + 9);
    v59 = v44;
    v46 = *((_DWORD *)a4 + 8);
    v60 = v45;
    v47 = *((_DWORD *)a4 + 7);
    v61 = v46;
    v48 = *((_DWORD *)a4 + 6);
    v62 = v47;
    v49 = *((_DWORD *)a4 + 5);
    v63 = v48;
    v50 = *((_DWORD *)a4 + 4);
    v64 = v49;
    v51 = *((_DWORD *)a4 + 3);
    v65 = v50;
    v52 = *((_DWORD *)a4 + 2);
    v66 = v51;
    v53 = *((_DWORD *)a4 + 1);
    v67 = v52;
    v54 = *(_DWORD *)a4;
    v68 = v53;
    v69 = v54;
    a5 = updated;
    v86 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v36,
      byte_1803DAA4A,
      v37,
      v38,
      (__int64)&v86,
      (__int64)&v78,
      (__int64)&v77,
      (__int64)&v76,
      (__int64)&v75,
      (__int64)&v74,
      (__int64)&v73,
      (__int64)&v72,
      (__int64)&v71,
      (__int64)&v70,
      (__int64)&v69,
      (__int64)&v68,
      (__int64)&v67,
      (__int64)&v66,
      (__int64)&v65,
      (__int64)&v64,
      (__int64)&v63,
      (__int64)&v62,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v98,
      (__int64)&v97,
      (__int64)&a5);
  }
  return (unsigned int)updated;
}
