/*
 * XREFs of ?AddInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x14020EC4C
 * Callers:
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x14020E9BC (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x140009594 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-$_tlgW.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?InertiaSourceToString@InputTraceLogging@@CAPEBDW4INERTIA_SOURCE@@@Z @ 0x14020EF2C (-InertiaSourceToString@InputTraceLogging@@CAPEBDW4INERTIA_SOURCE@@@Z.c)
 */

void __fastcall InputTraceLogging::Inertia::AddInertiaInfo(const struct INERTIA_INFO_INTERNAL *a1)
{
  __int64 v1; // r8
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+60h] [rbp-20h] BYREF
  int v8; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v9; // [rsp+68h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp-10h] BYREF
  int v11; // [rsp+98h] [rbp+18h] BYREF
  int v12; // [rsp+A0h] [rbp+20h] BYREF
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 2LL) )
  {
    v2 = *(_DWORD *)(v1 + 184);
    v11 = -__CFSHR__(v2, 6);
    v12 = -__CFSHR__(v2, 4);
    v13 = -__CFSHR__(v2, 3);
    v7 = -__CFSHR__(v2, 5);
    v3 = *(_QWORD *)(v1 + 120);
    v8 = -__CFSHR__(v2, 2);
    v4 = *(unsigned int *)(v1 + 24);
    v9 = v3;
    v10 = InputTraceLogging::InertiaSourceToString(v4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027DA97,
      v5,
      v6,
      (void **)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
}
