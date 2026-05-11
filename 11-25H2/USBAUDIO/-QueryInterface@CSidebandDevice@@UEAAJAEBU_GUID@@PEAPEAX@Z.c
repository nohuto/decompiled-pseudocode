/*
 * XREFs of ?QueryInterface@CSidebandDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400137D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CSidebandDevice::QueryInterface(CSidebandDevice *this, const struct _GUID *a2, void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 3))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}
