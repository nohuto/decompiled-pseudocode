/*
 * XREFs of ?OnGlobalTimeUpdated@CTouchVisual@@MEAAJXZ @ 0x18007AB40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTouchVisual::OnGlobalTimeUpdated(CTouchVisual *this)
{
  (*(void (__fastcall **)(CTouchVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
  return 0LL;
}
