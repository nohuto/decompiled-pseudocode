/*
 * XREFs of ?LoadKglThreadProc@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003B450
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001087C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003B058 (-LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 */

void __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKglThreadProc(
        PTP_CALLBACK_INSTANCE Instance,
        const struct _GUID *Context,
        __int64 Work,
        const unsigned __int16 *a4)
{
  int Kgl; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Kgl = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKgl(
          (RTL_SRWLOCK *)Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance,
          Context,
          Work,
          a4);
  if ( Kgl >= 0 )
    SetEvent(hEvent);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)Kgl);
  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
  CloseThreadpoolWork(Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_loadKglThread);
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_loadKglThread = 0LL;
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
}
