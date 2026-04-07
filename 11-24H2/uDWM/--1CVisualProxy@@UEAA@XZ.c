/*
 * XREFs of ??1CVisualProxy@@UEAA@XZ @ 0x1800692AC
 * Callers:
 *     ??_GCVisualProxy@@UEAAPEAXI@Z @ 0x180069260 (--_GCVisualProxy@@UEAAPEAXI@Z.c)
 *     ??_ECRedirectVisualProxy@@UEAAPEAXI@Z @ 0x1800B6170 (--_ECRedirectVisualProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E00 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CVisualProxy::~CVisualProxy(CVisualProxy *this)
{
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 3);
  CResourceProxy::~CResourceProxy(this);
}
