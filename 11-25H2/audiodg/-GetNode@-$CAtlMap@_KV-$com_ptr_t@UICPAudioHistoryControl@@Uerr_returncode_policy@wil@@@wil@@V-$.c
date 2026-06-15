/*
 * XREFs of ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x14004B748
 * Callers:
 *     ??A?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAAEAV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x140065EF0 (--A-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$CEleme.c)
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_KKPEAUICrossProcessMemory@@@Z @ 0x140065F54 (-Add@CAudioHistoryBufferManager@@QEAAJ_KKPEAUICrossProcessMemory@@@Z.c)
 *     ?Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z @ 0x140066548 (-Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z.c)
 *     ?SetAt@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAPEAU__POSITION@@_KAEBV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1400666BC (-SetAt@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$CE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v7; // r8
  __int64 i; // rdx

  *a4 = a2;
  *a3 = (unsigned int)a2 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v7 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *a3); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 24) == *a4 && *(_QWORD *)i == a2 )
      {
        *a5 = v7;
        return i;
      }
      v7 = i;
    }
  }
  return 0LL;
}
