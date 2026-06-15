/*
 * XREFs of ?OnStreamConnectedToSaDevice@CAudioStream@@UEAAJXZ @ 0x1800614E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::OnStreamConnectedToSaDevice(CAudioStream *this)
{
  return (*(__int64 (__fastcall **)(struct ISpatialAudioResourceManager *, unsigned __int64, _QWORD, char *, char *))(*(_QWORD *)g_SpatialAudioResourceManager + 24LL))(
           g_SpatialAudioResourceManager,
           ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
           *((unsigned int *)this + 116),
           (char *)this + 448,
           (char *)this + 472);
}
