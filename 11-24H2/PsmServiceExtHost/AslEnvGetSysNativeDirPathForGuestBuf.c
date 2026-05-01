/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A6988
 * Callers:
 *     SdbpGetPathAppraiser @ 0x1800966F0 (SdbpGetPathAppraiser.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1800636A8 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1800A4198 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1800A440C (AslPathToSystemPathBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A6AC0 (AslEnvGetSystem32DirPathBuf.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        _WORD *a1,
        __int64 a2,
        _WORD *a3,
        unsigned __int16 a4,
        _WORD *a5)
{
  int v9; // ebx
  _WORD v11[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(v11, 0, sizeof(v11));
  *a1 = 0;
  if ( a5 && *a5 != a4 )
  {
    v9 = AslPathToSystemPathBuf(v11, 64LL, (__int64)L"\\SysNative");
    if ( v9 >= 0 )
    {
      if ( a3 && *a3 )
      {
        v9 = AslPathCombine((__int64)v11, a3, a1, a2);
        if ( v9 < 0 )
          goto LABEL_9;
        return (unsigned int)v9;
      }
      v9 = RtlStringCchCopyW(a1, a2, (__int64)v11);
      if ( v9 >= 0 )
        return (unsigned int)v9;
    }
LABEL_9:
    AslLogCallPrintf(1LL);
    return (unsigned int)v9;
  }
  return AslEnvGetSystem32DirPathBuf((_DWORD)a1, a2, (_DWORD)a3, a4, (__int64)a5);
}
