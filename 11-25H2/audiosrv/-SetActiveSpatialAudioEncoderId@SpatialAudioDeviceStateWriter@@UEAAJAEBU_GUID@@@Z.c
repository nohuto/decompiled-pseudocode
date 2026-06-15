/*
 * XREFs of ?SetActiveSpatialAudioEncoderId@SpatialAudioDeviceStateWriter@@UEAAJAEBU_GUID@@@Z @ 0x18015D420
 * Callers:
 *     <none>
 * Callees:
 *     ?Store@SpatialAudioStateIO@@IEAAJXZ @ 0x18012460C (-Store@SpatialAudioStateIO@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDeviceStateWriter::SetActiveSpatialAudioEncoderId(
        SpatialAudioDeviceStateWriter *this,
        const struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // edi

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 71) + 8LL))((char *)this - 568);
  if ( v5 >= 0 )
  {
    *((struct _GUID *)this - 1) = *a2;
    v5 = SpatialAudioStateIO::Store((SpatialAudioDeviceStateWriter *)((char *)this - 568));
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v5;
}
