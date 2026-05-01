/*
 * XREFs of ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18016E200
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::operator() @ 0x1802E3D20 (CDelayIAMOperations--CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18004C99C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18008F7AC (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x18008FB60 (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18008FD24 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18016D054 (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft.c)
 *     ??$_Add@$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K@Z @ 0x18016E48C (--$_Add@$$QEAV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIImmersiv.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_PerformDesktopActivationCallouts(
        CApplicationManager *a1,
        struct IObjectArray *a2,
        char a3)
{
  int v6; // esi
  int v7; // ebx
  unsigned int i; // r15d
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, _QWORD, struct ISyncIAMEventHandler **); // rbx
  __int64 v11; // rdx
  char v12; // bl
  int SingleMonitorObjectArray; // eax
  struct IObjectArray *v14; // rcx
  struct ISyncIAMEventHandler *v15; // rcx
  struct ISyncIAMEventHandler *v16; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-20h] BYREF
  struct IObjectArray *v19; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v20; // [rsp+C0h] [rbp+50h] BYREF
  struct ISyncIAMEventHandler *v21; // [rsp+C8h] [rbp+58h] BYREF

  v6 = 0;
  LODWORD(v19) = 0;
  memset(v18, 0, sizeof(v18));
  v7 = a3 & 0x12;
  if ( !a2
    || (v19 = a2,
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19),
        CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_Add<Microsoft::WRL::ComPtr<IImmersiveMonitor> &&>(
          v18,
          &v19),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19),
        v7) )
  {
    v20 = 0;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)a1 + 70) + 32LL))(*((_QWORD *)a1 + 70), &v20) >= 0 )
    {
      for ( i = 0; i < v20; ++i )
      {
        v21 = 0LL;
        v9 = *((_QWORD *)a1 + 70);
        v10 = *(int (__fastcall **)(__int64, _QWORD, struct ISyncIAMEventHandler **))(*(_QWORD *)v9 + 40LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
        if ( v10(v9, i, &v21) < 0
          || (v16 = v21,
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16),
              v6 |= 1u,
              LODWORD(v19) = v6,
              v12 = 1,
              (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                              v18,
                              v11,
                              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v16,
                              &v17) != -2147319765) )
        {
          v12 = 0;
        }
        if ( (v6 & 1) != 0 )
        {
          v6 &= ~1u;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        }
        if ( v12 )
        {
          v19 = (struct IObjectArray *)v21;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
          CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_Add<Microsoft::WRL::ComPtr<IImmersiveMonitor> &&>(
            v18,
            &v19);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      }
    }
  }
  if ( (a3 & 1) != 0 )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &v21) >= 0 )
    {
      v19 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      if ( a2 )
        SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                     a1,
                                     (struct IImmersiveMonitor *)a2,
                                     &v19);
      else
        SingleMonitorObjectArray = CApplicationManager::_GetMonitorObjectArray(a1, v18, &v19, &v20);
      if ( SingleMonitorObjectArray >= 0 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, int, int, int))(*(_QWORD *)v21 + 24LL))(
          v21,
          v19,
          ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
          0LL,
          1,
          (a3 & 8) != 0 ? 4 : 1,
          0xFFFF);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      v14 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v14->lpVtbl->Release)(v14);
      }
    }
    v15 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)v18);
}
