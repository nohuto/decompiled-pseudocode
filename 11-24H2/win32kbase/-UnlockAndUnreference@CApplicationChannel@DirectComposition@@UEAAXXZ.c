/*
 * XREFs of ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1400A3CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x14006CDFC (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x14006FD88 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?CheckConnectionState@CChannel@DirectComposition@@IEAAXXZ @ 0x14007512C (-CheckConnectionState@CChannel@DirectComposition@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::UnlockAndUnreference(
        DirectComposition::CApplicationChannel *this)
{
  struct DirectComposition::CrossChannelVisualData *v1; // rdi
  DirectComposition::CConnection **v3; // rsi
  char v4; // al
  struct _ERESOURCE *v5; // rcx
  struct _ERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rdi
  struct _ERESOURCE *v8; // rdi
  struct _ERESOURCE *v9; // rdi
  struct _ERESOURCE *v10; // rdi

  v1 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 53);
  if ( v1 )
  {
    v4 = *((_BYTE *)this + 264);
    if ( (v4 & 4) == 0 )
    {
      *((_BYTE *)this + 264) = v4 | 4;
      do
      {
        v5 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 53) = 0LL;
        ExReleaseResourceLite(v5);
        KeLeaveCriticalRegion();
        DirectComposition::CChannel::CheckConnectionState(this);
        DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
          *((struct DirectComposition::CConnection **)this + 5),
          v1);
        v6 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v6, 1u);
        v1 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 53);
      }
      while ( v1 );
      *((_BYTE *)this + 264) &= ~4u;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 4));
  KeLeaveCriticalRegion();
  v3 = (DirectComposition::CConnection **)((char *)this + 40);
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
    {
      v7 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v7, 1u);
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
      v8 = (struct _ERESOURCE *)*((_QWORD *)*v3 + 2);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v8, 1u);
      if ( DirectComposition::CConnection::IsConnected(*v3) )
        *((_DWORD *)this + 6) = 4;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*((PERESOURCE *)*v3 + 2));
      KeLeaveCriticalRegion();
      v3 = (DirectComposition::CConnection **)((char *)this + 40);
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
    {
      v9 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v9, 1u);
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 56LL))(this);
      v10 = (struct _ERESOURCE *)*((_QWORD *)*v3 + 2);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v10, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*v3) )
        *((_DWORD *)this + 6) = 1;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*((PERESOURCE *)*v3 + 2));
      KeLeaveCriticalRegion();
    }
    else
    {
      v3 = (DirectComposition::CConnection **)((char *)this + 40);
    }
  }
  while ( *((_DWORD *)this + 6) == 1 );
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 24LL))(this);
}
