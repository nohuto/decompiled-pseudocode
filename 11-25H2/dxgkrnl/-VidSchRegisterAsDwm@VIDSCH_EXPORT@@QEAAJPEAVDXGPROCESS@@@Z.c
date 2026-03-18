/*
 * XREFs of ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x14005AEF0
 * Callers:
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x140348F20 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     DxgkRegisterDwmProcess @ 0x1403F7AA0 (DxgkRegisterDwmProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchRegisterAsDwm(VIDSCH_EXPORT *this, struct DXGPROCESS *a2)
{
  __int64 v3; // rcx
  __int64 v5; // r9

  v3 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v5 = *((_QWORD *)a2 + 8);
  if ( v5 )
    v3 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16);
  return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)this + 1) + 384LL))(v3);
}
