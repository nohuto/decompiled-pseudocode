/*
 * XREFs of ?NotifyPresent@CPresentStats@CDummyRemotingSwapChain@@QEAAJPEAVCD3DDevice@@I@Z @ 0x1802C7268
 * Callers:
 *     ?Present@CDummyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x1802C7300 (-Present@CDummyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x1802BD130 (-EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::CPresentStats::NotifyPresent(
        CDummyRemotingSwapChain::CPresentStats *this,
        struct CD3DDevice *a2,
        int a3)
{
  void *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx

  memset_0((char *)this + 8, 0, 0x50uLL);
  v6 = *(void **)this;
  *((_WORD *)this + 44) = 0;
  *((_DWORD *)this + 2) = a3;
  ResetEvent(v6);
  v7 = CD3DDevice::EnqueueSetEvent(a2, *(void **)this);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x120u, 0LL);
  return v8;
}
