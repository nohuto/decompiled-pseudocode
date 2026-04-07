/*
 * XREFs of ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C72C0
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18000B658 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000E778 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18001066C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800C70E0 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C7610 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800C770C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C777C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StartHover(__int64 a1)
{
  int v2; // r9d
  const struct tagPOINT *v3; // r10
  CBaseObject *v4; // rax
  float *v5; // rdi
  int *v6; // rsi
  int v7; // eax
  unsigned int v8; // r9d
  CBaseObject *v9; // rax

  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *(_DWORD *)(a1 + 308) = v2;
  CIndirectTouchVisual::UpdateLocation((CIndirectTouchVisual *)a1, v3);
  v4 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  v5 = (float *)(a1 + 284);
  v6 = (int *)(a1 + 304);
  if ( v4 )
    v4 = (CBaseObject *)CTimeline<float>::CTimeline<float>(v4, *v5, (float)*v6, 0.0, 0);
  *(_QWORD *)(a1 + 312) = v4;
  if ( !v4 )
  {
    v7 = -2147024882;
    v8 = 126;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8, 0LL);
    CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
    *v6 = 0;
    *(_DWORD *)(a1 + 300) = 1065353216;
    CIndirectTouchVisual::UpdateOpacityAndSource((CIndirectTouchVisual *)a1);
    return 0LL;
  }
  v9 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( v9 )
    v9 = (CBaseObject *)CTimeline<float>::CTimeline<float>(v9, *v5, *(float *)(a1 + 300), 1.0, 0);
  *(_QWORD *)(a1 + 328) = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    v8 = 129;
    goto LABEL_12;
  }
  v7 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  if ( v7 < 0 )
  {
    v8 = 131;
    goto LABEL_12;
  }
  CIndirectTouchVisual::SetETWAnimation(a1, 2);
  return 0LL;
}
