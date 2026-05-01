/*
 * XREFs of AslPathToSystemPath @ 0x1800A434C
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x18009321C (SdbpGetManifestedMergeStubAlloc.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 *     AslPathToSystemPathBuf @ 0x1800A440C (AslPathToSystemPathBuf.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall AslPathToSystemPath(_QWORD *a1, __int64 a2)
{
  int v3; // ebx
  _WORD v5[264]; // [rsp+30h] [rbp-228h] BYREF

  *a1 = 0LL;
  v5[0] = 0;
  v3 = AslPathToSystemPathBuf(v5, 260LL, a2);
  if ( v3 < 0 || (v3 = AslStringDuplicate(a1, (__int64)v5), v3 < 0) )
    AslLogCallPrintf(1LL);
  else
    return 0;
  return (unsigned int)v3;
}
