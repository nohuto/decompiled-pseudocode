/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180139710
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x18006E584 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180139A10 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSpatialAudioMSHRTF::IsTechnologySupported(
        CSpatialAudioMSHRTF *this,
        struct IAudioEndpointInfo *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        SpatialAudio *a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  char v12; // bl
  int v13; // eax
  unsigned int v14; // ebp
  bool v15; // al
  SpatialAudio *v17; // [rsp+20h] [rbp-48h]
  bool v18[16]; // [rsp+40h] [rbp-28h] BYREF

  v12 = 1;
  if ( !byte_1801D0938 )
  {
    v13 = IsHrtfApoAvailable();
    byte_1801D0938 = 1;
    byte_1801D0939 = v13 != 0;
  }
  LODWORD(v17) = (_DWORD)a5;
  v18[0] = CSpatialAudioTechHRTF::IsTechnologySupported(this, a2, a3, a4, v17, a6, a7, a8);
  if ( !v18[0] )
    return 0;
  v14 = (*(__int64 (__fastcall **)(struct IAudioEndpointInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  CSpatialAudioTech::AssignPriority(this, v14, Headphones, 0xAu, a6, v18);
  v15 = v18[0];
  if ( !v18[0] )
    return 0;
  if ( *a6 )
  {
    *a7 = 1;
  }
  else
  {
    CSpatialAudioTech::AssignPriority(this, v14, Speakers, 0xAu, a6, v18);
    v15 = v18[0];
  }
  if ( !v15 || !byte_1801D0939 )
    return 0;
  return v12;
}
