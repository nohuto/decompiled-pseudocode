/*
 * XREFs of ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x18024CC94
 * Callers:
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C7AC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x18023EBE0 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetPresentError(CLegacyRenderTarget *this)
{
  char v1; // bl
  __int64 v2; // rax

  v1 = *((_BYTE *)this + 33897);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 40LL))(*((_QWORD *)this + 25) + 24LL);
  return CD3DDevice::GetPresentError(*(_DWORD *)(v2 + 896), v1);
}
