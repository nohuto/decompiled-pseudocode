/*
 * XREFs of ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x14006CA40
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ClearPointerListEntries@CInputManager@@SAXI@Z @ 0x14006B3D4 (-ClearPointerListEntries@CInputManager@@SAXI@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x14006CDFC (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x14006DA08 (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140074908 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x14007F850 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x14007F914 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x140081390 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B9284 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1400D1620 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::Shutdown(DirectComposition::CApplicationChannel *this)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rdx
  char *v5; // rcx
  char *v6; // rbx
  DirectComposition::CBatch *v7; // rcx
  void *v8; // rcx
  struct DirectComposition::CrossChannelVisualData *v9; // rdx
  __int64 v10; // rbp
  char v11; // r14
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  char *v16; // rcx
  unsigned int v17; // ebx

  DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  v2 = 6;
  v3 = *((_QWORD *)this + 5);
  if ( *((int *)this + 6) <= 2 )
    v2 = 2;
  *((_DWORD *)this + 6) = v2;
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 16));
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)this + 6) == 2 )
  {
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 48LL))(this, v4);
  }
  DirectComposition::CApplicationChannel::ReleaseAllResources(this, 0LL);
  if ( *((_QWORD *)this + 30) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  v5 = (char *)*((_QWORD *)this + 24);
  if ( v5 )
  {
    do
    {
      v6 = *(char **)v5;
      GreDeleteFastMutex(v5);
      *((_QWORD *)this + 24) = v6;
      v5 = v6;
    }
    while ( v6 );
  }
  v7 = (DirectComposition::CBatch *)*((_QWORD *)this + 22);
  if ( v7 )
  {
    DirectComposition::CBatch::Clear(v7);
    v16 = (char *)*((_QWORD *)this + 22);
    if ( v16 )
      GreDeleteFastMutex(v16);
    *((_QWORD *)this + 22) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 47);
  if ( v8 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(v8, this);
    *((_QWORD *)this + 47) = 0LL;
  }
  v9 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 53);
  if ( v9 )
  {
    *((_QWORD *)this + 53) = 0LL;
    DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
      *((struct DirectComposition::CConnection **)this + 5),
      v9);
  }
  CInputManager::ClearPointerListEntries(*((_DWORD *)this + 684));
  if ( *((_DWORD *)this + 7) )
  {
    v10 = *((_QWORD *)this + 5);
    v11 = *((_BYTE *)this + 48) & 1;
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(v10 + 16));
    if ( (*((_BYTE *)this + 48) & 2) != 0 )
    {
      v12 = *((_QWORD *)this + 23);
      *(_DWORD *)(v12 + 20) = 6;
      v13 = *((_DWORD *)this + 102) + 1;
      *((_DWORD *)this + 102) = v13;
      *(_BYTE *)(v12 + 32) &= ~1u;
      v14 = *(_QWORD *)(v12 + 144);
      *(_DWORD *)(v12 + 16) = v13;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 136) + 56LL) + v14 + 16) = *((_DWORD *)this + 7);
      v15 = *((_DWORD *)this + 102);
      *((_QWORD *)this + 23) = 0LL;
      *((_DWORD *)this + 103) = v15;
      DirectComposition::CConnection::PostBatch(
        (DirectComposition::CConnection *)v10,
        (struct DirectComposition::CBatch *)v12,
        (struct DirectComposition::CBatch *)v12);
    }
    else
    {
      v17 = *((_DWORD *)this + 7);
      DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(v10 + 80));
      DirectComposition::CLinearObjectTableBase::ReleaseHandle(
        (DirectComposition::CLinearObjectTableBase *)(v10 + 24),
        v17);
      ExReleaseResourceLite(*(PERESOURCE *)(v10 + 80));
      KeLeaveCriticalRegion();
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v10 + 16));
    KeLeaveCriticalRegion();
    if ( v11 )
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v10);
  }
  else
  {
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
}
