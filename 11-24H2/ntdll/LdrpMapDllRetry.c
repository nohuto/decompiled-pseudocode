/*
 * XREFs of LdrpMapDllRetry @ 0x1800D1240
 * Callers:
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpMapDllNtFileName @ 0x18008DF20 (LdrpMapDllNtFileName.c)
 *     LdrpGetNtPathFromDosPath @ 0x1800927B0 (LdrpGetNtPathFromDosPath.c)
 *     LdrpFindExistingModule @ 0x180092F10 (LdrpFindExistingModule.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D1F28 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllRetry(__int64 a1)
{
  __int64 v2; // r9
  int v3; // r8d
  unsigned __int16 *v4; // rsi
  int ExistingModule; // ebx
  volatile signed __int32 *v7; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING v8; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[128]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  memset_thunk_772440563353939046(&v8, 0, 0x110uLL);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 32);
  v8.Buffer = v9;
  *(_DWORD *)&v8.Length = 0x1000000;
  v4 = (unsigned __int16 *)(v2 + 72);
  v9[0] = 0;
  ExistingModule = LdrpFindExistingModule(
                     (unsigned __int16 *)(v2 + 88),
                     (unsigned __int16 *)(v2 + 72),
                     v3,
                     *(_DWORD *)(v2 + 264),
                     &v7);
  if ( v7 )
  {
    LdrpLoadContextReplaceModule(a1, v7);
  }
  else
  {
    ExistingModule = LdrpGetNtPathFromDosPath(v4, &v8);
    if ( ExistingModule >= 0 )
      ExistingModule = LdrpMapDllNtFileName(a1, &v8);
  }
  if ( v9 != v8.Buffer )
    RtlpSysVolFree(v8.Buffer);
  return (unsigned int)ExistingModule;
}
