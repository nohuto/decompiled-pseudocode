/*
 * XREFs of AslEnvGetSystem32DirPathBuf @ 0x1800A67D0
 * Callers:
 *     SdbpGetPathSystem @ 0x180096770 (SdbpGetPathSystem.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A6698 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180063728 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1800A3EA8 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1800A411C (AslPathToSystemPathBuf.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall AslEnvGetSystem32DirPathBuf(_WORD *a1, __int64 a2, _WORD *a3, __int16 a4, __int16 *a5)
{
  __int16 v9; // cx
  __int64 v10; // r8
  unsigned __int64 i; // rax
  int v12; // ebx
  _WORD v14[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(v14, 0, sizeof(v14));
  *a1 = 0;
  if ( a5 )
    v9 = *a5;
  else
    v9 = a4;
  v10 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( i >= 0x80 )
      return (unsigned int)-1073741637;
    if ( *(_WORD *)((char *)&unk_1800E74A0 + i) == a4 && *(_WORD *)((char *)&unk_1800E74A0 + i + 2) == v9 )
      break;
    ++v10;
  }
  v12 = AslPathToSystemPathBuf(v14, 64LL, *((_QWORD *)&unk_1800E74A0 + 2 * v10 + 1));
  if ( v12 < 0 )
  {
LABEL_10:
    AslLogCallPrintf(1LL);
    return (unsigned int)v12;
  }
  if ( a3 && *a3 )
  {
    v12 = AslPathCombine((__int64)v14, a3, a1, a2);
    if ( v12 < 0 )
      goto LABEL_10;
  }
  else
  {
    v12 = RtlStringCchCopyW(a1, a2, (__int64)v14);
    if ( v12 < 0 )
      goto LABEL_10;
  }
  return 0;
}
