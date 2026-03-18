/*
 * XREFs of CmSiLockViewOfSection @ 0x140494F5C
 * Callers:
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x140980280 (HvpViewMapAcquireChargesAndLockViewPages.c)
 * Callees:
 *     ZwLockVirtualMemory @ 0x1406A86F0 (ZwLockVirtualMemory.c)
 */

__int64 __fastcall CmSiLockViewOfSection(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  v4 = *a2;
  v7 = a3;
  v6 = a4;
  return ZwLockVirtualMemory(v4, &v7, &v6, 1LL);
}
