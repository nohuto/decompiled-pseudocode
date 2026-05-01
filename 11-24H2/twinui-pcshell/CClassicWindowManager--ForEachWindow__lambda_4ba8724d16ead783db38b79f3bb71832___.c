/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___ @ 0x180041E8C
 * Callers:
 *     ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x180041E40 (-RefreshCollection@CClassicWindowManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x180041974 (-RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180042938 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180120A74 (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140C80 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180140CD0 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x18018E2AC (-_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1801AC504 (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___ @ 0x1802878DC (CIAMGlobals--QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___(
        __int64 a1,
        CClassicWindowManager *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbp
  unsigned int i; // r14d
  struct IClassicWindow *v7; // rbx
  HWND v8; // rax
  struct IClassicWindow **v9; // rax
  struct IClassicWindow *v10; // rdi
  __int64 v11; // rcx
  __int16 v12; // r15
  __int64 v13; // rcx
  HWND v15; // rax
  HWND v16; // rdx
  CApplicationManagerUtility *v17; // rax
  HWND v18; // rdx
  HWND v19; // rax
  HWND Window; // rdi
  HWND v21; // rax
  HWND v22; // rax
  HWND v23; // r12
  char v24; // r13
  HWND v25; // r14
  HWND v26; // rdx
  bool IsForcedAppWindow; // cl
  char v28; // dl
  struct IClassicWindow *v29; // [rsp+20h] [rbp-48h] BYREF
  int v30; // [rsp+28h] [rbp-40h]
  unsigned __int64 v32; // [rsp+80h] [rbp+18h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 200);
  v32 = v4;
  if ( v4 )
  {
    v5 = 0LL;
    for ( i = 64; ; i = 64 )
    {
      v7 = *(struct IClassicWindow **)(*(_QWORD *)(v3 + 192) + 8 * v5);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(*(_QWORD *)(v3 + 192) + 8 * v5));
      if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 136LL))(v7) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 160LL))(v7) )
        {
          v8 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
          if ( IsWindowVisible(v8) )
          {
            v15 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
            if ( CApplicationManagerUtility::IsTrayWindowStyleCheck(v15, v16) )
            {
              v17 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
              if ( !CApplicationManagerUtility::IsForcedAppWindow(v17, v18) )
              {
                v19 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
                Window = GetWindow(v19, 4u);
                if ( Window )
                {
                  v21 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
                  if ( IsWindowEnabled(v21) )
                  {
                    v22 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
                    if ( IsWindowVisible(v22) )
                    {
                      if ( !IsWindowVisible(Window) || !IsWindowEnabled(Window) )
                      {
                        v23 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
                        v24 = 1;
                        while ( Window )
                        {
                          v25 = GetWindow(Window, 4u);
                          if ( IsWindowVisible(Window)
                            && CApplicationManagerUtility::IsTrayWindowStyleCheck(Window, v26)
                            && (!v25
                             || CApplicationManagerUtility::IsForcedAppWindow((CApplicationManagerUtility *)Window, v26)) )
                          {
                            goto LABEL_44;
                          }
                          IsForcedAppWindow = CApplicationManagerUtility::IsForcedAppWindow(
                                                (CApplicationManagerUtility *)Window,
                                                v26);
                          v28 = 0;
                          if ( !IsForcedAppWindow )
                            v28 = v24;
                          v24 = v28;
                          if ( v28 )
                          {
                            if ( (GetWindowLongPtrW(Window, -20) & 0x80u) != 0LL
                              && ((GetWindowLongPtrW(v23, -20) & 0x10000) == 0 || v25) )
                            {
LABEL_44:
                              i = 64;
                              goto LABEL_45;
                            }
                          }
                          v23 = Window;
                          Window = v25;
                        }
                        i = 32;
LABEL_45:
                        v4 = v32;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v9 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 96LL))(v7);
      v10 = *v9;
      if ( *v9 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 8LL))(*v9);
      v12 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)v7 + 112LL))(v7, i);
      if ( (v12 & 0x80) != 0 )
      {
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 8LL))(v7);
        v29 = v7;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
        v30 = 0;
        CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___(v13, &v29);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
      }
      else if ( (v12 & 0x100) != 0 )
      {
        CClassicWindowManager::RemoveApplicationView(v11, v7, 0LL);
      }
      if ( (v12 & 0x11) != 0 )
        CClassicWindowManager::RecomputeOwner(a2, v7);
      if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 120LL))(v7)
        && (v12 & 0xC) != 0
        && (v12 & 0x80) == 0 )
      {
        RaiseApplicationViewChangeNotification(v7, 16LL);
      }
      if ( (v12 & 0x800) != 0 )
        break;
      if ( (v12 & 0x1000) != 0 )
      {
        if ( (v12 & 0x100) == 0 )
          RaiseApplicationViewChangeNotification(v7, 11LL);
        CClassicWindowManager::_HandleOwnerBecameDestroyed(a2, v7);
        goto LABEL_23;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 128LL))(v7)
        && *(struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 96LL))(v7) != v10 )
      {
        goto LABEL_19;
      }
LABEL_23:
      if ( v10 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 16LL))(v10);
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
      ++v5;
      v3 = a1;
      if ( v5 >= v4 )
        return 1;
    }
    if ( (v12 & 0x80) == 0 )
      RaiseApplicationViewChangeNotification(v7, 10LL);
LABEL_19:
    CClassicWindowManager::RecomputeOwnerForDirectOwnees(a2, v10, v7);
    goto LABEL_23;
  }
  return 1;
}
