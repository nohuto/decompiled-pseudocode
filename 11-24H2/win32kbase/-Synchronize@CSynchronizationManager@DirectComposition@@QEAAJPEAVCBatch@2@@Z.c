/*
 * XREFs of ?Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z @ 0x140073B48
 * Callers:
 *     NtDCompositionSynchronize @ 0x1400EEE00 (NtDCompositionSynchronize.c)
 * Callees:
 *     ?RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z @ 0x1400737B0 (-RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z.c)
 *     ?GetSyncData@CSynchronizationManager@DirectComposition@@IEAAPEAVCSyncData@2@_KPEAVCBatch@2@@Z @ 0x140073C28 (-GetSyncData@CSynchronizationManager@DirectComposition@@IEAAPEAVCSyncData@2@_KPEAVCBatch@2@@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CSynchronizationManager::Synchronize(
        DirectComposition::CSynchronizationManager *this,
        struct DirectComposition::CBatch *a2)
{
  unsigned int v2; // ebx
  signed __int32 v5; // esi
  struct DirectComposition::CSyncData *SyncData; // rax
  struct DirectComposition::CSyncData *v7; // rsi
  struct _RTL_GENERIC_TABLE *v8; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( *((_QWORD *)a2 + 5) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    do
      v5 = _InterlockedIncrement((volatile signed __int32 *)this + 4);
    while ( !v5 );
    DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)this);
    SyncData = DirectComposition::CSynchronizationManager::GetSyncData(this, v5, a2);
    v7 = SyncData;
    if ( SyncData )
    {
      v8 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 1);
      Buffer[0] = *((_QWORD *)SyncData + 1);
      Buffer[1] = SyncData;
      if ( RtlInsertElementGenericTable(v8, Buffer, 0x10u, 0LL) )
      {
        *((_QWORD *)a2 + 5) = v7;
      }
      else
      {
        v2 = -1073741801;
        DirectComposition::CSynchronizationManager::RecycleSyncData(this, v7);
      }
    }
    else
    {
      v2 = -1073741801;
    }
    ExReleaseResourceLite(*(PERESOURCE *)this);
    KeLeaveCriticalRegion();
  }
  return v2;
}
