/*
 * XREFs of ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18000D574
 * Callers:
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18000DF78 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 * Callees:
 *     ??0CPenBarrelKeyVisual@@IEAA@_K@Z @ 0x18000D644 (--0CPenBarrelKeyVisual@@IEAA@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x180086150 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CPenBarrelKeyVisual>(unsigned __int64 a1, CBaseObject **a2)
{
  CPenBarrelKeyVisual *v4; // rax
  CPenBarrelKeyVisual *v5; // rax
  CBaseObject *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // eax

  if ( !a2 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x39u, 0LL);
    return v7;
  }
  v4 = (CPenBarrelKeyVisual *)DefaultHeap::AllocClear(0x130uLL);
  if ( v4 )
  {
    v5 = CPenBarrelKeyVisual::CPenBarrelKeyVisual(v4, a1);
    v6 = v5;
    if ( v5 )
    {
      v7 = CPenBarrelKeyVisual::Initialize(v5);
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
