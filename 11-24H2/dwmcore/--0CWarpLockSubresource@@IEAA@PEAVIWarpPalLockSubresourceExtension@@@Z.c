/*
 * XREFs of ??0CWarpLockSubresource@@IEAA@PEAVIWarpPalLockSubresourceExtension@@@Z @ 0x1801959D0
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1801958FC (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IPEA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::CWarpLockSubresource(
        CWarpLockSubresource *this,
        struct IWarpPalLockSubresourceExtension *a2)
{
  CWarpLockSubresource *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IWarpPalLockSubresourceExtension *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  result = this;
  *(_OWORD *)((char *)this + 40) = 0LL;
  return result;
}
