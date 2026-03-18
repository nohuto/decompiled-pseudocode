/*
 * XREFs of ?CreatePlaneLiveDumpAtPassive@@YAXIIPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1401D8868
 * Callers:
 *     ?ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z @ 0x14007608C (-ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@43555555@Z @ 0x140003D04 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$_ea_140003D04.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

void __fastcall CreatePlaneLiveDumpAtPassive(
        unsigned int a1,
        unsigned int a2,
        const struct _MOCKDRIVERSTATE_VALIDATE_PLANE *a3,
        struct DXGADAPTER *a4,
        struct _MOCKDRIVERSTATE_PLANE *a5)
{
  __int64 v6; // rsi
  __int64 v8; // rdi
  struct _MOCKDRIVERSTATE_PLANE *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+B0h] [rbp-80h] BYREF
  int v15; // [rsp+B4h] [rbp-7Ch] BYREF
  int v16; // [rsp+B8h] [rbp-78h] BYREF
  int v17; // [rsp+BCh] [rbp-74h] BYREF
  int v18; // [rsp+C0h] [rbp-70h] BYREF
  int v19; // [rsp+C4h] [rbp-6Ch] BYREF
  int v20; // [rsp+C8h] [rbp-68h] BYREF
  int v21; // [rsp+CCh] [rbp-64h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-60h]
  __int64 v23; // [rsp+D8h] [rbp-58h] BYREF
  void *v24; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v26[8]; // [rsp+F0h] [rbp-40h] BYREF
  __int16 v27; // [rsp+140h] [rbp+10h] BYREF
  __int16 v28; // [rsp+148h] [rbp+18h] BYREF
  int IsDebuggerPresent; // [rsp+150h] [rbp+20h] BYREF
  int v30; // [rsp+158h] [rbp+28h] BYREF

  v6 = a2;
  v8 = a1;
  WdLogSingleEntry2(2LL, a1, a2);
  WdLogGlobalForLineNumber = 297;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Destroying kernel plane state without explicitly asking driver to disable plane on source0x%I64x, plane:0x%I64x",
    v8,
    v6,
    0LL,
    0LL,
    0LL);
  v9 = a5;
  *((_DWORD *)a5 + 654) = *((_DWORD *)a3 + 10);
  *((_DWORD *)v9 + 655) = v6;
  *((_BYTE *)v9 + 8) = 1;
  *((_QWORD *)v9 + 328) = *((_QWORD *)a3 + 6);
  RtlCaptureStackBackTrace(2u, 0xCu, (PVOID *)v9 + 329, 0LL);
  v22 = *(_QWORD *)((char *)a4 + 412);
  if ( (unsigned int)dword_14015B660 > 5 && tlgKeywordOn((__int64)&dword_14015B660, 0x400000020000LL) )
  {
    LOBYTE(v10) = 1;
    LODWORD(a5) = *((unsigned __int8 *)a4 + 209);
    v26[0] = 0x1000000LL;
    IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v10);
    v30 = *((_DWORD *)a4 + 804);
    v14 = *((unsigned __int8 *)a4 + 3053);
    v15 = *((_DWORD *)v9 + 655);
    v16 = *((_DWORD *)v9 + 654);
    v27 = *((_WORD *)a4 + 1502);
    v23 = *((_QWORD *)a4 + 251);
    v24 = (void *)*((_QWORD *)a4 + 250);
    v17 = *((_DWORD *)a4 + 109);
    v18 = *((_DWORD *)a4 + 108);
    v19 = *((_DWORD *)a4 + 107);
    v20 = *((_DWORD *)a4 + 106);
    v21 = *((_DWORD *)a4 + 105);
    v25 = v22;
    v28 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (__int64)&unk_14013B385,
      v12,
      v13,
      (__int64)&v28,
      (__int64)v26,
      (__int64)&v25,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      &v24,
      (__int64)&v23,
      (__int64)&v27,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v30,
      (__int64)&IsDebuggerPresent,
      (__int64)&a5);
  }
  DxgCreateLiveDumpWithWdLogs(403LL, 2067LL);
}
