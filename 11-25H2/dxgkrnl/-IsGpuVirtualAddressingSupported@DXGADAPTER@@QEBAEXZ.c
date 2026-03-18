/*
 * XREFs of ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x140040964
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B49C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1403240C0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403A0D64 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1400409AC (-IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x1400409DC (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
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
