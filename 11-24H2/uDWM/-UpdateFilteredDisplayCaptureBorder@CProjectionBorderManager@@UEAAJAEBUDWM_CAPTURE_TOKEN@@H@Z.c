/*
 * XREFs of ?UpdateFilteredDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800CD840
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x18008AE50 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008C24C (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x180097868 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CBADC (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjection.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateFilteredDisplayCaptureBorder(
        CProjectionBorderManager *this,
        const struct DWM_CAPTURE_TOKEN *a2,
        int a3)
{
  unsigned __int8 *Element; // rax
  __int64 v5; // rcx
  HMONITOR v6; // rdx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = (unsigned __int8 *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::FindElement();
  if ( Element )
  {
    v5 = Element[56];
    if ( (_DWORD)v5 != (a3 != 0) )
    {
      Element[56] = a3 != 0;
      if ( a3 )
      {
        v6 = (HMONITOR)*((_QWORD *)Element + 2);
        if ( v6 )
          CProjectionBorderManager::_AddProjectionBorderForDisplay(
            (CProjectionBorderManager *)v5,
            v6,
            (struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)Element);
        else
          CProjectionBorderManager::_AddProjectionBorderForAllDisplays(
            (CProjectionBorderManager *)v5,
            (struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)Element);
      }
      else
      {
        CProjectionBorderManager::_RemoveVisuals(v5, (__int64)(Element + 24));
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
    return 0LL;
  }
  else
  {
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
    return 2147549183LL;
  }
}
