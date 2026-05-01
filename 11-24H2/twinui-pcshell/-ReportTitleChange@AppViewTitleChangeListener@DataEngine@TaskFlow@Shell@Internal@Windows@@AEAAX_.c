/*
 * XREFs of ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180404820
 * Callers:
 *     ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x180404C38 (-TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Win.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x180217B80 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x180401CA8 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?get_system_time@filetime@wil@@YA?AU_FILETIME@@XZ @ 0x180403E78 (-get_system_time@filetime@wil@@YA-AU_FILETIME@@XZ.c)
 *     ??$AppViewTitleChangeDataCreated@AEA_KAEA_J@TaskFlowDataEngineTelemetry@@SAXAEA_KAEA_J@Z @ 0x180403EFC (--$AppViewTitleChangeDataCreated@AEA_KAEA_J@TaskFlowDataEngineTelemetry@@SAXAEA_KAEA_J@Z.c)
 *     ??$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180404038 (--$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // rbx
  wil::filetime *v6; // rcx
  struct _FILETIME system_time; // rsi
  HRESULT v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-30h]
  int v12[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  const unsigned __int16 *v14; // [rsp+40h] [rbp-10h] BYREF
  struct _FILETIME v15; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF
  __int16 v18; // [rsp+90h] [rbp+40h] BYREF
  HSTRING string; // [rsp+98h] [rbp+48h] BYREF

  v17 = a2;
  v3 = a3;
  v18 = 0;
  wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeDataFactory>(
    (const WCHAR *)&v13,
    a2,
    (unsigned int)a3);
  system_time = wil::filetime::get_system_time(v6);
  v15 = system_time;
  *(_QWORD *)v12 = 0LL;
  string = 0LL;
  if ( *((_QWORD *)v3 + 3) > 7uLL )
    v3 = *(const unsigned __int16 **)v3;
  v14 = v3;
  v8 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(&string, &v14);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v8,
      v11);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, struct _FILETIME))(*(_QWORD *)v13 + 48LL))(
         v13,
         a2,
         string,
         system_time);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7B,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v9,
      (int)v12);
  TaskFlowDataEngineTelemetry::AppViewTitleChangeDataCreated<unsigned __int64 &,__int64 &>(&v17, (__int64 *)&v15);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 64LL))(
          *(_QWORD *)(a1 + 80),
          *(_QWORD *)v12);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7F,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v10,
      (int)v12);
  LOBYTE(v18) = 1;
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v18);
}
