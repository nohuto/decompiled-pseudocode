/*
 * XREFs of ??1CSystemBackdropVisual@@UEAA@XZ @ 0x180066E6C
 * Callers:
 *     ??_GCSystemBackdropVisual@@UEAAPEAXI@Z @ 0x180066DD0 (--_GCSystemBackdropVisual@@UEAAPEAXI@Z.c)
 *     ??_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z @ 0x180066E20 (--_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E00 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSystemBackdropVisual::~CSystemBackdropVisual(CSystemBackdropVisual *this)
{
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 21);
  CSpriteVisual::~CSpriteVisual(this);
}
