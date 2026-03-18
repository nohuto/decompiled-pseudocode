/*
 * XREFs of ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180211CEC
 * Callers:
 *     DllMain @ 0x180224B80 (DllMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1801CB258 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x180211D90 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 *     ?Startup@@YAJXZ @ 0x18024E80C (-Startup@@YAJXZ.c)
 *     McGenEventUnregister_EventUnregister @ 0x1802ADAC0 (McGenEventUnregister_EventUnregister.c)
 */

__int64 __fastcall DwmCoreDllMain(HINSTANCE a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  REGHANDLE v9; // rcx
  REGHANDLE v10; // rcx
  REGHANDLE v11; // rcx
  REGHANDLE v12; // rcx
  REGHANDLE v13; // rcx

  v2 = 1;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 )
        CThreadContext::FreeCurrent();
    }
    else
    {
      CThreadContext::s_dwTlsIndex = TlsAlloc();
      if ( CThreadContext::s_dwTlsIndex == -1 )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x34u, 0LL);
      }
      else
      {
        v5 = Startup();
        v8 = v5;
        if ( v5 >= 0 )
          RegisterDwmGuidWithEtw(v7, v6);
        else
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x36u, 0LL);
      }
      return v8 >= 0;
    }
  }
  else
  {
    McGenEventUnregister_EventUnregister(Microsoft_Windows_Dwm_Compositor_Context);
    McGenEventUnregister_EventUnregister(&Microsoft_Windows_Dwm_Core_Provider_Context);
    v9 = RegHandle;
    RegHandle = 0LL;
    dword_1803F8D18 = 0;
    EventUnregister(v9);
    v10 = qword_1803F8C90;
    qword_1803F8C90 = 0LL;
    dword_1803F8C70 = 0;
    EventUnregister(v10);
    v11 = qword_1803F8CC8;
    qword_1803F8CC8 = 0LL;
    dword_1803F8CA8 = 0;
    EventUnregister(v11);
    v12 = qword_1803F8D00;
    qword_1803F8D00 = 0LL;
    dword_1803F8CE0 = 0;
    EventUnregister(v12);
    v13 = qword_1803F8D70;
    qword_1803F8D70 = 0LL;
    dword_1803F8D50 = 0;
    EventUnregister(v13);
    if ( CThreadContext::s_dwTlsIndex != -1 )
    {
      CThreadContext::FreeCurrent();
      TlsFree(CThreadContext::s_dwTlsIndex);
      CThreadContext::s_dwTlsIndex = -1;
    }
  }
  return v2;
}
