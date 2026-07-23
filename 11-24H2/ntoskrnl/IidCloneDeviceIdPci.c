/*
 * XREFs of IidCloneDeviceIdPci @ 0x14069D0C8
 * Callers:
 *     IidCloneDeviceId @ 0x140817818 (IidCloneDeviceId.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall IidCloneDeviceIdPci(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_QWORD *)(a2 + 16) = a2 + 24;
  memmove((void *)(a2 + 24), *(const void **)(a1 + 16), 2LL * *(unsigned __int16 *)(a1 + 14));
  return 0LL;
}
