/*
 * XREFs of ?ShouldNotifyOfFlipAway@CGlobalCompositionSurfaceInfo@@UEAA_NXZ @ 0x1802918C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ShouldNotifyOfFlipAway(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 16);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  return result;
}
