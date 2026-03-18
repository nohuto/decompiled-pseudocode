/*
 * XREFs of ??R?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@Z @ 0x1802C232C
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1802546C0 (--1-$out_param_t@V-$unique_ptr@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U-$default_delete@V-$.c)
 *     ??1?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@QEAA@XZ @ 0x18025AC00 (--1-$unique_ptr@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U-$default_delete@V-$CAsyncTask@UD3D.c)
 *     ?ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ @ 0x1802C115C (-ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ @ 0x1802C222C (--1-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CAsyncTask<CD3DDevice::D3D12Resources>>::operator()(__int64 a1, void *a2)
{
  if ( a2 )
  {
    CAsyncTask<CD3DDevice::D3D12Resources>::~CAsyncTask<CD3DDevice::D3D12Resources>((__int64)a2);
    operator delete(a2);
  }
}
