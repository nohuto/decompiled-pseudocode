/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDtsxHdmi@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180142070
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800A7618 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801422A0 (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMA.c)
 */

char __fastcall CSpatialAudioDtsxHdmi::IsTechnologySupported(
        CSpatialAudioDtsxHdmi *this,
        struct IAudioEndpointInfo *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        unsigned int a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  char v8; // bl
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // eax
  struct _GUID v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]

  v8 = 0;
  *a6 = 0;
  *a7 = 0;
  if ( *((_QWORD *)this + 1) )
  {
    v15.Data1 = 267;
    v11 = 2;
    *(_DWORD *)&v15.Data2 = 1051882;
    *(_DWORD *)v15.Data4 = -1442840448;
    *(_DWORD *)&v15.Data4[4] = 1905997824;
    v16 = 11;
    v17 = 1051882;
    v18 = -1442840448;
    v19 = 1905997824;
    if ( IsGetDefaultSpatialRenderingModePresent() )
    {
      v13 = IsDtsXSupportedByAudioDriver();
      v12 = 1LL;
      if ( v13 )
        v11 = 1;
    }
    return CSpatialAudioTechCompressed::IsTechnologySupported(
             (CSpatialAudioTechCompressed *)v12,
             a2,
             a4,
             &v15,
             v11,
             a6,
             a7,
             a8);
  }
  return v8;
}
