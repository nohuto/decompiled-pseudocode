/*
 * XREFs of ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x18028A904
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18028AA88 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateEdgyExperienceSource(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE *a3)
{
  unsigned int v4; // edx
  unsigned int v7; // edi
  __int64 Resource; // rax
  int updated; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_DWORD *)a3 + 2);
  v7 = 0;
  if ( v4 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v4, 0x59u);
    if ( !Resource )
      ModuleFailFastForHRESULT(0x80004004, retaddr);
    if ( !*((_DWORD *)a3 + 3) || !*((_WORD *)a3 + 8) )
      ModuleFailFastForHRESULT(0x80070057, retaddr);
    *(_OWORD *)((char *)this + 584) = *(_OWORD *)((char *)a3 + 8);
    *(_OWORD *)((char *)this + 600) = *(_OWORD *)((char *)a3 + 24);
    *(_OWORD *)((char *)this + 616) = *(_OWORD *)((char *)a3 + 40);
    *(_OWORD *)((char *)this + 632) = *(_OWORD *)((char *)a3 + 56);
    *(_OWORD *)((char *)this + 648) = *(_OWORD *)((char *)a3 + 72);
    *(_OWORD *)((char *)this + 664) = *(_OWORD *)((char *)a3 + 88);
    *(_OWORD *)((char *)this + 680) = *(_OWORD *)((char *)a3 + 104);
    *(_OWORD *)((char *)this + 696) = *(_OWORD *)((char *)a3 + 120);
    *((_QWORD *)this + 89) = *((_QWORD *)a3 + 17);
    *((_DWORD *)this + 180) = *(_DWORD *)(Resource + 1720);
    updated = CManipulation::_UpdateEdgyExperienceInput(this);
    v7 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x2FEu, 0LL);
  }
  return v7;
}
