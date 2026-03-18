/*
 * XREFs of ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x180095764
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x180095454 (--1CInteraction@@MEAA@XZ.c)
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x180095934 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z @ 0x180095DD8 (-SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE<CInputSinkStruct>(CInputSinkStruct **a1)
{
  CInputSinkStruct *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CInputSinkStruct::SetCompositionInputHandle(*a1, 0LL);
    operator delete(v1);
    *a1 = 0LL;
  }
}
