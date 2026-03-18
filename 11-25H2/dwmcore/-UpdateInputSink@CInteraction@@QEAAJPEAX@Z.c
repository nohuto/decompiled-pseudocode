/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18013A8B4
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18013A80C (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x18013A6E8 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x18013ACDC (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x18013C2D8 (--0CInputSinkStruct@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  unsigned int v2; // ebx
  CInputSinkStruct **v3; // rdi
  CInputSinkStruct *v6; // rax
  CInputSinkStruct *v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CInputSinkStruct **)((char *)this + 112);
  if ( a2 )
  {
    v6 = *v3;
    if ( *v3 )
      goto LABEL_7;
    v7 = (CInputSinkStruct *)DefaultHeap::AllocClear(0x70uLL);
    if ( !v7 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v6 = CInputSinkStruct::CInputSinkStruct(v7);
    *v3 = v6;
    if ( v6 )
    {
LABEL_7:
      v8 = CInputSinkStruct::ReplaceInputHandle(v6, a2);
      v9 = v8;
      if ( v8 >= 0 )
        return (unsigned int)v8;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x2FFu, 0LL);
      v2 = v9;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2FBu, 0LL);
      NtCloseCompositionInputSink(a2);
      v2 = -2147024882;
    }
  }
  SAFE_DELETE<CInputSinkStruct>(v3);
  return v2;
}
