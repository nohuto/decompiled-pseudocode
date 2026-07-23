/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x140924CFC
 * Callers:
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140822180 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbDispatchDeviceId @ 0x1409254C0 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1409256C0 (DrvDbGetDeviceIdMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 5, a2, a3, a4, a5, a6, 0LL);
}
