/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x14092F1E4
 * Callers:
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140811B40 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbDispatchDeviceId @ 0x14092F490 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x14092F690 (DrvDbGetDeviceIdMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 5, a2, a3, a4, a5, a6, 0LL);
}
