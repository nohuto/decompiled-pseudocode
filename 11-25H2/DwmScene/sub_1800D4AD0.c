/*
 * XREFs of sub_1800D4AD0 @ 0x1800D4AD0
 * Callers:
 *     sub_1800D3878 @ 0x1800D3878 (sub_1800D3878.c)
 *     sub_1800D3B6C @ 0x1800D3B6C (sub_1800D3B6C.c)
 *     sub_1800D3FE0 @ 0x1800D3FE0 (sub_1800D3FE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800D32D0 @ 0x1800D32D0 (sub_1800D32D0.c)
 */

__int64 __fastcall sub_1800D4AD0(unsigned int a1, int a2)
{
  __int64 result; // rax
  _QWORD v3[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 && a1 < 3 )
    {
      std::string::string(v3, "Number of vertices is less than three");
      sub_1800D32D0(pExceptionObject, (__int64)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  else
  {
    result = 3 * (a1 / 3);
    if ( a1 != (_DWORD)result )
    {
      std::string::string(v3, "Number of vertices is not a multiple of three");
      sub_1800D32D0(pExceptionObject, (__int64)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  return result;
}
