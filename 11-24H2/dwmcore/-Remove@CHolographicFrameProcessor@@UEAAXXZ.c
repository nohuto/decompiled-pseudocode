/*
 * XREFs of ?Remove@CHolographicFrameProcessor@@UEAAXXZ @ 0x1802D6730
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicFrameProcessor::Remove(CHolographicFrameProcessor *this)
{
  __int64 v1; // rdi
  CHolographicInteropTaskQueue *v3; // rcx

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v1 + 104));
    v3 = *(CHolographicInteropTaskQueue **)(v1 + 48);
    if ( v3 && *(_BYTE *)(v1 + 240) )
      CHolographicInteropTaskQueue::PostMessageW(
        v3,
        32,
        (struct _SLIST_ENTRY *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
    ReleaseSRWLockExclusive((PSRWLOCK)(v1 + 104));
  }
  if ( *((_QWORD *)this + 16) )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
}
