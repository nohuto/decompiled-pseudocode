/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x14004FD08
 * Callers:
 *     ?IommuReserveGpuVa@ADAPTER_RENDER@@CAJPEAUSYSMM_ADAPTER@@_KPEA_KPEAX@Z @ 0x14019F710 (-IommuReserveGpuVa@ADAPTER_RENDER@@CAJPEAUSYSMM_ADAPTER@@_KPEA_KPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmReserveGpuVirtualAddress(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGPROCESS *a3,
        struct VIDMM_PAGING_QUEUE *a4,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a5)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct DXGPROCESS *, struct VIDMM_PAGING_QUEUE *, struct D3DDDI_RESERVEGPUVIRTUALADDRESS *))(*((_QWORD *)this + 1) + 736LL))(
           a2,
           a3,
           a4,
           a5);
}
