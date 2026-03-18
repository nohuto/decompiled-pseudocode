/*
 * XREFs of MiCanBeginHugeIoPageAccessor @ 0x140663EF0
 * Callers:
 *     MiBeginPageAccessor @ 0x14043DDD0 (MiBeginPageAccessor.c)
 * Callees:
 *     MiLockHugeRangeColorHeadAtDpc @ 0x14066531C (MiLockHugeRangeColorHeadAtDpc.c)
 */

__int64 __fastcall MiCanBeginHugeIoPageAccessor(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int64 *v3; // rdx

  if ( (*a1 & 0x800000000000000LL) != 0 )
    return 0LL;
  v3 = (volatile signed __int64 *)MiLockHugeRangeColorHeadAtDpc(a1);
  if ( (*a1 & 0x800000000000000LL) != 0 )
  {
    result = 0LL;
  }
  else
  {
    result = (((__int64)a1 - qword_140E2FD80) >> 3) & 0x3FFFFF;
    *a1 |= 0x800000000000000uLL;
  }
  _InterlockedAnd64(v3, 0xFFFFFFFFFFFFFFF7uLL);
  return result;
}
