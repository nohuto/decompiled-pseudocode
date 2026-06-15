/*
 * XREFs of ?IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x18005F21C
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1801211B0 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 * Callees:
 *     ?IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x1800A0C94 (-IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

bool __fastcall Sarm::CSpatialAudioResourceManager::IsAppPinningEnabled(Sarm::CSpatialAudioResourceManager *this)
{
  bool v1; // bl
  _DWORD v3[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  _DWORD *v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]

  v1 = 0;
  if ( Sarm::CSpatialAudioResourceManager::IsHolographicSpaceAvailable(this) )
  {
    EventDescriptor = 0LL;
    v1 = CoGetPSClsid(&GUID_5849e670_4969_44de_8904_75ed892b627e, (CLSID *)&EventDescriptor) >= 0;
  }
  if ( (unsigned int)dword_1801D82B0 > 4 )
  {
    v11 = 0;
    EventDescriptor.Keyword = 0LL;
    v10 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    v3[0] = v1;
    v9 = v3;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1801D82B8;
    UserData.Size = *(unsigned __int16 *)off_1801D82B8;
    v6 = &unk_1801AE377;
    UserData.Reserved = 2;
    v7 = 29;
    v8 = 1;
    v3[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1801D82D0, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return v1;
}
