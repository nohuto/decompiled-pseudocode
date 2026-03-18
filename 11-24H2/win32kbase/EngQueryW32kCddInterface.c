/*
 * XREFs of EngQueryW32kCddInterface @ 0x14004DE90
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x14004E1F4 (-GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x140101DE0 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 */

__int64 __fastcall EngQueryW32kCddInterface(void *a1, _QWORD *a2, __int64 a3, _QWORD *a4, _DWORD *a5, _QWORD *a6)
{
  struct tagGRAPHICS_DEVICE *GraphicsDeviceFromDevObjHandle; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rbp
  __int64 v14; // rax

  if ( *(_DWORD *)(a3 + 4) != 4 )
    return 3221225485LL;
  if ( *(_DWORD *)a3 != 160 )
    return 3221225485LL;
  GraphicsDeviceFromDevObjHandle = GetGraphicsDeviceFromDevObjHandle(a1);
  if ( !GraphicsDeviceFromDevObjHandle )
    return 3221225485LL;
  *(_QWORD *)(a3 + 8) = W32kCddGetWin32kCommand;
  *(_QWORD *)(a3 + 16) = W32kCddClipRegionApiExt;
  *(_QWORD *)(a3 + 24) = W32kCddIncPresentUniq;
  *(_QWORD *)(a3 + 32) = W32kCddInitPdev;
  *(_QWORD *)(a3 + 40) = W32kCddIsNullBrushApiExt;
  *(_QWORD *)(a3 + 48) = W32kCddDisableGdiHwAccelerationApiExt;
  *(_QWORD *)(a3 + 56) = W32kCddLineToApiExt;
  *(_QWORD *)(a3 + 64) = W32kCddStrokePathApiExt;
  *(_QWORD *)(a3 + 72) = W32kGenerateMoveDataApiExt;
  *(_QWORD *)(a3 + 80) = W32kAcquireDynamicModeChangeLockShared;
  *(_QWORD *)(a3 + 88) = W32kReleaseDynamicModeChangeLockShared;
  *(_QWORD *)(a3 + 96) = DxgkCddEngIsRemoteConnection;
  *(_QWORD *)(a3 + 104) = W32kCddSetDeviceBitmapAdapterLuid;
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v11 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 29);
  }
  else
  {
    v13 = *(_QWORD *)(W32GetSessionState(v10) + 88);
    if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed()
      && ((*((_DWORD *)GraphicsDeviceFromDevObjHandle + 40) & 0x4000000) != 0 || *(_DWORD *)(v13 + 1052)) )
    {
      v11 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 34);
      if ( !v11 )
        return 3221225485LL;
    }
    else
    {
      v11 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 34);
    }
  }
  *a4 = v11;
  *a5 = *((_DWORD *)GraphicsDeviceFromDevObjHandle + 62);
  *a6 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( !a2 )
    return 0LL;
  v14 = *(_QWORD *)(a3 + 112);
  if ( v14 )
  {
    a2[330] = v14;
    a2[331] = *(_QWORD *)(a3 + 128);
    a2[332] = *(_QWORD *)(a3 + 152);
    a2[333] = *(_QWORD *)(a3 + 136);
    a2[334] = *(_QWORD *)(a3 + 144);
    return 0LL;
  }
  return 3221225485LL;
}
