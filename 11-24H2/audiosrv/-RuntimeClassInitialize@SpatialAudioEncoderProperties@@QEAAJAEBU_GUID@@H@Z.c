/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18003D18C
 * Callers:
 *     ?CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEncoderProperties@@@Z @ 0x18003CFE0 (-CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEnc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     Create_SpatialAudioPositionCalc @ 0x18003C724 (Create_SpatialAudioPositionCalc.c)
 *     ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18003D524 (-QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801299C0 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180129BB4 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180129D98 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180129F8C (-ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012A100 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012A288 (-ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012A410 (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012A538 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::RuntimeClassInitialize(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2,
        int a3)
{
  _QWORD *v3; // r14
  int v7; // ebp
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int SpatialAudioPositionCalc; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int RegisterForOverrides; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __m128 *v25; // rbx
  __int64 v26; // rax
  float v27; // xmm4_4
  __m128 v28; // xmm3
  __m128 v29; // xmm1
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  float v34; // xmm1_4
  __m128 v35; // xmm3
  unsigned int v36; // ecx
  const CHAR *v38; // [rsp+40h] [rbp-38h] BYREF
  int v39; // [rsp+80h] [rbp+8h] BYREF
  int v40; // [rsp+98h] [rbp+20h] BYREF

  v3 = (_QWORD *)((char *)this + 1136);
  v7 = 0;
  v8 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 142);
  SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc(v3, v9, v10, v11);
  RegisterForOverrides = SpatialAudioPositionCalc;
  if ( SpatialAudioPositionCalc >= 0 )
  {
    v17 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
      v17 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
    if ( v17 )
    {
      v18 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
      if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
        v18 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
      if ( v18 )
      {
        v19 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
        if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
          v19 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
        if ( v19 )
        {
          v20 = *(_QWORD *)&a2->Data1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
          if ( *(_QWORD *)&a2->Data1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
            v20 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
          if ( v20 )
          {
            v21 = *(_QWORD *)&a2->Data1 - DTSX_HEADPHONES_SPATIAL_ENCODER;
            if ( *(_QWORD *)&a2->Data1 == (_QWORD)DTSX_HEADPHONES_SPATIAL_ENCODER )
              v21 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER + 1);
            if ( v21 )
            {
              v22 = *(_QWORD *)&a2->Data1 - DTSX_TWOSPEAKER_SPATIAL_ENCODER;
              if ( *(_QWORD *)&a2->Data1 == (_QWORD)DTSX_TWOSPEAKER_SPATIAL_ENCODER )
                v22 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER + 1);
              if ( v22 )
              {
                v23 = *(_QWORD *)&a2->Data1 - DTSX_HDMI_SPATIAL_ENCODER;
                if ( *(_QWORD *)&a2->Data1 == (_QWORD)DTSX_HDMI_SPATIAL_ENCODER )
                  v23 = *(_QWORD *)a2->Data4 - *((_QWORD *)&DTSX_HDMI_SPATIAL_ENCODER + 1);
                if ( v23 )
                {
                  v24 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
                  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
                    v24 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
                  if ( !v24 )
                  {
                    v8 = 1;
                    SpatialAudioEncoderProperties::ConfigureMultiChannel(this, a2);
                  }
                }
                else
                {
                  SpatialAudioEncoderProperties::ConfigureDtsxHdmi(this, a2);
                }
              }
              else
              {
                SpatialAudioEncoderProperties::ConfigureDtsxTwoSpeaker(this, a2);
              }
            }
            else
            {
              SpatialAudioEncoderProperties::ConfigureDtsxHeadphones(this, a2);
            }
          }
          else
          {
            v7 = 1;
            SpatialAudioEncoderProperties::ConfigureDolbyAtmosTwoSpeaker(this, a2);
          }
        }
        else
        {
          v7 = 1;
          SpatialAudioEncoderProperties::ConfigureDolbyAtmosHeadphonesEncoder(this, a2);
        }
      }
      else
      {
        v7 = 1;
        SpatialAudioEncoderProperties::ConfigureDolbyAtmosMATEncoder(this, a2);
      }
    }
    else
    {
      SpatialAudioEncoderProperties::ConfigureSpatialAudioHrtfEncoder(this, a2);
    }
    RegisterForOverrides = SpatialAudioEncoderProperties::QueryRegisterForOverrides(
                             this,
                             (const struct _GUID *)((char *)this + 700));
    if ( RegisterForOverrides >= 0 && a3 )
    {
      v25 = (__m128 *)((char *)this + 48);
      RegisterForOverrides = (*(__int64 (__fastcall **)(_QWORD, char *, char *, __int64))(*(_QWORD *)*v3 + 24LL))(
                               *v3,
                               (char *)this + 872,
                               (char *)this + 48,
                               304LL);
      if ( v7 || v8 )
      {
        v26 = 19LL;
        v27 = *((float *)this + 219) * 0.5;
        do
        {
          v28 = *v25;
          v29 = *v25;
          if ( v7 )
          {
            v30 = _mm_shuffle_ps(v29, v28, 255);
            v31 = _mm_shuffle_ps(v28, v28, 170);
            v32 = _mm_shuffle_ps(v28, v28, 85);
            v31.m128_f32[0] = v31.m128_f32[0] + v27;
            v28.m128_f32[0] = v28.m128_f32[0] + v27;
            v33 = _mm_movelh_ps(_mm_unpacklo_ps(v28, v31), _mm_unpacklo_ps(v32, v30));
          }
          else
          {
            LODWORD(v34) = _mm_shuffle_ps(v29, v28, 170).m128_u32[0] ^ _xmm;
            v35 = _mm_shuffle_ps(v28, v28, 198);
            v35.m128_f32[0] = v34;
            v33 = _mm_shuffle_ps(v35, v35, 198);
          }
          *v25++ = v33;
          --v26;
        }
        while ( v26 );
      }
      *((_BYTE *)this + 1148) = 1;
    }
  }
  else if ( (unsigned int)dword_1801D82E8 > 2 )
  {
    v39 = SpatialAudioPositionCalc;
    v40 = 207;
    v38 = "SpatialAudioEncoderProperties::RuntimeClassInitialize";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (unsigned __int8 *)&unk_1801AED6A,
      v14,
      v15,
      &v38,
      (__int64)&v40,
      (__int64)&v39);
  }
  *((_DWORD *)this + 286) = 0;
  if ( RegisterForOverrides >= 0 )
  {
    v36 = (*((_DWORD *)this + 179) >> 1) - ((*((_DWORD *)this + 179) >> 2) & 0x55555555);
    *((_DWORD *)this + 286) = (16843009
                             * (((v36 & 0x33333333)
                               + ((v36 >> 2) & 0x33333333)
                               + (((v36 & 0x33333333) + ((v36 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 24;
  }
  return (unsigned int)RegisterForOverrides;
}
