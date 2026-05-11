/*
 * XREFs of ?Release@CSidebandDevice@@UEAAKXZ @ 0x1400137F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CSidebandDevice::Release(CSidebandDevice *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
}
