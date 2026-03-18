/*
 * XREFs of ??1?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@QEAA@XZ @ 0x18024F6D0
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1802232EC (--1CD3DDevice@@MEAA@XZ.c)
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_191f22beafe1d8c746b7911051c53f5d___ @ 0x1802B8094 (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_191f22beafe1d8c746b7911051c53f5d___.c)
 * Callees:
 *     ??R?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@Z @ 0x1802B8CEC (--R-$default_delete@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV-$CAsyncTask@UD3D.c)
 */

__int64 __fastcall std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>::~unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CAsyncTask<CD3DDevice::D3D12Resources>>::operator()();
  return result;
}
