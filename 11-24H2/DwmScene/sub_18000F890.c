/*
 * XREFs of sub_18000F890 @ 0x18000F890
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 */

void __fastcall __noreturn sub_18000F890(__int64 a1)
{
  _QWORD pExceptionObject[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v2[152]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v3; // [rsp+C8h] [rbp-30h]
  __int128 v4; // [rsp+D8h] [rbp-20h]

  pExceptionObject[1] = "unknown";
  pExceptionObject[0] = &wil::ResultException::`vftable';
  v3 = 0LL;
  sub_18000F3AC((__int64)v2, a1);
  v4 = 0LL;
  throw (wil::ResultException *)pExceptionObject;
}
