/*
 * XREFs of ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180277378
 * Callers:
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18029770C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x180297D40 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1802CFF14 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z @ 0x1802D03E4 (-Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(CD3DDevice **a1)
{
  CD3DDevice *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CD3DDevice::Release(v1);
  }
  return result;
}
