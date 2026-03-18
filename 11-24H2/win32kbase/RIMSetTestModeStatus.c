/*
 * XREFs of RIMSetTestModeStatus @ 0x1401D3740
 * Callers:
 *     NtRIMSetTestModeStatus @ 0x1401D50C0 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x14011D9CC (RIMSyncWalkRimObjList.c)
 */

__int64 __fastcall RIMSetTestModeStatus(__int64 a1)
{
  int v1; // edi

  v1 = a1;
  *(_BYTE *)(W32GetUserSessionState(a1) + 169) = (_DWORD)a1 != 0;
  if ( !v1 )
    RIMSyncWalkRimObjList(
      1LL,
      0LL,
      (void (__fastcall *)(void *, __int64))lambda_511ac2b97c1247323f798affe6b4aaf6_::_lambda_invoker_cdecl_);
  return 0LL;
}
