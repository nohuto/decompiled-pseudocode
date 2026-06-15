/*
 * XREFs of ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18004E168
 * Callers:
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x18004E0E4 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ??1CStreamResource@Sarm@@QEAA@XZ @ 0x18011FCCC (--1CStreamResource@Sarm@@QEAA@XZ.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180120100 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x180122CB4 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?DetachFromPool@CEndpointResourcePool@Sarm@@QEAAXXZ @ 0x180123364 (-DetachFromPool@CEndpointResourcePool@Sarm@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CStreamResource::Reclaim(Sarm::CStreamResource *this)
{
  Sarm::CEndpointResourcePool *v2; // rcx
  _DWORD *v3; // rdi
  __int64 v4; // rcx

  v2 = (Sarm::CEndpointResourcePool *)*((_QWORD *)this + 1);
  v3 = (_DWORD *)((char *)this + 84);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 20) + *v3 )
    {
      Sarm::CEndpointResourcePool::AddToDynamicPool(v2, *((_DWORD *)this + 20) + *v3);
      *(_QWORD *)((char *)this + 76) = 0LL;
      *v3 = 0;
    }
    Sarm::CEndpointResourcePool::DetachFromPool(*((Sarm::CEndpointResourcePool **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = *(_QWORD *)this;
  *(_QWORD *)this = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 5) = 0LL;
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *v3 = 0;
  *((_BYTE *)this + 88) = 0;
}
