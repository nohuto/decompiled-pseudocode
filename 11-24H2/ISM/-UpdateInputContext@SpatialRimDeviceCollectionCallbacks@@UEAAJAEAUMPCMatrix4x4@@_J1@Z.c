/*
 * XREFs of ?UpdateInputContext@SpatialRimDeviceCollectionCallbacks@@UEAAJAEAUMPCMatrix4x4@@_J1@Z @ 0x1800D9690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::UpdateInputContext(
        SpatialRimDeviceCollectionCallbacks *this,
        struct MPCMatrix4x4 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MPCMatrix4x4 *))(**((_QWORD **)this + 2) + 160LL))(
           *((_QWORD *)this + 2),
           a2);
}
