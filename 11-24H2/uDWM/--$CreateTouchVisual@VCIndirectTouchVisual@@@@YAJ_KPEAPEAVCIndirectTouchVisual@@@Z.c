/*
 * XREFs of ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180097258
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18000B658 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000E778 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CIndirectTouchVisual@@IEAA@_K@Z @ 0x1800C6E24 (--0CIndirectTouchVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C6F40 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CIndirectTouchVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  unsigned int v4; // edi
  CIndirectTouchVisual *v5; // rax
  CIndirectTouchVisual *v6; // rax
  CBaseObject *v7; // rbx
  unsigned int v8; // eax

  if ( !a2 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u, 0LL);
    return v4;
  }
  v5 = (CIndirectTouchVisual *)DefaultHeap::AllocClear(0x180uLL);
  if ( v5 )
  {
    v6 = CIndirectTouchVisual::CIndirectTouchVisual(v5, a1);
    v7 = v6;
    if ( v6 )
    {
      v4 = CIndirectTouchVisual::Initialize(v6);
      if ( (v4 & 0x80000000) == 0 )
      {
        *a2 = v7;
        return v4;
      }
      v8 = 63;
      goto LABEL_10;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v4 = -2147024882;
  v8 = 61;
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v8, 0LL);
  if ( v7 )
    CBaseObject::Release(v7);
  return v4;
}
