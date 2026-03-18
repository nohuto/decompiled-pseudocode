/*
 * XREFs of RIMSetSystemInputMode @ 0x14011D91C
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14016494C (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     ?SetSystemInputMode@RIM@InputTraceLogging@@SAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14011D968 (-SetSystemInputMode@RIM@InputTraceLogging@@SAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMSyncWalkRimObjList @ 0x14011D9CC (RIMSyncWalkRimObjList.c)
 *     _lambda_94dd59a04c39bb1513797c78502b3509_::operator_void_(__cdecl_)(RawInputManagerObject___void__) @ 0x1401E3CA8 (_lambda_94dd59a04c39bb1513797c78502b3509_--operator_void_(__cdecl_)(RawInputManagerObject___void.c)
 */

__int64 __fastcall RIMSetSystemInputMode(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !*(_BYTE *)W32GetUserGdiSessionState(a1) )
  {
    InputTraceLogging::RIM::SetSystemInputMode(v3);
    v2 = lambda_94dd59a04c39bb1513797c78502b3509_::operator_void____cdecl___RawInputManagerObject___void___();
    RIMSyncWalkRimObjList(1LL, &v3, v2);
  }
  return 0LL;
}
