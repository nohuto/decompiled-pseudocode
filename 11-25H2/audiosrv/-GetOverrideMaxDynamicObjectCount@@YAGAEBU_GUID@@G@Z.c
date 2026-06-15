/*
 * XREFs of ?GetOverrideMaxDynamicObjectCount@@YAGAEBU_GUID@@G@Z @ 0x18005CDC0
 * Callers:
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180121D20 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801220F8 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180122460 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801225E8 (-ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180122898 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 */

__int64 __fastcall GetOverrideMaxDynamicObjectCount(IID *rclsid, unsigned __int16 a2)
{
  _WORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  char *v10; // r8
  __int16 v11; // r9
  char *v12; // rax
  DWORD pvData[2]; // [rsp+48h] [rbp-C0h] BYREF
  char *lpsz; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD lpsz_8[7]; // [rsp+58h] [rbp-B0h] BYREF
  wchar_t v17; // [rsp+C8h] [rbp-40h]
  char v18[414]; // [rsp+CAh] [rbp-3Eh] BYREF

  lpsz_8[0] = *(_OWORD *)L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\";
  lpsz_8[2] = *(_OWORD *)L"ft\\Windows\\CurrentVersion\\Audio\\Spatial\\";
  lpsz_8[1] = *(_OWORD *)L"\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\";
  lpsz_8[4] = *(_OWORD *)L"ntVersion\\Audio\\Spatial\\";
  lpsz_8[3] = *(_OWORD *)L"ws\\CurrentVersion\\Audio\\Spatial\\";
  lpsz_8[6] = *(_OWORD *)L"Spatial\\";
  lpsz_8[5] = *(_OWORD *)L"n\\Audio\\Spatial\\";
  v17 = aSoftwareMicros_3[56];
  memset_0(v18, 0, 0x196uLL);
  lpsz = 0LL;
  if ( StringFromIID(rclsid, (LPOLESTR *)&lpsz) >= 0 )
  {
    v4 = lpsz_8;
    v5 = 260LL;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v5;
    }
    while ( v5 );
    v6 = (260 - v5) & -(__int64)(v5 != 0);
    if ( v5 )
    {
      v7 = (char *)lpsz_8 + 2 * v6;
      v8 = 260 - v6;
      if ( 260 != v6 )
      {
        v9 = 2147483646LL;
        v10 = (char *)(lpsz - v7);
        do
        {
          if ( !v9 )
            break;
          v11 = *(_WORD *)&v7[(_QWORD)v10];
          if ( !v11 )
            break;
          *(_WORD *)v7 = v11;
          --v9;
          v7 += 2;
          --v8;
        }
        while ( v8 );
      }
      v12 = v7 - 2;
      if ( v8 )
        v12 = v7;
      *(_WORD *)v12 = 0;
      if ( v8 )
      {
        pvData[0] = 0;
        pvData[1] = 4;
        if ( !RegGetValueW(
                HKEY_LOCAL_MACHINE,
                (LPCWSTR)lpsz_8,
                L"MaxDynamicObjectCount",
                0x18u,
                0LL,
                pvData,
                &pvData[1]) )
          a2 = pvData[0];
      }
    }
    CoTaskMemFree(lpsz);
  }
  return a2;
}
