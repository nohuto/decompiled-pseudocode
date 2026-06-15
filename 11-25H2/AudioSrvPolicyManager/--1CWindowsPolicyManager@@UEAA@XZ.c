/*
 * XREFs of ??1CWindowsPolicyManager@@UEAA@XZ @ 0x180028574
 * Callers:
 *     ??_GCWindowsPolicyManager@@UEAAPEAXI@Z @ 0x180028860 (--_GCWindowsPolicyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002831C (--1-$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCPlaybackManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002833C (--1-$com_ptr_t@VCPlaybackManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CWindowsPolicyManager::~CWindowsPolicyManager(CWindowsPolicyManager *this)
{
  wil::com_ptr_t<CDuckingManager,wil::err_returncode_policy>::~com_ptr_t<CDuckingManager,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<CPlaybackManager,wil::err_returncode_policy>::~com_ptr_t<CPlaybackManager,wil::err_returncode_policy>((_QWORD *)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
}
