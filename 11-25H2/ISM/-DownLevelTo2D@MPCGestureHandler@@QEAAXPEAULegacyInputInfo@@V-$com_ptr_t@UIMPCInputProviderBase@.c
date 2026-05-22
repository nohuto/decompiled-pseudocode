/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BFB70
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BF704 (-DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BF784 (-DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BF814 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BF8F0 (-DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BF9FC (-DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BFB20 (-DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BFD68 (-DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800C4988 (-FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1801108DC (-SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::DownLevelTo2D(MPCGestureHandler *this, struct LegacyInputInfo *a2, __int64 *a3)
{
  MPCSpatialGestureRecognizerHandler *v6; // rcx
  unsigned int v7; // eax
  struct tagPOINT v9; // [rsp+30h] [rbp+8h]

  if ( (*((_DWORD *)a2 + 224) == *((_DWORD *)this + 228) || *((_DWORD *)a2 + 214) == 2)
    && ((*((_DWORD *)this + 42) & 0xFFFFFF7F) != 0 || *((_BYTE *)a2 + 648))
    && (!(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 152LL))(*a3)
     || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 160LL))(*a3)
     || *((_BYTE *)a2 + 651))
    && (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) == 1 || *((_DWORD *)this + 228)) )
  {
    *((_DWORD *)this + 221) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 368LL))(*a3);
    v6 = (MPCSpatialGestureRecognizerHandler *)*((_QWORD *)this + 113);
    if ( v6 )
      MPCSpatialGestureRecognizerHandler::FeedRecognizer(v6, a2);
    if ( (*((_DWORD *)this + 42) & 0xFFFFFF7F) == 0 )
      ManipulationInjector::SetInjectionRect((MPCGestureHandler *)((char *)this + 80), (const struct tagRECT *)a2 + 55);
    v9.x = (int)*((float *)a2 + 218);
    v9.y = (int)*((float *)a2 + 219);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 88LL))(*a3);
    switch ( *((_DWORD *)a2 + 214) )
    {
      case 1:
        MPCGestureHandler::DownLevelPressTo2D(this, a2, v7, v9);
        break;
      case 2:
        MPCGestureHandler::DownLevelReleaseTo2D(this, a2, v7, v9);
        break;
      case 3:
        MPCGestureHandler::DownLevelSelectTo2D(this, a2, v7, v9);
        break;
      case 4:
        MPCGestureHandler::DownLevelHoverTo2D(this, a2, v7, v9);
        break;
      case 5:
        MPCGestureHandler::DownLevelScrollTo2D(this, a2, v7, v9);
        break;
      case 6:
        MPCGestureHandler::DownLevelZoomTo2D(this, a2, v7, v9);
        break;
      case 7:
        MPCGestureHandler::DownLevelDragTo2D(this, (const RECT *)a2, v7, v9);
        break;
    }
  }
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a3);
}
