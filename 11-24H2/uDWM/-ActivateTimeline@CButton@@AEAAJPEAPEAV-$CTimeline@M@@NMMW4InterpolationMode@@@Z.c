/*
 * XREFs of ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180079720
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001E1D0 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180015730 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x180015AEC (-Restart@CTimelineBase@@QEAAXN@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CButton::ActivateTimeline(struct CVisual *a1, CTimelineBase **a2, double a3, float a4, int a5)
{
  unsigned int v5; // ebx
  CBaseObject *v8; // rax
  CTimelineBase *v9; // rax

  v5 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(a1, &UdwmAnimation_Start, 7LL, 0LL);
  if ( *a2 )
  {
    CTimelineBase::Restart(*a2, a3);
    return v5;
  }
  v8 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( !v8 )
  {
    *a2 = 0LL;
    goto LABEL_10;
  }
  v9 = (CTimelineBase *)CTimeline<float>::CTimeline<float>(v8, a3, a4, *(float *)&a5, 0);
  *a2 = v9;
  if ( !v9 )
  {
LABEL_10:
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1D2u, 0LL);
    return v5;
  }
  CDesktopManager::RegisterForGlobalTimeChangeNotification(a1);
  return v5;
}
