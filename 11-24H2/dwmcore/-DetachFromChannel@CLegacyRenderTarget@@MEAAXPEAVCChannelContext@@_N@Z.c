/*
 * XREFs of ?DetachFromChannel@CLegacyRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x1802763A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::DetachFromChannel(CLegacyRenderTarget *this, struct CChannelContext *a2)
{
  *((_DWORD *)this + 8274) = 0;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 20) + 232LL))((char *)this + 160);
  CNotificationResource::DetachFromChannel(this, a2);
}
