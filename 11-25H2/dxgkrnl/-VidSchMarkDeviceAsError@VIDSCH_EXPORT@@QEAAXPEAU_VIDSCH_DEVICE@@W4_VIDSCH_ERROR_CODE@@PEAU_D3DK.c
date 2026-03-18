/*
 * XREFs of ?VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DKMT_DEVICEPAGEFAULT_STATE@@@Z @ 0x14005B4B4
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401B9040 (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14037B94C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1403FDB50 (DxgkMarkDeviceAsError.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchMarkDeviceAsError(__int64 a1, __int64 a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 208LL))(a2, a3, 0LL);
}
