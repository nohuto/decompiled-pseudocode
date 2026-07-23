/*
 * XREFs of MiSetSystemCacheReverseMap @ 0x14020A5D0
 * Callers:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MiExpandSystemCache @ 0x14026B918 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x140353754 (MiReturnSystemCacheRegionsToKva.c)
 * Callees:
 *     MiSetPageTablePfnBuddy @ 0x140492B70 (MiSetPageTablePfnBuddy.c)
 */

__int64 __fastcall MiSetSystemCacheReverseMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx

  v3 = (_QWORD *)(48 * ((*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                - 0x220000000000LL);
  *v3 = 0LL;
  return MiSetPageTablePfnBuddy(v3, a3, 16LL);
}
