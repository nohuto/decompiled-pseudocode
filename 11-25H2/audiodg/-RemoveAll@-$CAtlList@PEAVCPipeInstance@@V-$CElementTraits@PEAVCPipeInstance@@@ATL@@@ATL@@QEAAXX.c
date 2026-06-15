/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B88C
 * Callers:
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x1400090A0 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC20 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000B214 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ @ 0x14000B828 (-RemoveHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B88C (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14001D00C (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14001D318 (-FreeNode@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPE.c)
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x140035AA0 (--1CAudioProcessor@@QEAA@XZ.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BD04 (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x14003E38C (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 *     ??1CProcessingData@@QEAA@XZ @ 0x140043240 (--1CProcessingData@@QEAA@XZ.c)
 *     ??1?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAA@XZ @ 0x14004B404 (--1-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAA@XZ.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400810F0 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B88C (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14000ED50 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(__int64 a1)
{
  ATL::CAtlPlex *v2; // rcx
  _QWORD *v3; // rcx

  while ( *(_QWORD *)(a1 + 16) )
  {
    v3 = *(_QWORD **)a1;
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = *v3;
    *v3 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v3;
    if ( (*(_QWORD *)(a1 + 16))-- == 1LL )
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(ATL::CAtlPlex **)(a1 + 24);
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
