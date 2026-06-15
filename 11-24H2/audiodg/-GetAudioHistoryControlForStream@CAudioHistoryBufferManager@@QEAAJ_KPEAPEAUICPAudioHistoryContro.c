/*
 * XREFs of ?GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryControl@@@Z @ 0x1400561BC
 * Callers:
 *     ?PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z @ 0x140041584 (-PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x140065E2C (--4-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV0.c)
 *     ??A?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAAEAV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x140065E80 (--A-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$CEleme.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioHistoryBufferManager::GetAudioHistoryControlForStream(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2,
        struct ICPAudioHistoryControl **a3)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __int64 i; // rcx
  __int64 v8; // rax
  struct ICPAudioHistoryControl *v9; // rax
  struct ICPAudioHistoryControl *v11; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  v12 = lpCriticalSection;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( DebugInfo )
  {
    for ( i = *((_QWORD *)&DebugInfo->Type + (unsigned int)a2 % LODWORD(lpCriticalSection[1].OwningThread));
          i;
          i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 24) == (_DWORD)a2 && *(_QWORD *)i == a2 )
      {
        v8 = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::operator[](
               &lpCriticalSection[1],
               a2);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::operator=(&v11, v8);
        v9 = v11;
        v11 = 0LL;
        *a3 = v9;
        CSAutoLock<1>::~CSAutoLock<1>(&v12);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v11);
        return 0LL;
      }
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 2289827964LL;
}
