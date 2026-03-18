/*
 * XREFs of ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x1802A753C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x1802A7084 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionShift(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT *a3,
        char *a4)
{
  float *v5; // rbx
  unsigned int i; // edi
  int v8; // edx
  float v9; // xmm0_4
  unsigned int v10; // ebx

  v5 = (float *)(a4 + 4);
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
  {
    v8 = *((_DWORD *)v5 - 1);
    if ( v8 == 2 )
    {
      v10 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x384u, 0LL);
      return v10;
    }
    if ( v8 )
      v9 = *((float *)this + 23);
    else
      v9 = *((float *)this + 22);
    if ( v9 >= v5[1] )
      CInteractionTracker::ApplyPositionShift((__int64)this, v8, *v5);
    v5 += 3;
  }
  return 0;
}
