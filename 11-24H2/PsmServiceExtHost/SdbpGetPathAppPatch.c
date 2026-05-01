/*
 * XREFs of SdbpGetPathAppPatch @ 0x180096460
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x180096560 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdb @ 0x180096840 (SdbpGetPathCustomSdb.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x180096940 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathMergeSource @ 0x180096AC0 (SdbpGetPathMergeSource.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1800A4198 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1800A440C (AslPathToSystemPathBuf.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetPathAppPatch(_WORD *a1, unsigned __int64 a2, const wchar_t *a3)
{
  const wchar_t *v3; // r10
  int v7; // ebx
  __int128 v8; // [rsp+30h] [rbp-258h] BYREF
  int v9; // [rsp+40h] [rbp-248h]
  _WORD v10[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  v9 = *(_DWORD *)L"h";
  v8 = *(_OWORD *)L"\\AppPatch";
  if ( a2 < 0xA )
    return 3221225507LL;
  *a1 = 0;
  v10[0] = 0;
  if ( !a3 )
    v3 = &word_1800C1FFC;
  v7 = AslPathCombine(&v8, v3, v10, 260LL);
  if ( v7 < 0 || (v7 = AslPathToSystemPathBuf(a1, a2, v10), v7 < 0) )
    AslLogCallPrintf(1LL);
  return (unsigned int)v7;
}
