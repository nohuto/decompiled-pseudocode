/*
 * XREFs of ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x1400249E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x140025078 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionFrame::Retire(
        CCompositionFrame *this,
        const struct DXGI_FRAME_STATISTICS *a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  char *v3; // rsi
  char *i; // rdi
  struct CLegacyTokenBuffer *v8; // rdx

  v3 = (char *)this + 256;
  *((_DWORD *)this + 50) = 2;
  for ( i = (char *)*((_QWORD *)this + 32); i != v3; i = *(char **)i )
    (*(void (__fastcall **)(_QWORD *, const struct DXGI_FRAME_STATISTICS *, const struct DXGI_FRAME_STATISTICS *))(*((_QWORD *)i - 1) + 48LL))(
      (_QWORD *)i - 1,
      a2,
      a3);
  v8 = (struct CLegacyTokenBuffer *)*((_QWORD *)this + 27);
  if ( v8 )
  {
    CTokenManager::ReturnLegacyTokenBuffer(*((CTokenManager **)this + 38), v8);
    *((_QWORD *)this + 27) = 0LL;
  }
  *((_BYTE *)this + 224) = 0;
}
