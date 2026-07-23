/*
 * XREFs of HvlSetPasidAddressSpace @ 0x1405857E0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x14039CBE0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x140580554 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetPasidAddressSpace(int a1, int a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v7; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 v10; // [rsp+50h] [rbp-28h]

  v7 = -1LL;
  v9 = a1;
  v8 = a2;
  v10 = a3;
  while ( 1 )
  {
    LOWORD(v3) = HvcallFastExtended(65695LL, (__int64)&v7, 0x18u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v3) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v3, v4, v3, v5) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v3);
}
