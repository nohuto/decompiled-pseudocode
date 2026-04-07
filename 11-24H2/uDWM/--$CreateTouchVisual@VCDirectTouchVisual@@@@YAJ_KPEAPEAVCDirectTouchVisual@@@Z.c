/*
 * XREFs of ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800125FC
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18000B658 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000E778 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800122A0 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180044D30 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800B7214 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x18000C390 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ??0CDirectTouchVisual@@IEAA@_K@Z @ 0x180011D60 (--0CDirectTouchVisual@@IEAA@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CDirectTouchVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  CDirectTouchVisual *v4; // rax
  struct tagSIZE *v5; // rax
  CBaseObject *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // eax

  if ( !a2 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x39u, 0LL);
    return v7;
  }
  v4 = (CDirectTouchVisual *)DefaultHeap::AllocClear(0x180uLL);
  if ( v4 )
  {
    v5 = (struct tagSIZE *)CDirectTouchVisual::CDirectTouchVisual(v4, a1);
    v6 = (CBaseObject *)v5;
    if ( v5 )
    {
      v7 = CDirectTouchVisual::Initialize(v5);
      if ( (v7 & 0x80000000) == 0 )
      {
        *a2 = v6;
        return v7;
      }
      v8 = 63;
      goto LABEL_5;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = -2147024882;
  v8 = 61;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v8, 0LL);
  if ( v6 )
    CBaseObject::Release(v6);
  return v7;
}
