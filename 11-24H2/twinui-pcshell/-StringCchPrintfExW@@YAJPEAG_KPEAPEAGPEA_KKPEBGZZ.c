/*
 * XREFs of ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18005C194
 * Callers:
 *     ?BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z @ 0x180057EB4 (-BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z.c)
 *     ?BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x180058334 (-BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z @ 0x180058EE0 (-BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z @ 0x18005907C (-BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z.c)
 *     ?BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z @ 0x180059A30 (-BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z.c)
 *     ?BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z @ 0x18005A000 (-BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18005A714 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x18005C074 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z @ 0x18005CAC0 (-IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z @ 0x180212900 (-BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z @ 0x18021DF6C (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z @ 0x1802B660C (-IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z.c)
 *     ?BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error@GameDVRTraceProvider@@SAXJ@Z @ 0x1802B8E90 (-BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z @ 0x1802BDCEC (-IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z.c)
 *     ?BroadcastDVRComponent_ActivateForKGLUpdate_Done@GameDVRTraceProvider@@SAXJK@Z @ 0x180315B50 (-BroadcastDVRComponent_ActivateForKGLUpdate_Done@GameDVRTraceProvider@@SAXJK@Z.c)
 *     ?BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z @ 0x180315CE4 (-BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z.c)
 *     ?BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z @ 0x180315D94 (-BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z @ 0x180315E44 (-BroadcastDVRComponent_NoRecentGameActivity@GameDVRTraceProvider@@SAX_KK@Z.c)
 *     ?BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z @ 0x180315F5C (-BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z.c)
 *     ?BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z @ 0x180316074 (-BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z.c)
 *     ?BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x18031618C (-BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z @ 0x1803162A4 (-BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z.c)
 *     ?BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x1803163B0 (-BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 *     ?BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x180316500 (-BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 *     ?PrintType@GameDVR_OutputDebug@@QEAAXPEBDE@Z @ 0x18031A3A0 (-PrintType@GameDVR_OutputDebug@@QEAAXPEBDE@Z.c)
 *     ?IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z @ 0x18031AD4C (-IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z.c)
 *     ?IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z @ 0x18031AEEC (-IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z @ 0x18031AF9C (-IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031B0C4 (-IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031B184 (-IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031B244 (-IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z.c)
 * Callees:
 *     StringExValidateDestW @ 0x1802CA7D0 (StringExValidateDestW.c)
 *     StringExHandleFillBehindNullW @ 0x18030E98C (StringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x18030E9B8 (StringExHandleOtherFlagsW.c)
 *     StringExValidateSrcW @ 0x18030EA78 (StringExValidateSrcW.c)
 *     StringVPrintfWorkerW_0 @ 0x18030EA9C (StringVPrintfWorkerW_0.c)
 */

__int64 StringCchPrintfExW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        unsigned __int16 **a3,
        unsigned __int64 *a4,
        DWORD dwFlags,
        const unsigned __int16 *ppszSrc,
        ...)
{
  HRESULT v9; // ebx
  size_t v10; // r8
  DWORD v11; // r9d
  wchar_t *v12; // r12
  unsigned __int64 v13; // r14
  size_t v14; // rdx
  size_t v15; // r8
  size_t v16; // rax
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+38h] [rbp-20h] BYREF
  size_t pcchNewDestLength[3]; // [rsp+40h] [rbp-18h] BYREF
  va_list va; // [rsp+D0h] [rbp+78h] BYREF

  va_start(va, ppszSrc);
  v9 = StringExValidateDestW(pszDest, cchDest, (const size_t)a3, dwFlags);
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
    return (unsigned int)v9;
  }
  ppszDestEnd = pszDest;
  v12 = pszDest;
  pcchNewDestLength[0] = cchDest;
  v13 = cchDest;
  v9 = StringExValidateSrcW(&ppszSrc, 0LL, v10, v11);
  if ( v9 < 0 )
    goto LABEL_14;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v9 = -2147024809;
LABEL_14:
    if ( cchDest )
      *pszDest = v14;
    goto LABEL_16;
  }
  if ( cchDest )
  {
    pcchNewDestLength[0] = v14;
    v9 = StringVPrintfWorkerW_0(pszDest, cchDest, pcchNewDestLength, ppszSrc, va);
    v16 = pcchNewDestLength[0];
    v13 = cchDest - pcchNewDestLength[0];
    pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
    v12 = &pszDest[v16];
    ppszDestEnd = v12;
    if ( v9 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v13 > 1 )
        StringExHandleFillBehindNullW(&pszDest[v16], 2 * v13, dwFlags);
LABEL_7:
      if ( v9 >= 0 )
      {
LABEL_8:
        if ( a3 )
          *a3 = v12;
        if ( a4 )
          *a4 = v13;
        return (unsigned int)v9;
      }
    }
  }
  else
  {
    if ( *ppszSrc == (_WORD)v14 )
      goto LABEL_7;
    if ( pszDest )
    {
      v9 = -2147024774;
      goto LABEL_7;
    }
    v9 = -2147024809;
  }
LABEL_16:
  if ( (dwFlags & 0x1C00) != 0 && cchDest )
  {
    StringExHandleOtherFlagsW(pszDest, 2 * cchDest, v15, &ppszDestEnd, pcchNewDestLength, dwFlags);
    v12 = ppszDestEnd;
    v13 = pcchNewDestLength[0];
  }
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147024774 )
    goto LABEL_8;
  return (unsigned int)v9;
}
