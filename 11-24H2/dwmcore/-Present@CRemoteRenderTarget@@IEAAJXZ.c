/*
 * XREFs of ?Present@CRemoteRenderTarget@@IEAAJXZ @ 0x1802804C0
 * Callers:
 *     ?RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180278340 (-RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ @ 0x180277AF0 (-IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::Present(LARGE_INTEGER *this)
{
  LARGE_INTEGER v1; // rsi
  unsigned int v2; // edi
  int v4; // eax
  _DWORD **QuadPart; // rcx

  v1 = this[24];
  v2 = 0;
  if ( v1.QuadPart
    && (BYTE1(this[334].LowPart)
     || CRemoteRenderTarget::IsPrimaryMonitor((CRemoteRenderTarget *)&this[20]) && !LOBYTE(this[334].LowPart)) )
  {
    v4 = (*(__int64 (__fastcall **)(LARGE_INTEGER, LARGE_INTEGER))(*(_QWORD *)v1.QuadPart + 224LL))(v1, this[100]);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xE7u, 0LL);
    }
    else
    {
      QueryPerformanceCounter(this + 332);
      this[333].QuadPart = (LONGLONG)GetCurrentFrameId();
      QuadPart = (_DWORD **)this[100].QuadPart;
      if ( QuadPart )
        **QuadPart = 0;
      BYTE1(this[334].LowPart) = 0;
    }
  }
  return v2;
}
