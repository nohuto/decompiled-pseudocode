/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1801392C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180139850 (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMA.c)
 */

char __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologySupported(
        CSpatialAudioDolbyAtmosMAT *this,
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
  struct _GUID v15; // [rsp+40h] [rbp-49h] BYREF
  int v16; // [rsp+50h] [rbp-39h]
  int v17; // [rsp+54h] [rbp-35h]
  int v18; // [rsp+58h] [rbp-31h]
  int v19; // [rsp+5Ch] [rbp-2Dh]
  int v20; // [rsp+60h] [rbp-29h]
  int v21; // [rsp+64h] [rbp-25h]
  int v22; // [rsp+68h] [rbp-21h]
  int v23; // [rsp+6Ch] [rbp-1Dh]
  int v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+74h] [rbp-15h]
  int v26; // [rsp+78h] [rbp-11h]
  int v27; // [rsp+7Ch] [rbp-Dh]

  v8 = 0;
  *a6 = 0;
  *a7 = 0;
  if ( *((_QWORD *)this + 1) || !byte_1801CE2BA )
  {
    v15.Data1 = 1804;
    v11 = 4;
    *(_DWORD *)&v15.Data2 = 1051882;
    *(_DWORD *)v15.Data4 = -1442840448;
    *(_DWORD *)&v15.Data4[4] = 1905997824;
    v16 = 780;
    v17 = 1051882;
    v18 = -1442840448;
    v19 = 1905997824;
    v20 = 268;
    v21 = 1051882;
    v22 = -1442840448;
    v23 = 1905997824;
    v24 = 12;
    v25 = 1051882;
    v26 = -1442840448;
    v27 = 1905997824;
    if ( IsGetDefaultSpatialRenderingModePresent() )
    {
      v13 = IsDolbyMatSupportedByAudioDriver();
      v12 = 3LL;
      if ( v13 )
        v11 = 3;
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
