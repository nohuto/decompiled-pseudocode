/*
 * XREFs of ??1CRectangleInstruction@@EEAA@XZ @ 0x1800716DC
 * Callers:
 *     ??_GCRectangleInstruction@@EEAAPEAXI@Z @ 0x180071690 (--_GCRectangleInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

void __fastcall CRectangleInstruction::~CRectangleInstruction(CBaseObject **this)
{
  *this = (CBaseObject *)&CRectangleInstruction::`vftable';
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 3);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 2);
  CRenderDataInstruction::~CRenderDataInstruction((CRenderDataInstruction *)this);
}
