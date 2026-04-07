/*
 * XREFs of ?ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x18006562C
 * Callers:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180065540 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x180042830 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180043FD0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?DoWindowsIntersect@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A8C40 (-DoWindowsIntersect@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z.c)
 *     ?DoesWindowQualifyAsIntermediateWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x1800A8C74 (-DoesWindowQualifyAsIntermediateWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A8C8C (-DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@details@wil@@QEAA_NXZ @ 0x1800AB2C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@det.c)
 */

char __fastcall CapturedWindowRepresentation::ShouldInclude(CapturedWindowRepresentation *this, struct CWindowData *a2)
{
  char v4; // bl
  __int64 v5; // rsi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct CWindowData *v7; // rdx
  CapturedWindowRepresentation *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  struct _LIST_ENTRY *v11; // rax
  CapturedWindowRepresentation *v12; // rcx
  __int64 i; // rdx

  v4 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::GetImpl'::`2'::impl) )
  {
    if ( CapturedWindowRepresentation::DoesWindowQualifyAsSecondaryWindow(this, *((struct CWindowData **)this + 11), a2) )
    {
      v5 = *((_QWORD *)this + 2);
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               *((_QWORD *)a2 + 17));
      v7 = (struct CWindowData *)*((_QWORD *)a2 + 1);
      v8 = (CapturedWindowRepresentation *)WindowListForDesktop;
      if ( v7 != (struct CWindowData *)WindowListForDesktop )
      {
        while ( *((_QWORD *)v7 + 5) != v5 )
        {
          if ( CapturedWindowRepresentation::DoesWindowQualifyAsIntermediateWindow(v8, v7) )
          {
            v7 = *(struct CWindowData **)(v9 + 8);
            if ( v7 != v8 )
              continue;
          }
          return v4;
        }
        return 1;
      }
    }
  }
  else if ( *(struct CWindowData **)a2 != a2
         && CWindowData::IsWindowVisibleAndUncloaked(a2)
         && *((_QWORD *)a2 + 55)
         && (*((int *)a2 + 29) < 0 || *((char *)a2 + 120) < 0) )
  {
    v10 = *((_QWORD *)this + 2);
    v11 = CWindowList::GetWindowListForDesktop(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
            *((_QWORD *)a2 + 17));
    for ( i = *((_QWORD *)a2 + 1); (struct _LIST_ENTRY *)i != v11; i = *(_QWORD *)(i + 8) )
    {
      if ( *(int *)(i + 116) >= 0 && *(char *)(i + 120) >= 0 )
      {
        if ( *(_QWORD *)(i + 40) == v10 )
          return CapturedWindowRepresentation::DoWindowsIntersect(v12, (struct CWindowData *)i, a2);
        return v4;
      }
    }
  }
  return v4;
}
