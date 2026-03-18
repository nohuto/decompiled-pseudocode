/*
 * XREFs of ?LogAdapterStartTelemetry@@YAXPEAU_FDO_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x14005C7A8
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U2@U?$_tlgWrapSz@G@@U1@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@55554AEBU?$_tlgWrapSz@G@@355555@Z @ 0x140004950 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@_ea_140004950.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

char __fastcall LogAdapterStartTelemetry(__int64 a1, GUID *a2, int a3, int a4)
{
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // r9
  GUID *p_ActivityId; // r8
  __int16 v12; // [rsp+A0h] [rbp-19h] BYREF
  __int16 v13; // [rsp+A2h] [rbp-17h] BYREF
  int v14; // [rsp+A4h] [rbp-15h] BYREF
  int v15; // [rsp+A8h] [rbp-11h] BYREF
  int v16; // [rsp+ACh] [rbp-Dh] BYREF
  int v17; // [rsp+B0h] [rbp-9h] BYREF
  int v18; // [rsp+B4h] [rbp-5h] BYREF
  int v19; // [rsp+B8h] [rbp-1h] BYREF
  int v20; // [rsp+BCh] [rbp+3h] BYREF
  int v21; // [rsp+C0h] [rbp+7h] BYREF
  int v22; // [rsp+C4h] [rbp+Bh] BYREF
  int v23; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+D0h] [rbp+17h] BYREF
  void *v25; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+E0h] [rbp+27h] BYREF
  GUID ActivityId; // [rsp+E8h] [rbp+2Fh] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  result = ++dword_140161418;
  if ( (unsigned int)dword_14015E618 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_14015E618, 0x800002000000LL);
    if ( result )
    {
      p_ActivityId = &ActivityId;
      v16 = *(_DWORD *)(a1 + 2748);
      v17 = *(unsigned __int8 *)(a1 + 480);
      if ( a2 )
        p_ActivityId = a2;
      v18 = *(_DWORD *)(a1 + 4984);
      v24 = *(_QWORD *)(a1 + 4976);
      v25 = *(void **)(a1 + 4968);
      v12 = *(_WORD *)(a1 + 1140);
      v19 = *(_DWORD *)(a1 + 1136);
      v20 = *(_DWORD *)(a1 + 1132);
      v21 = *(_DWORD *)(a1 + 1128);
      v22 = *(_DWORD *)(a1 + 1124);
      v23 = dword_140161418;
      v14 = a4;
      v15 = a3;
      v13 = v10;
      v26 = 2048LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               v9,
               (__int64)&unk_14013E96F,
               (__int64)p_ActivityId,
               v10,
               (__int64)&v26,
               (__int64)&v13,
               (__int64)&v23,
               (__int64)&v22,
               (__int64)&v21,
               (__int64)&v20,
               (__int64)&v19,
               (__int64)&v12,
               &v25,
               (__int64)&v24,
               (__int64)&v18,
               (__int64)&v17,
               (__int64)&v16,
               (__int64)&v15,
               (__int64)&v14);
    }
  }
  return result;
}
