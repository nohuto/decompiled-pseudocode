/*
 * XREFs of ?Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z @ 0x1400664D8
 * Callers:
 *     ?DestroyStream@CStreamInstance@@UEAAJXZ @ 0x1400294E0 (-DestroyStream@CStreamInstance@@UEAAJXZ.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A48C (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x14004B2A8 (-GetNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?RemoveNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x1400665F8 (-RemoveNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CAudioHistoryBufferManager::Remove(struct _RTL_CRITICAL_SECTION *this, __int64 a2)
{
  __int64 Node; // rax
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  EnterCriticalSection(this);
  v8 = 0;
  v7 = 0;
  v9 = 0LL;
  v6 = this;
  Node = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
           (__int64)&this[1],
           a2,
           &v8,
           &v7,
           &v9);
  if ( Node )
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveNode(
      &this[1],
      Node,
      v9);
  CSAutoLock<1>::~CSAutoLock<1>(&v6);
  return 0LL;
}
