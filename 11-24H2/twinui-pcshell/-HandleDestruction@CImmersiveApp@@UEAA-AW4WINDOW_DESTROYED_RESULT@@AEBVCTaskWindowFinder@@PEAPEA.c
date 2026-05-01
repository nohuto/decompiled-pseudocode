/*
 * XREFs of ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180303320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180068DEC (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18006903C (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180091CA4 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18009C24C (-_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x18009CCDC (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x1800A0A34 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800DFC90 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1801AAD98 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1801B57C8 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::HandleDestruction(
        __int64 a1,
        const struct CTaskWindowFinder *a2,
        struct ITaskWindow **a3)
{
  unsigned int v6; // esi
  CImmersiveApp::CImmersiveWindowCollection *v7; // r14
  _QWORD *v8; // rbp
  int v9; // ebx
  int v10; // ebx
  bool v11; // r14
  char v12; // bl
  struct IApplicationPresentationLayer *v13; // rdx
  unsigned __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v7 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176);
  v15 = 0LL;
  v8 = (_QWORD *)(a1 + 424);
  v16 = 0LL;
  v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
         (_QWORD *)(a1 + 424),
         (__int64)a2,
         (__int64)a3,
         &v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  if ( v9 < 0 )
  {
    LOBYTE(v15) = 0;
    if ( (int)CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(v7, a2, (bool *)&v15, a3) >= 0 )
    {
      v6 = 2;
      v10 = *(_DWORD *)(a1 + 456) & 2;
      v11 = (*(_DWORD *)(a1 + 456) & 4) != 0
         && !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible(v7);
      CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)(a1 - 112));
      if ( *(_QWORD *)(a1 + 344) )
      {
        if ( v11 )
        {
          GetSystemTimeAsFileTime((LPFILETIME)(a1 + 588));
          if ( v10 )
            *(_QWORD *)(a1 + 572) = *(_QWORD *)(a1 + 588);
          else
            v6 = 1;
          *(_DWORD *)(a1 + 456) &= ~2u;
          v13 = *(struct IApplicationPresentationLayer **)(a1 + 320);
          *(_DWORD *)(a1 + 504) |= 1u;
          CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((LPCWSTR *)(a1 + 504), v13);
        }
        else if ( (_BYTE)v15 && v10 )
        {
          *(_DWORD *)(a1 + 456) &= ~2u;
          v6 = 4;
        }
        else
        {
          v6 = 3;
        }
      }
      else
      {
        v12 = *(_BYTE *)(a1 + 608);
        *(_DWORD *)(a1 + 456) = 0;
        *(_DWORD *)(a1 + 544) = 0;
        CImmersiveApp::_ClearForegroundBoostHintedProcess((void **)(a1 - 112));
        *(_DWORD *)(a1 + 684) = 1;
        *(_OWORD *)(a1 + 548) = 0LL;
        *(_OWORD *)(a1 + 564) = 0LL;
        *(_OWORD *)(a1 + 580) = 0LL;
        GetSystemTimeAsFileTime((LPFILETIME)(a1 + 556));
        CImmersiveApp::_RemoveFromChain((CImmersiveApp *)(a1 - 112));
        v6 = (v12 != 0) + 5;
      }
      if ( !*(_BYTE *)(a1 + 608) && v6 == 5 )
        CImmersiveApp::_ScheduleApplicationNotification((CImmersiveApp *)(a1 - 112), 6, 0LL);
    }
  }
  else
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
      v8,
      v15);
    return 7;
  }
  return v6;
}
