/*
 * XREFs of ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x14019C5B8
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1400C6860 (NtDCompositionGetConnectionBatch.c)
 * Callees:
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x140074160 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140074908 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400B95D8 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1400FF528 (-AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetBatches(
        DirectComposition::CConnection *this,
        const struct UCE_RDP_HEADER **a2)
{
  unsigned int Batches; // edi
  struct DirectComposition::CBatch *v6; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+18h] BYREF

  DirectComposition::CCriticalSection::AcquireShared(*((PERESOURCE *)this + 2));
  if ( *((_DWORD *)this + 37) )
  {
    v6 = 0LL;
    if ( (int)DirectComposition::CConnection::GetReadyBatches(this, 0LL, &v6) >= 0 && v6 )
    {
      while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) != 2 )
      {
        Interval.QuadPart = 0LL;
        KeDelayExecutionThread(1, 0, &Interval);
      }
      DirectComposition::CConnection::AppendRetrievingBatches(this, v6);
    }
    if ( *((_DWORD *)this + 36) == 1 || _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) == 2 )
      Batches = DirectComposition::CConnection::RetrieveBatches(this, 0LL, a2);
    else
      Batches = -1073740024;
  }
  else
  {
    Batches = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  return Batches;
}
