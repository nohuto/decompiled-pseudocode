/*
 * XREFs of SdbGetPathCustomSdb @ 0x180095AA8
 * Callers:
 *     SdbResolveDatabaseEx @ 0x180095BCC (SdbResolveDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpGetCustomSdbFileName @ 0x180095F6C (SdbpGetCustomSdbFileName.c)
 *     SdbpGetSystemSdbFilePath @ 0x1800968D4 (SdbpGetSystemSdbFilePath.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

_BOOL8 __fastcall SdbGetPathCustomSdb(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // r9d
  int CustomSdbFileName; // ebx
  _BYTE v11[96]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v11, 0, 0x56uLL);
  if ( a3 && (CustomSdbFileName = SdbpGetCustomSdbFileName(v11, v7, a3), CustomSdbFileName < 0)
    || (CustomSdbFileName = SdbpGetSystemSdbFilePath(a1, v7, 10, v8, (__int64)v11, a4), CustomSdbFileName < 0) )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    CustomSdbFileName = 0;
  }
  return CustomSdbFileName >= 0;
}
