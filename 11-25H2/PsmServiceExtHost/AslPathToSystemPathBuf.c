/*
 * XREFs of AslPathToSystemPathBuf @ 0x1800A411C
 * Callers:
 *     SdbpGetPathAppPatch @ 0x180096000 (SdbpGetPathAppPatch.c)
 *     AslPathToSystemPath @ 0x1800A405C (AslPathToSystemPath.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A6698 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A67D0 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180063728 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x180091B18 (RtlStringCchCatW.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A7634 (RtlDownlevelGetNtSystemRoot.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
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
