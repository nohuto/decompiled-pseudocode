/*
 * XREFs of _lambda_6fd6f184957a643251d7d3699d74716f_::operator() @ 0x18012D5F4
 * Callers:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x18012D1B0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     std::_Func_impl_no_alloc__lambda_6fd6f184957a643251d7d3699d74716f__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1801F4180 (std--_Func_impl_no_alloc__lambda_6fd6f184957a643251d7d3699d74716f__void_void___unsi_ea_1801F4180.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180003128 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U-$_tlgWrapperByVal@$07@@U1@@-$.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_6fd6f184957a643251d7d3699d74716f_::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        char a6)
{
  __int64 v6; // r10
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // edi
  int v12; // r9d
  unsigned int v13; // eax
  __int128 v14; // [rsp+68h] [rbp-19h] BYREF
  __int64 v15; // [rsp+78h] [rbp-9h]
  void *retaddr; // [rsp+C8h] [rbp+47h]

  v6 = a2 + 16;
  LODWORD(v15) = a3;
  *((_QWORD *)&v14 + 1) = a4;
  HIDWORD(v15) = *(_DWORD *)(a2 + 8);
  v7 = *(unsigned int *)(a2 + 40);
  LOWORD(v14) = (a6 & 4) != 0;
  WORD1(v14) = (a6 & 2) != 0;
  DWORD1(v14) = a6 & 1;
  v8 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v11 = -2147024362;
    v13 = 181;
    v12 = -2147024362;
    goto LABEL_12;
  }
  if ( v8 > *(_DWORD *)(v6 + 20) )
  {
    result = DynArrayImpl<0>::AddMultipleAndSet(v6, 24, 1, &v14);
    v11 = result;
    v12 = result;
    if ( (int)result >= 0 )
      goto LABEL_4;
    v13 = 192;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v13, 0LL);
    ModuleFailFastForHRESULT(v11, retaddr);
  }
  v9 = 3 * v7;
  result = *(_QWORD *)v6;
  *(_OWORD *)(result + 8 * v9) = v14;
  *(_QWORD *)(result + 8 * v9 + 16) = v15;
  *(_DWORD *)(v6 + 24) = v8;
LABEL_4:
  if ( (unsigned int)dword_1803F8CA8 > 5 && (qword_1803F8CB8 & 1) != 0 )
  {
    result = qword_1803F8CC0 & 1;
    if ( result == qword_1803F8CC0 )
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
               v9,
               (__int64)&unk_1803CCBA7);
  }
  return result;
}
