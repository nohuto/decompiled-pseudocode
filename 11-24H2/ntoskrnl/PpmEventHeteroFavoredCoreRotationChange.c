/*
 * XREFs of PpmEventHeteroFavoredCoreRotationChange @ 0x1404696E0
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x140328B7C (PpmParkComputeUnparkMask.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventHeteroFavoredCoreRotationChange(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]
  int v6; // [rsp+80h] [rbp+8h] BYREF
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_FAVORED_CORE_ROTATION_CHANGED) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 4;
      v3 = &v7;
      v4 = 4;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_HETERO_FAVORED_CORE_ROTATION_CHANGED, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
