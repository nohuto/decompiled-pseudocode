/*
 * XREFs of ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002D98C
 * Callers:
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400D00E0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x14002D9CC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14002D9EC (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS_RENDER_ADAPTER_INFO *__fastcall DXGPROCESS::GetRenderAdapterInfo(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rbx
  DXGGLOBAL *Global; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v2 >= DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    return 0LL;
  else
    return *(struct DXGPROCESS_RENDER_ADAPTER_INFO **)(*((_QWORD *)this + 6) + 8 * v2);
}
