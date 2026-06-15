/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180142460
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180141E50 (-IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORM.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180141F60 (-IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180142160 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KP.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?ChannelMaskFromChannelCount@SpatialAudio@@YAKK@Z @ 0x1801417A4 (-ChannelMaskFromChannelCount@SpatialAudio@@YAKK@Z.c)
 *     FillHrtfDesiredFormat @ 0x180141810 (FillHrtfDesiredFormat.c)
 *     GetSupportedFormat @ 0x1801419B0 (GetSupportedFormat.c)
 *     IsBitsPerSampleIncluded @ 0x180141CA4 (IsBitsPerSampleIncluded.c)
 *     IsSampleRateIncluded @ 0x180141CE0 (IsSampleRateIncluded.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSpatialAudioTechHRTF::IsTechnologySupported(
        CSpatialAudioTechHRTF *this,
        struct IAudioEndpointInfo *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        SpatialAudio *a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  struct WAVEFORMATEXTENSIBLE *v9; // r14
  char SupportedFormat; // di
  __int64 v14; // rax
  __int64 (__fastcall *v15)(CSpatialAudioTechHRTF *); // rax
  char v16; // cl
  unsigned int *v17; // rax
  unsigned int v18; // r13d
  int v19; // r11d
  char v20; // r15
  WORD wFormatTag; // ax
  unsigned int v22; // esi
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  int *v25; // r10
  int v26; // eax
  unsigned int v27; // r9d
  unsigned int v28; // r14d
  unsigned int v29; // r12d
  struct IAudioEndpointInfo *v30; // r12
  unsigned int v31; // r13d
  int v32; // esi
  WORD wBitsPerSample; // r10
  unsigned __int16 v34; // r10
  DWORD v35; // r8d
  __int64 (__fastcall **v36)(struct IAudioEndpointInfo *, __int128 *); // rax
  __int128 v37; // xmm1
  int v39; // [rsp+30h] [rbp-B1h]
  int v40; // [rsp+38h] [rbp-A9h]
  DWORD nSamplesPerSec; // [rsp+50h] [rbp-91h] BYREF
  int v42; // [rsp+54h] [rbp-8Dh]
  unsigned int v43; // [rsp+58h] [rbp-89h] BYREF
  unsigned int v44; // [rsp+5Ch] [rbp-85h]
  unsigned int v45; // [rsp+60h] [rbp-81h]
  int *v46; // [rsp+68h] [rbp-79h] BYREF
  int v47; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v48; // [rsp+74h] [rbp-6Dh]
  unsigned int *v49; // [rsp+78h] [rbp-69h]
  struct IAudioEndpointInfo *v50; // [rsp+80h] [rbp-61h]
  struct WAVEFORMATEXTENSIBLE *v51; // [rsp+88h] [rbp-59h]
  __int128 v52; // [rsp+90h] [rbp-51h] BYREF
  __int128 v53; // [rsp+A0h] [rbp-41h]
  __int64 v54; // [rsp+B0h] [rbp-31h]
  _DWORD v55[4]; // [rsp+B8h] [rbp-29h] BYREF
  unsigned int v56[4]; // [rsp+C8h] [rbp-19h] BYREF

  v9 = a8;
  v50 = a2;
  SupportedFormat = 0;
  *a6 = 0;
  *a7 = 0;
  v54 = 0LL;
  v55[1] = 44100;
  v55[2] = 32000;
  v56[3] = 32000;
  v14 = *(_QWORD *)this;
  v56[2] = 44100;
  v51 = a8;
  v52 = 0LL;
  v15 = *(__int64 (__fastcall **)(CSpatialAudioTechHRTF *))(v14 + 80);
  v53 = 0LL;
  v55[0] = 48000;
  v56[0] = 96000;
  v56[1] = 48000;
  v16 = v15(this);
  v17 = v55;
  v18 = (v16 != 0) + 3;
  v48 = v18;
  if ( v16 )
    v17 = v56;
  v49 = v17;
  v47 = SpatialAudio::ChannelMaskFromChannelCount((SpatialAudio *)(unsigned int)a5);
  v43 = 1;
  v46 = &v47;
  if ( (*(unsigned __int8 (__fastcall **)(CSpatialAudioTechHRTF *))(*(_QWORD *)this + 88LL))(this) )
    (*(void (__fastcall **)(CSpatialAudioTechHRTF *, int **, unsigned int *))(*(_QWORD *)this + 96LL))(this, &v46, &v43);
  if ( a4 )
  {
    SupportedFormat = GetSupportedFormat(
                        (__int64 (__fastcall ***)(_QWORD, __int128 *))a2,
                        (__int64)a4,
                        (__int64)v46,
                        v43,
                        (__int64)v49,
                        v18,
                        v39,
                        v40,
                        (__int64)a8);
    if ( SupportedFormat )
      return SupportedFormat;
  }
  if ( a3 && a3->wFormatTag == 0xFFFE )
  {
    if ( (*(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
       || *(_QWORD *)&a3[1].wBitsPerSample != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4)
      && (*(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
       || *(_QWORD *)&a3[1].wBitsPerSample != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4) )
    {
      wFormatTag = a3->wFormatTag;
      v19 = 1;
      v20 = 1;
      v42 = 1;
      v22 = 1;
      goto LABEL_17;
    }
    v19 = 1;
    v20 = 1;
LABEL_18:
    v22 = 0;
    v42 = 0;
    goto LABEL_19;
  }
  v19 = 1;
  v20 = 0;
  v42 = 1;
  v22 = 1;
  if ( !a3 )
    goto LABEL_19;
  wFormatTag = a3->wFormatTag;
  v42 = 1;
  if ( wFormatTag == 1 )
    goto LABEL_18;
LABEL_17:
  if ( wFormatTag == 3 )
    goto LABEL_18;
LABEL_19:
  v23 = v43;
  v24 = v22;
  v45 = v22;
  if ( v22 > v43 )
    goto LABEL_55;
  v25 = v46;
  do
  {
    if ( SupportedFormat )
      goto LABEL_54;
    if ( v24 )
    {
      nSamplesPerSec = v25[v24 - 1];
LABEL_29:
      v28 = nSamplesPerSec;
      v29 = v22;
      v44 = v22;
LABEL_30:
      if ( SupportedFormat )
        goto LABEL_51;
      if ( v29 )
      {
        nSamplesPerSec = v49[v29 - 1];
      }
      else
      {
        nSamplesPerSec = a3->nSamplesPerSec;
        if ( !IsSampleRateIncluded(nSamplesPerSec, v49, v18) )
          goto LABEL_50;
      }
      v30 = v50;
      v31 = v22;
      v32 = nSamplesPerSec;
      while ( 1 )
      {
        if ( SupportedFormat )
        {
LABEL_49:
          v22 = v42;
          v29 = v44;
          v18 = v48;
LABEL_50:
          v29 += v19;
          v44 = v29;
          if ( v29 > v18 )
          {
LABEL_51:
            v25 = v46;
            v23 = v43;
            v9 = v51;
            v27 = v45;
            goto LABEL_52;
          }
          goto LABEL_30;
        }
        nSamplesPerSec = 0;
        if ( v31 )
          break;
        wBitsPerSample = a3->wBitsPerSample;
        LOWORD(nSamplesPerSec) = wBitsPerSample;
        if ( v20 )
          HIWORD(nSamplesPerSec) = a3[1].wFormatTag;
        else
          HIWORD(nSamplesPerSec) = wBitsPerSample;
        if ( IsBitsPerSampleIncluded(&nSamplesPerSec) )
        {
          HIWORD(v35) = HIWORD(nSamplesPerSec);
          goto LABEL_44;
        }
LABEL_48:
        v31 += v19;
        if ( v31 > 4 )
          goto LABEL_49;
      }
      v35 = *((_DWORD *)&unk_18019D158 + v31 - 1);
      nSamplesPerSec = v35;
      v34 = v35;
LABEL_44:
      FillHrtfDesiredFormat(v28, v34, SHIWORD(v35), v32, (__int64)&v52);
      SupportedFormat = (**(__int64 (__fastcall ***)(struct IAudioEndpointInfo *, __int128 *))v30)(v30, &v52);
      if ( !SupportedFormat && DWORD1(v53) == 1599 )
      {
        v36 = *(__int64 (__fastcall ***)(struct IAudioEndpointInfo *, __int128 *))v30;
        DWORD1(v53) = 255;
        SupportedFormat = (*v36)(v30, &v52);
      }
      v19 = 1;
      goto LABEL_48;
    }
    if ( !v20 || (v26 = *(_DWORD *)&a3[1].nChannels, (nSamplesPerSec = v26) == 0) )
    {
      v26 = SpatialAudio::ChannelMaskFromChannelCount((SpatialAudio *)a3->nChannels);
      nSamplesPerSec = v26;
    }
    if ( IsSampleRateIncluded(v26, v25, v23) )
      goto LABEL_29;
LABEL_52:
    v24 = v19 + v27;
    v45 = v24;
  }
  while ( v24 <= v23 );
  if ( SupportedFormat )
  {
LABEL_54:
    v37 = v53;
    *(_OWORD *)&v9->Format.wFormatTag = v52;
    *(_OWORD *)&v9->Format.cbSize = v37;
    goto LABEL_56;
  }
LABEL_55:
  *(_OWORD *)&v9->Format.wFormatTag = 0LL;
  v54 = 0LL;
  *(_OWORD *)&v9->Format.cbSize = 0LL;
LABEL_56:
  *(_QWORD *)v9->SubFormat.Data4 = v54;
  return SupportedFormat;
}
