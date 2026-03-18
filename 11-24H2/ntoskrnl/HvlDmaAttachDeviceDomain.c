/*
 * XREFs of HvlDmaAttachDeviceDomain @ 0x1405863C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1403AE3D0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1403AE3F8 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x1405831D4 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaAttachDeviceDomain(__int64 a1, int *a2)
{
  __int16 v2; // ax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  v7[1] = 0LL;
  v7[0] = -1LL;
  v8 = *((_BYTE *)a2 + 4) != 0;
  v9 = *a2;
  v10 = a1 & 0x3FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    v2 = HvcallFastExtended(65714LL, (__int64)v7, 0x20u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v4, v3, v4, v5) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v4);
}
