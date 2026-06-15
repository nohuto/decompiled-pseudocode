/*
 * XREFs of ?AddRef@CPerEndpointVolumeAudioSession@@UEAAKXZ @ 0x180061A80
 * Callers:
 *     ?AddRef@CPerEndpointVolumeAudioSession@@W7EAAKXZ @ 0x1800C2AF0 (-AddRef@CPerEndpointVolumeAudioSession@@W7EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WBA@EAAKXZ @ 0x1800C2B00 (-AddRef@CPerEndpointVolumeAudioSession@@WBA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WBI@EAAKXZ @ 0x1800C2B10 (-AddRef@CPerEndpointVolumeAudioSession@@WBI@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WCA@EAAKXZ @ 0x1800C2B20 (-AddRef@CPerEndpointVolumeAudioSession@@WCA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WCI@EAAKXZ @ 0x1800C2B30 (-AddRef@CPerEndpointVolumeAudioSession@@WCI@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@WDJI@EAAKXZ @ 0x1800C2B40 (-AddRef@CPerEndpointVolumeAudioSession@@WDJI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddRef(CPerEndpointVolumeAudioSession *this)
{
  signed __int64 v1; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  signed __int64 v6; // rax
  signed __int32 v8; // r9d

  v1 = *((_QWORD *)this + 7);
  v3 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v3;
    v4 = v1 + 1;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 + 1, v1);
    v5 = v1 == v6;
    v1 = v6;
    if ( v5 )
      return v4;
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v8 == 0x7FFFFFFF )
      break;
    if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v8 + 1, v8) )
      return (unsigned int)(v8 + 1);
  }
  return v3;
}
