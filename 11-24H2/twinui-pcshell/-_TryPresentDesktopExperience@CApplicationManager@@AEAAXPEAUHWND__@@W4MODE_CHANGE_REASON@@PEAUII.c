/*
 * XREFs of ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18008E9D8
 * Callers:
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18008E2BC (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1801EF6D4 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18008F7AC (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18008FD24 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_TryPresentDesktopExperience(
        CApplicationManager *a1,
        __int64 a2,
        int a3,
        struct IImmersiveMonitor *a4)
{
  struct ISyncIAMEventHandler *v8; // rcx
  struct IObjectArray *v9; // rcx
  struct IObjectArray *v10[2]; // [rsp+40h] [rbp-10h] BYREF
  struct ISyncIAMEventHandler *v11; // [rsp+88h] [rbp+38h] BYREF

  if ( a4 )
  {
    LODWORD(v11) = 0;
    (*(void (__fastcall **)(_QWORD *, struct ISyncIAMEventHandler **))(**((_QWORD **)a1 + 70) + 32LL))(
      *((_QWORD **)a1 + 70),
      &v11);
    if ( (unsigned int)v11 > 1
      && (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 66) + 56LL))(*((_QWORD **)a1 + 66)) == 1
      && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(**((_QWORD **)a1 + 67) + 88LL))(
           *((_QWORD **)a1 + 67),
           a2) )
    {
      v10[0] = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v10);
      if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(a1, a4, v10) >= 0 )
      {
        v11 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
        if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &v11) >= 0 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, int, int, int))(*(_QWORD *)v11 + 24LL))(
            v11,
            v10[0],
            ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
            0LL,
            1,
            a3,
            0xFFFF);
        v8 = v11;
        if ( v11 )
        {
          v11 = 0LL;
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      v9 = v10[0];
      if ( v10[0] )
      {
        v10[0] = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v9->lpVtbl->Release)(v9);
      }
    }
  }
}
