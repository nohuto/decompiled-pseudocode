/*
 * XREFs of ?ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ @ 0x1801D8FE0
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1801D8CA0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1801D8DBC (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DConstantBuffer::ReleaseD3DResources(CD3DConstantBuffer *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
}
