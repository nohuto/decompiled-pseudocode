/*
 * XREFs of GetSupportedFormat @ 0x1801419B0
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180142460 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     FillHrtfDesiredFormat @ 0x180141810 (FillHrtfDesiredFormat.c)
 *     IsBitsPerSampleIncluded @ 0x180141CA4 (IsBitsPerSampleIncluded.c)
 *     IsSampleRateIncluded @ 0x180141CE0 (IsSampleRateIncluded.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall GetSupportedFormat(
        __int64 (__fastcall ***a1)(_QWORD, __int128 *),
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9)
{
  char v9; // di
  char v11; // cl
  bool v12; // zf
  unsigned __int16 v13; // si
  __int64 v14; // r10
  __int64 v15; // r10
  __int16 v16; // r11
  __int64 (__fastcall **v17)(_QWORD, __int128 *); // rax
  __int128 v18; // xmm1
  char result; // al
  unsigned __int16 v20; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int16 v21; // [rsp+32h] [rbp-3Eh]
  __int128 v22; // [rsp+38h] [rbp-38h] BYREF
  __int128 v23; // [rsp+48h] [rbp-28h]
  __int64 v24; // [rsp+58h] [rbp-18h]

  v24 = 0LL;
  v9 = 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( *(_WORD *)a2 == 0xFFFE )
  {
    v11 = 1;
    if ( *(_QWORD *)(a2 + 24) == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
      && *(_QWORD *)(a2 + 32) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 )
    {
      goto LABEL_9;
    }
    if ( *(_QWORD *)(a2 + 24) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 )
    {
LABEL_19:
      *(_OWORD *)a9 = 0LL;
      v24 = 0LL;
      *(_OWORD *)(a9 + 16) = 0LL;
      goto LABEL_20;
    }
    v12 = *(_QWORD *)(a2 + 32) == *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
  }
  else
  {
    v11 = 0;
    if ( *(_WORD *)a2 == 1 )
      goto LABEL_9;
    v12 = *(_WORD *)a2 == 3;
  }
  if ( !v12 )
    goto LABEL_19;
LABEL_9:
  v13 = *(_WORD *)(a2 + 14);
  v20 = v13;
  if ( v11 )
    v21 = *(_WORD *)(a2 + 18);
  else
    v21 = v13;
  if ( !(unsigned __int8)IsSampleRateIncluded(*(unsigned int *)(a2 + 20), a3, a4) )
    goto LABEL_19;
  if ( !(unsigned __int8)IsSampleRateIncluded(*(unsigned int *)(v14 + 4), a5, a6) )
    goto LABEL_19;
  if ( !(unsigned __int8)IsBitsPerSampleIncluded(&v20) )
    goto LABEL_19;
  FillHrtfDesiredFormat(*(_DWORD *)(v15 + 20), v13, v16, *(_DWORD *)(v15 + 4), (__int64)&v22);
  v9 = (**a1)(a1, &v22);
  if ( !v9 )
  {
    if ( DWORD1(v23) != 1599 )
      goto LABEL_19;
    v17 = *a1;
    DWORD1(v23) = 255;
    v9 = (*v17)(a1, &v22);
    if ( !v9 )
      goto LABEL_19;
  }
  v18 = v23;
  *(_OWORD *)a9 = v22;
  *(_OWORD *)(a9 + 16) = v18;
LABEL_20:
  result = v9;
  *(_QWORD *)(a9 + 32) = v24;
  return result;
}
