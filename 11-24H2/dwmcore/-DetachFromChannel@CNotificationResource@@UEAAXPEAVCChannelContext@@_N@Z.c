/*
 * XREFs of ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18019EA80
 * Callers:
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18019E3B8 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?Channel_ReleaseResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_RELEASERESOURCE@@@Z @ 0x18019E680 (-Channel_ReleaseResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILC.c)
 *     ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18021F7E0 (-DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180221D00 (-DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x180276350 (-DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CLegacyRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x1802763A0 (-DetachFromChannel@CLegacyRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802D0DF0 (-DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802D11D0 (-DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CNotificationResource::DetachFromChannel(CNotificationResource *this, struct CChannelContext *a2)
{
  unsigned int *v3; // rcx
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD **v8; // r9
  __int64 (__fastcall *v9)(CMessageConversationHost *__hidden, unsigned int, unsigned int); // rax

  v3 = (unsigned int *)*((_QWORD *)this + 7);
  if ( v3 == (unsigned int *)a2 )
  {
    if ( v3 && v3[27] && (v5 = (_DWORD *)((char *)this + 72), *((_DWORD *)this + 18)) )
    {
      v6 = v3[27];
      v7 = (unsigned int)*v5;
      v8 = *(_QWORD ***)(*((_QWORD *)this + 3) + 6392LL);
      v9 = (__int64 (__fastcall *)(CMessageConversationHost *__hidden, unsigned int, unsigned int))(*v8)[11];
      if ( v9 == CMessageConversationHost::FlushCallbackId )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*v8[3] + 80LL))(v8[3], v6, v7, 0LL);
      else
        v9(*(CMessageConversationHost **)(*((_QWORD *)this + 3) + 6392LL), v6, v7);
    }
    else
    {
      v5 = (_DWORD *)((char *)this + 72);
    }
    *v5 = 0;
  }
  if ( a2 == *((struct CChannelContext **)this + 7) )
    *((_QWORD *)this + 7) = 0LL;
}
