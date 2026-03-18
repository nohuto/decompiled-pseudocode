/*
 * XREFs of ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x180243D5C
 * Callers:
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x180099BC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x180235580 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetPresentError(CLegacyRenderTarget *this)
{
  char v1; // bl
  __int64 v2; // rax

  v1 = *((_BYTE *)this + 33513);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 40LL))(*((_QWORD *)this + 25) + 24LL);
  return CD3DDevice::GetPresentError(*(_DWORD *)(v2 + 896), v1);
}
