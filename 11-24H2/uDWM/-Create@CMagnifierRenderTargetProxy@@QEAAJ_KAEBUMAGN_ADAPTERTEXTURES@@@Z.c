/*
 * XREFs of ?Create@CMagnifierRenderTargetProxy@@QEAAJ_KAEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800C9A9C
 * Callers:
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800C865C (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMagnifierRenderTargetProxy::Create(
        CMagnifierRenderTargetProxy *this,
        __int64 a2,
        const struct MAGN_ADAPTERTEXTURES *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 384LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3);
}
