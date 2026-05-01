/*
 * XREFs of RtlStringCchCopyW @ 0x180063728
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F6C8 (SdbShouldBlockPackageLaunch.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x180096100 (SdbpGetPathAppPatchPreRS3.c)
 *     AslStringDuplicate @ 0x18009E218 (AslStringDuplicate.c)
 *     AslpFileQueryVersionString @ 0x1800A3010 (AslpFileQueryVersionString.c)
 *     AslPathCombine @ 0x1800A3EA8 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1800A411C (AslPathToSystemPathBuf.c)
 *     AslPathWildcardFindFirst @ 0x1800A4220 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A6698 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A67D0 (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x1800A6B34 (AslpEnvResolveVars.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int16 v5; // ax
  _WORD *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(_WORD *)((char *)a1 + v4);
      if ( !v5 )
        break;
      *a1++ = v5;
      --a2;
    }
    while ( a2 );
    v6 = a1 - 1;
    if ( a2 )
      v6 = a1;
    *v6 = 0;
    return a2 == 0 ? 0x80000005 : 0;
  }
  return result;
}
