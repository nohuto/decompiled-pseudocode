/*
 * XREFs of SdbpGetPathMergeSource @ 0x180096660
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x180096000 (SdbpGetPathAppPatch.c)
 *     AslPathCombine @ 0x1800A3EA8 (AslPathCombine.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetPathMergeSource(_WORD *a1, unsigned __int64 a2, const wchar_t *a3)
{
  const wchar_t *v3; // r10
  int v7; // ebx
  _OWORD v8[2]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v9; // [rsp+50h] [rbp-248h]
  wchar_t v10; // [rsp+58h] [rbp-240h]
  wchar_t v11[264]; // [rsp+60h] [rbp-238h] BYREF

  v3 = a3;
  v10 = aMergesdbfiless[20];
  v8[0] = *(_OWORD *)L"\\MergeSdbFilesSource";
  v9 = *(_QWORD *)L"urce";
  v8[1] = *(_OWORD *)L"bFilesSource";
  if ( a2 < 0x15 )
    return 3221225507LL;
  *a1 = 0;
  v11[0] = 0;
  if ( !a3 )
    v3 = &word_1800C10AC;
  v7 = AslPathCombine(v8, v3, v11, 260LL);
  if ( v7 >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v11);
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)v7;
}
