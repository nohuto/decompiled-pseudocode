/*
 * XREFs of ?FlushChannels@CComposition@@QEAAXXZ @ 0x180030870
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?IsCaptureBitsResponsePending@CLegacySurfaceManager@@QEBA_NXZ @ 0x180030FAC (-IsCaptureBitsResponsePending@CLegacySurfaceManager@@QEBA_NXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?SignalFinishedFlush@CChannelContext@@QEAAXXZ @ 0x1802207C8 (-SignalFinishedFlush@CChannelContext@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::FlushChannels(CComposition *this)
{
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax
  char IsCaptureBitsResponsePending; // al
  void *v5; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  CChannelContext *v9; // rdi

  v2 = *((_QWORD *)this + 78);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 56LL);
  if ( (char *)v3 == (char *)CGlobalSurfaceManager::IsCaptureBitsResponsePending )
    IsCaptureBitsResponsePending = CLegacySurfaceManager::IsCaptureBitsResponsePending((CLegacySurfaceManager *)(v2 + 152));
  else
    IsCaptureBitsResponsePending = v3();
  if ( !IsCaptureBitsResponsePending )
  {
    if ( *((_DWORD *)this + 232) )
    {
      v7 = *((unsigned int *)this + 232);
      v8 = 0LL;
      do
      {
        v9 = *(CChannelContext **)(v8 + *((_QWORD *)this + 113));
        CChannelContext::SignalFinishedFlush(v9);
        CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v9);
        v8 += 8LL;
        --v7;
      }
      while ( v7 );
    }
    v5 = (void *)*((_QWORD *)this + 113);
    *((_DWORD *)this + 232) = 0;
    if ( v5 != *((void **)this + 114) )
    {
      if ( v5 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v5);
      }
      *((_QWORD *)this + 113) = *((_QWORD *)this + 114);
      *((_DWORD *)this + 231) = *((_DWORD *)this + 230);
    }
  }
}
