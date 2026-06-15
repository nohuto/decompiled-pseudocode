/*
 * XREFs of ?SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C25C
 * Callers:
 *     ?Store@SpatialAudioStateIO@@IEAAJXZ @ 0x18012C2AC (-Store@SpatialAudioStateIO@@IEAAJXZ.c)
 *     ?SignalChange@SpatialAudioDeviceStateWriter@@UEAAJXZ @ 0x180166380 (-SignalChange@SpatialAudioDeviceStateWriter@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioIO::SetPropertyValue(
        SpatialAudioIO *this,
        struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  __int64 v3; // r10

  v3 = *((_QWORD *)this + 67);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, char *, _QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v3 + 96LL))(
             v3,
             (char *)this + 8,
             0LL,
             a2,
             a3);
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *, struct _tagpropertykey *))(**((_QWORD **)this + 66) + 48LL))(
             *((_QWORD *)this + 66),
             a2,
             a3,
             a2);
}
