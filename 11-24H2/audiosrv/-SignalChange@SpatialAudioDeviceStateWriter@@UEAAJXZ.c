/*
 * XREFs of ?SignalChange@SpatialAudioDeviceStateWriter@@UEAAJXZ @ 0x180166380
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C25C (-SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall SpatialAudioDeviceStateWriter::SignalChange(SpatialAudioDeviceStateWriter *this)
{
  struct _tagpropertykey v2; // [rsp+20h] [rbp-48h] BYREF
  struct tagPROPVARIANT v3; // [rsp+40h] [rbp-28h] BYREF
  SHORT v4; // [rsp+70h] [rbp+8h]

  HIBYTE(v4) = byte_1801DCA1C;
  LOBYTE(v4) = 48;
  ++byte_1801DCA1C;
  memset(&v3, 0, sizeof(v3));
  v3.vt = 2;
  v3.iVal = v4;
  v2 = PKEY_SpatialAudio_Signaling_Key;
  return SpatialAudioIO::SetPropertyValue((SpatialAudioDeviceStateWriter *)((char *)this - 568), &v2, &v3);
}
