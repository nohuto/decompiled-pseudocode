/*
 * XREFs of PbmCastingAppStateChanged @ 0x18003B190
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001454 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800033B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180018A8C (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall PbmCastingAppStateChanged(void *a1, int a2)
{
  int Process; // eax
  int v5; // edi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  volatile signed __int32 *v11; // [rsp+40h] [rbp-9h] BYREF
  int v12; // [rsp+48h] [rbp-1h]
  __int64 v13[2]; // [rsp+50h] [rbp+7h] BYREF
  int v14; // [rsp+60h] [rbp+17h]
  __int64 *v15; // [rsp+88h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  struct CProcess *v17; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( a2 > 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x207,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( g_ApplicationManager )
  {
    v17 = 0LL;
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v17);
    v5 = Process;
    if ( Process < 0 )
    {
      v6 = (unsigned int)Process;
      v7 = 524LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)v6);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v17);
      return (unsigned int)v5;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      (__int64 *)&v11,
      (__int64 *)&v17);
    v12 = a2;
    v13[0] = (__int64)off_180051148;
    v13[1] = (__int64)v11;
    v15 = v13;
    v11 = 0LL;
    v14 = a2;
    v5 = QueueGenericWorkItem(v13);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v11);
    if ( v5 < 0 )
    {
      v6 = (unsigned int)v5;
      v7 = 529LL;
      goto LABEL_8;
    }
    v8 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v8 > 4u )
    {
      v11 = (volatile signed __int32 *)*((_QWORD *)v17 + 22);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (__int64)&unk_180057D30,
        v9,
        v10,
        &v11);
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v17);
  }
  return 0LL;
}
