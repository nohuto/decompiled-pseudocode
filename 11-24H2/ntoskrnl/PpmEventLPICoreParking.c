/*
 * XREFs of PpmEventLPICoreParking @ 0x1405D6B4C
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1404E5250 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventLPICoreParking(__int64 a1, int a2)
{
  BOOLEAN result; // al
  int v3; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]
  int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  result = PpmParkLpiCap;
  v3 = PpmParkLpiCap;
  if ( PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LPI_CORE_PARK);
    if ( result )
    {
      UserData.Reserved = 0;
      v7 = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      v5 = &v8;
      v6 = 4;
      return EtwWriteEx(PpmEtwHandle, &PPM_ETW_LPI_CORE_PARK, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
