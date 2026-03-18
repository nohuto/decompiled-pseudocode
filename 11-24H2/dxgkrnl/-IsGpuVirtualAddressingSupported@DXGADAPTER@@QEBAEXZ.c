/*
 * XREFs of ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x140040354
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019D8EC (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140306840 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403973B4 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x14004039C (-IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x1400403CC (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGADAPTER::IsGpuVirtualAddressingSupported(DXGADAPTER *this)
{
  char v2; // bl

  if ( (*((_DWORD *)this + 617) & 0x40) != 0 )
    return 1;
  v2 = 0;
  if ( DXGADAPTER::IsGpuVaIoMmuSupported(this) || DXGADAPTER::IsGpuVaIoMmuGlobalSupported(this) )
    return 1;
  return v2;
}
