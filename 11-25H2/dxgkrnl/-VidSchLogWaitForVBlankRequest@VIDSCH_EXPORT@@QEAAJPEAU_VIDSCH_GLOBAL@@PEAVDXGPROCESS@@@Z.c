/*
 * XREFs of ?VidSchLogWaitForVBlankRequest@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x14003304C
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14032973C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchLogWaitForVBlankRequest(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct DXGPROCESS *a3)
{
  __int64 v3; // r10
  unsigned int v5; // r9d
  __int64 v6; // rdx

  v3 = *((_QWORD *)a3 + 8);
  v5 = -1073741823;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16);
    if ( v6 )
      return (*(unsigned int (__fastcall **)(struct _VIDSCH_GLOBAL *, __int64, struct DXGPROCESS *, __int64))(*((_QWORD *)this + 1) + 1072LL))(
               a2,
               v6,
               a3,
               3221225473LL);
  }
  return v5;
}
