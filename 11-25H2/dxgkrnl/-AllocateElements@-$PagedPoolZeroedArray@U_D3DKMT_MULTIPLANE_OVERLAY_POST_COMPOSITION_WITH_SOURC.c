/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1403B6CC4
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x14029F3B0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  if ( a2 <= 3 )
  {
    v6 = a1 + 1;
    *a1 = (__int64)v6;
    if ( a2 )
      memset(v6, 0, 44LL * a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 0x2C )
  {
    *a1 = ExAllocatePool2(256LL, 44LL * a2, 1265072196LL, a4);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 35) = a2;
    return result;
  }
  return 0LL;
}
