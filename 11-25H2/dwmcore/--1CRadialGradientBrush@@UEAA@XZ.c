/*
 * XREFs of ??1CRadialGradientBrush@@UEAA@XZ @ 0x18021BADC
 * Callers:
 *     ??_GCRadialGradientBrush@@UEAAPEAXI@Z @ 0x18021BA90 (--_GCRadialGradientBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18021BB04 (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CRadialGradientBrush::~CRadialGradientBrush(struct CResource **this)
{
  wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>(this + 30);
  CGradientBrush::~CGradientBrush(this);
}
