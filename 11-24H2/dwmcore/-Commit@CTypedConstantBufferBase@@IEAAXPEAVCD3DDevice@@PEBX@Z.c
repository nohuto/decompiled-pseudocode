/*
 * XREFs of ?Commit@CTypedConstantBufferBase@@IEAAXPEAVCD3DDevice@@PEBX@Z @ 0x1801887D0
 * Callers:
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x180188520 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTypedConstantBufferBase::Commit(CTypedConstantBufferBase *this, struct CD3DDevice *a2, const void *a3)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, const void *, _DWORD, _DWORD))(**((_QWORD **)a2 + 70) + 384LL))(
    *((_QWORD *)a2 + 70),
    *(_QWORD *)this,
    0LL,
    0LL,
    a3,
    0,
    0);
}
