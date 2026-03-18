/*
 * XREFs of ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1403CD084
 * Callers:
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1403A0990 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 * Callees:
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x14005F2BC (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::MapGpuVaForPagingProcess(
        DXGDEVICESYNCOBJECT *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  __int64 v6; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
  CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
  return (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_MONITORED_FENCE_STORAGE *, _QWORD, unsigned __int64 *))(*(_QWORD *)(v6 + 8) + 896LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
           CurrentValueStorage,
           a2,
           a3);
}
