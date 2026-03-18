/*
 * XREFs of ?CheckOcclusionState@CRemoteRenderTarget@@UEAAJ_N@Z @ 0x18028AC30
 * Callers:
 *     ?CheckOcclusionState@CRemoteRenderTarget@@WEI@EAAJ_N@Z @ 0x180280D40 (-CheckOcclusionState@CRemoteRenderTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CRemoteRenderTarget@@WFA@EAAJ_N@Z @ 0x180280D50 (-CheckOcclusionState@CRemoteRenderTarget@@WFA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x18028ACC0 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::CheckOcclusionState(CRemoteRenderTarget *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CRemoteRenderTarget::EnsureSwapChain((CRemoteRenderTarget *)((char *)this - 96));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180336AF8, 3u, v2, 0x73u, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 216LL))(*((_QWORD *)this + 12));
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180336AF8, 3u, v4, 0x75u, 0LL);
    else
      *((_BYTE *)this + 2576) = v4 == 142213121;
  }
  return v3;
}
