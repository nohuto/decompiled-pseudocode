/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801422A0
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180141D10 (-IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMAT.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180142070 (-IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSpatialAudioTechCompressed::IsTechnologySupported(
        CSpatialAudioTechCompressed *this,
        struct IAudioEndpointInfo *a2,
        const struct tWAVEFORMATEX *a3,
        const struct _GUID *a4,
        unsigned int a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  char v10; // dl
  __int64 v12; // r8
  int v13; // edi
  unsigned int v14; // ebx
  __int64 (__fastcall **v15)(struct IAudioEndpointInfo *, _BYTE *, __int64); // rax
  __int128 v16; // xmm0
  __int64 (__fastcall *v17)(struct IAudioEndpointInfo *, _BYTE *, __int64); // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // xmm2_8
  _BYTE v22[40]; // [rsp+30h] [rbp-30h] BYREF

  v10 = 0;
  *(_QWORD *)&v22[32] = 0LL;
  *a6 = 0;
  *a7 = 0;
  v12 = 65534LL;
  memset(v22, 0, 32);
  if ( a3
    && a3->wFormatTag == 0xFFFE
    && a3->cbSize == 22
    && a3->nSamplesPerSec == 192000
    && a3->nChannels == 8
    && a3->wBitsPerSample == 16
    && a3[1].wFormatTag == 16
    && (*(_DWORD *)&a3[1].nChannels == 1599 || *(_DWORD *)&a3[1].nChannels == 255) )
  {
    v13 = 0;
    if ( a5 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) == *(_QWORD *)&a4[v13].Data1
          && *(_QWORD *)&a3[1].wBitsPerSample == *(_QWORD *)a4[v13].Data4 )
        {
          v10 = (**(__int64 (__fastcall ***)(struct IAudioEndpointInfo *, const struct tWAVEFORMATEX *, __int64))a2)(
                  a2,
                  a3,
                  v12);
          if ( v10 )
            break;
        }
        if ( ++v13 >= a5 )
          goto LABEL_15;
      }
      v18 = *(_OWORD *)&a3->wFormatTag;
      v19 = *(_OWORD *)&a3->cbSize;
      v20 = *(_QWORD *)&a3[1].wBitsPerSample;
      goto LABEL_21;
    }
  }
LABEL_15:
  v14 = 0;
  if ( a5 )
  {
    while ( 1 )
    {
      v15 = *(__int64 (__fastcall ***)(struct IAudioEndpointInfo *, _BYTE *, __int64))a2;
      v16 = (__int128)*a4;
      *(_QWORD *)v22 = 0x2EE000008FFFELL;
      *(_DWORD *)&v22[14] = 1441808;
      v17 = *v15;
      *(_OWORD *)&v22[24] = v16;
      *(_WORD *)&v22[18] = 16;
      *(_DWORD *)&v22[20] = 1599;
      *(_WORD *)&v22[12] = 16;
      *(_DWORD *)&v22[8] = 3072000;
      v10 = v17(a2, v22, v12);
      if ( v10 )
        break;
      ++v14;
      ++a4;
      if ( v14 >= a5 )
        return v10;
    }
    v20 = *(_QWORD *)&v22[32];
    v19 = *(_OWORD *)&v22[16];
    v18 = *(_OWORD *)v22;
LABEL_21:
    *a6 = 1;
    *a7 = 0;
    *(_OWORD *)&a8->Format.wFormatTag = v18;
    *(_OWORD *)&a8->Format.cbSize = v19;
    *(_QWORD *)a8->SubFormat.Data4 = v20;
  }
  return v10;
}
