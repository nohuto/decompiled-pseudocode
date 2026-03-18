/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x14037041C
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x14036E2F0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140410868 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,3>::AllocateElements(
        __int64 *a1,
        unsigned int a2)
{
  void *v4; // rcx
  __int64 result; // rax

  if ( a2 <= 3 )
  {
    v4 = a1 + 1;
    *a1 = (__int64)v4;
    if ( a2 )
      memset(v4, 0, 8LL * a2);
    goto LABEL_6;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 8 )
  {
    *a1 = ExAllocatePool2(256LL, 8LL * a2, 1265072196LL);
LABEL_6:
    result = *a1;
    *((_DWORD *)a1 + 8) = a2;
    return result;
  }
  return 0LL;
}
