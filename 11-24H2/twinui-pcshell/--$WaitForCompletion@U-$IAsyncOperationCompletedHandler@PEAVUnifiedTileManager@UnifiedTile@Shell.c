/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803EE560
 * Callers:
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x1803EF0D0 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803F2AF8 (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x180013530 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VFTMEventDelegate@?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@V1?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJ012@Z@$$V@Details@WRL@Microsoft@@YAJPEAPEAVFTMEventDelegate@?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@@Z @ 0x1803EE214 (--$MakeAndInitialize@VFTMEventDelegate@-1---$WaitForCompletion@U-$IAsyncOperationCo_ea_1803EE214.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>>(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        int a2,
        char *a3)
{
  int v4; // ebx
  int v5; // eax
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  APTTYPE v8; // [rsp+20h] [rbp-20h]
  APTTYPEQUALIFIER v9; // [rsp+28h] [rbp-18h]
  void *v10[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  int v12; // [rsp+68h] [rbp+28h] BYREF
  void **v13; // [rsp+70h] [rbp+30h] BYREF
  int (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp+38h] BYREF

  v13 = (void **)a3;
  v12 = a2;
  v14 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a1;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[1])(a1);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v13);
  v4 = ___MakeAndInitialize_VFTMEventDelegate__1____WaitForCompletion_U__IAsyncOperationCompletedHandler_PEAVUnifiedTileManager_UnifiedTile_Shell_WindowsInternal___Foundation_Windows__U__IAsyncOperation_PEAVUnifiedTileManager_UnifiedTile_Shell_WindowsInternal___23___YAJPEAU__IAsyncOperation_PEAVUnifiedTileManager_UnifiedTile_Shell_WindowsInternal___Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z_V1_1____WaitForCompletion_U__IAsyncOperationCompletedHandler_PEAVUnifiedTileManager_UnifiedTile_Shell_WindowsInternal___Foundation_Windows__U__IAsyncOperation_PEAVUnifiedTileManager_UnifiedTile_Shell_WindowsInternal___23___YAJ012_Z___V_Details_WRL_Microsoft__YAJPEAPEAVFTMEventDelegate__1____WaitForCompletion_U__IAsyncOperationCompletedHandler_PEAVUnifiedTileManager_UnifiedTile_Shell_WindowsInternal___Foundation_Windows__U__IAsyncOperation_PEAVUnifiedTileManager_UnifiedTile_Shell_WindowsInternal___23___YAJPEAU__IAsyncOperation_PEAVUnifiedTileManager_UnifiedTile_Shell_WindowsInternal___Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z__Z((char **)&v13);
  v12 = v4;
  if ( v4 >= 0 )
  {
    v4 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), void **))(*a1)[6])(a1, v13);
    v12 = v4;
    if ( v4 >= 0 )
    {
      v10[0] = v13[7];
      v10[1] = 0LL;
      if ( SHProcessMessagesUntilEventsEx((HWND)v10[0], v10, 1u, 0xFFFFFFFF, v8, v9) == -1 )
      {
        v5 = -2147467259;
        v12 = -2147467259;
      }
      else
      {
        v5 = v12;
      }
      v11 = 0LL;
      if ( v5 >= 0 && *((_DWORD *)v13 + 12) != 1 )
      {
        v6 = **a1;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
        if ( v6(a1, &GUID_00000036_0000_0000_c000_000000000046, &v11) >= 0 )
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 64LL))(v11, &v12);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
      v4 = v12;
    }
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v4;
}
