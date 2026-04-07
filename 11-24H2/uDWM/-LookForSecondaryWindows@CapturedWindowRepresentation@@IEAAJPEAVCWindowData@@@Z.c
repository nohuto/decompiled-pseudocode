/*
 * XREFs of ?LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800AA968
 * Callers:
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800A897C (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180043FD0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A87E4 (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?DoesWindowQualifyAsIntermediateWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x1800A8C74 (-DoesWindowQualifyAsIntermediateWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z @ 0x1800A8C8C (-DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@details@wil@@QEAA_NXZ @ 0x1800AB2C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@det.c)
 */

__int64 __fastcall CapturedWindowRepresentation::LookForSecondaryWindows(
        CContainerVisualProxy **this,
        struct CWindowData *a2)
{
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct CWindowData *v5; // rbx
  struct _LIST_ENTRY *i; // r14
  int v7; // eax
  unsigned int v8; // esi
  CapturedWindowRepresentation *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(struct CWindowData **)a2 != a2 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             *((_QWORD *)a2 + 17));
    v5 = *(struct CWindowData **)a2;
    for ( i = WindowListForDesktop; v5 != (struct CWindowData *)i; v5 = *(struct CWindowData **)v5 )
    {
      if ( CapturedWindowRepresentation::DoesWindowQualifyAsSecondaryWindow(
             (CapturedWindowRepresentation *)this,
             a2,
             v5) )
      {
        v7 = CapturedWindowRepresentation::AddSecondaryWindow(this, v5);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF8,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
            (const char *)(unsigned int)v7);
          return v8;
        }
      }
      else if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::GetImpl'::`2'::impl)
             || !CapturedWindowRepresentation::DoesWindowQualifyAsIntermediateWindow(v10, v5) )
      {
        return 0LL;
      }
    }
  }
  return 0LL;
}
