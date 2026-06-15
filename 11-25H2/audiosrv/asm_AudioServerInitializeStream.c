/*
 * XREFs of asm_AudioServerInitializeStream @ 0x1800B2AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001598 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18000E2AC (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall asm_AudioServerInitializeStream(
        void *a1,
        struct IProcessSubmixProxy **a2,
        unsigned int a3,
        struct tWAVEFORMATEX *a4,
        struct _GUID *a5,
        struct VadServerSettings *a6,
        void **a7)
{
  __int64 pftDueTime; // rbx
  unsigned int v12; // edi
  struct AudioSrvTelemetryProvider *v13; // rax
  __int64 v14; // rax
  const WCHAR *v15; // rdi
  struct AudioSrvTelemetryProvider *v16; // rax
  _DWORD *v17; // rbx
  struct IProcessSubmixProxy *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // ebx
  int v24; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int16 *v25; // [rsp+58h] [rbp-69h] BYREF
  const WCHAR *v26; // [rsp+60h] [rbp-61h] BYREF
  void **v27; // [rsp+68h] [rbp-59h]
  struct _TP_TIMER *pv[7]; // [rsp+70h] [rbp-51h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-19h]
  __int128 v30; // [rsp+B8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+47h]

  v27 = a7;
  v29 = *(_OWORD *)a6;
  v30 = v29;
  EtwEventActivityIdControl(4LL, &v30);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v12 = g_AudioSrvWatchDogTimerInMs;
  v13 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v13 + 1),
    v12,
    (struct _TP_TIMER *)L"asm_AudioServerInitializeStream",
    pftDueTime);
  v14 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)*a2 + 184LL))(*a2);
  v25 = 0LL;
  v15 = (const WCHAR *)v14;
  v16 = AudioSrvTelemetryProvider::Instance();
  v17 = (_DWORD *)*((_QWORD *)v16 + 1);
  if ( *v17 > 4u && tlgKeywordOn(*((_QWORD *)v16 + 1), 512LL) )
  {
    v18 = *a2;
    v26 = v15;
    v24 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v18 + 128LL))(v18);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)v17,
      (int)&unk_18019E3CE,
      v19,
      v20,
      (__int64)&v24,
      &v26);
  }
  v21 = AudioServerInitialize_Internal(a1, v15, AUDCLNT_SHAREMODE_SHARED, a3, a4, a5, a6, &v25, *a2, v27);
  v22 = v21;
  if ( v21 >= 0 )
  {
    operator delete(v25);
    v22 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v21);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v30);
  return v22;
}
