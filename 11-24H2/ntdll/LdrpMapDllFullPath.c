/*
 * XREFs of LdrpMapDllFullPath @ 0x180091C68
 * Callers:
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D4588 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpMapDllNtFileName @ 0x18008DF20 (LdrpMapDllNtFileName.c)
 *     LdrpHashUnicodeString @ 0x180090C40 (LdrpHashUnicodeString.c)
 *     LdrpResolveDllName @ 0x180092430 (LdrpResolveDllName.c)
 *     LdrpAppCompatRedirect @ 0x180092E1C (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x180092F10 (LdrpFindExistingModule.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D1F28 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__int64 a1)
{
  __int64 v2; // r15
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING v9; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v10[128]; // [rsp+50h] [rbp-B0h] BYREF

  memset_thunk_772440563353939046(&v9, 0, 0x110uLL);
  v2 = *(_QWORD *)(a1 + 56);
  v9.Buffer = v10;
  v3 = *(_DWORD *)(a1 + 32);
  v8 = 0LL;
  *(_DWORD *)&v9.Length = 0x1000000;
  v10[0] = 0;
  v4 = LdrpResolveDllName(a1, (unsigned int)&v9, (int)v2 + 88, (int)v2 + 72, v3);
  v5 = v4;
  if ( *(_QWORD *)(a1 + 176) )
  {
    if ( v4 < 0 )
      goto LABEL_6;
  }
  else
  {
    v5 = LdrpAppCompatRedirect(a1, (int)v2 + 72, (int)v2 + 88, (unsigned int)&v9, v4);
    if ( v5 < 0 )
      goto LABEL_6;
    v6 = LdrpHashUnicodeString((unsigned __int16 *)(v2 + 88));
    *(_DWORD *)(v2 + 264) = v6;
    LdrpFindExistingModule(v2 + 88, v2 + 72, *(_DWORD *)(a1 + 32), v6, (__int64)&v8);
    if ( v8 )
    {
      LdrpLoadContextReplaceModule(a1, v8);
      goto LABEL_6;
    }
  }
  v5 = LdrpMapDllNtFileName(a1, &v9);
  if ( v5 == 1073741838 )
    v5 = -1073741701;
LABEL_6:
  if ( v10 != v9.Buffer )
    RtlpSysVolFree(v9.Buffer);
  return (unsigned int)v5;
}
