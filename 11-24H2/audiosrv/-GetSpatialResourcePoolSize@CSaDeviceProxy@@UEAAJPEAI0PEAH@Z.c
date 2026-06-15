/*
 * XREFs of ?GetSpatialResourcePoolSize@CSaDeviceProxy@@UEAAJPEAI0PEAH@Z @ 0x1800F7290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSaDeviceProxy::GetSpatialResourcePoolSize(
        CSaDeviceProxy *this,
        unsigned int *a2,
        unsigned int *a3,
        int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, int *))(**((_QWORD **)this + 12) + 120LL))(
           *((_QWORD *)this + 12),
           a2,
           a3,
           a4);
}
