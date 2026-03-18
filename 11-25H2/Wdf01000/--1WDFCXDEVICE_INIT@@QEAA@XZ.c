/*
 * XREFs of ??1WDFCXDEVICE_INIT@@QEAA@XZ @ 0x14009540C
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14004C7E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x14004AA98 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall WDFCXDEVICE_INIT::~WDFCXDEVICE_INIT(WDFCXDEVICE_INIT *this)
{
  FxIrpPreprocessInfo *PreprocessInfo; // rcx

  PreprocessInfo = this->PreprocessInfo;
  if ( PreprocessInfo )
    FxIrpPreprocessInfo::`scalar deleting destructor'(PreprocessInfo);
}
