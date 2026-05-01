/*
 * XREFs of AslPathToSystemPathBuf @ 0x1800A440C
 * Callers:
 *     SdbpGetPathAppPatch @ 0x180096460 (SdbpGetPathAppPatch.c)
 *     AslPathToSystemPath @ 0x1800A434C (AslPathToSystemPath.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A6988 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A6AC0 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1800636A8 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x180091F78 (RtlStringCchCatW.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A7924 (RtlDownlevelGetNtSystemRoot.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall AslPathToSystemPathBuf(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 NtSystemRoot; // rax
  int v7; // ebx

  memset_0(a1, 0, 2 * a2);
  NtSystemRoot = RtlDownlevelGetNtSystemRoot();
  v7 = RtlStringCchCopyW(a1, a2, NtSystemRoot);
  if ( v7 >= 0 )
  {
    v7 = RtlStringCchCatW(a1, a2, a3);
    if ( v7 < 0 )
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v7;
}
