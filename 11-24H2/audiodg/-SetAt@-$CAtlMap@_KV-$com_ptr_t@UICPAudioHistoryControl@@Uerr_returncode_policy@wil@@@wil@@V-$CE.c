/*
 * XREFs of ?SetAt@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAPEAU__POSITION@@_KAEBV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x14006664C
 * Callers:
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_KKPEAUICrossProcessMemory@@@Z @ 0x140065EE4 (-Add@CAudioHistoryBufferManager@@QEAAJ_KKPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x14004B2A8 (-GetNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ??4?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x140065E2C (--4-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV0.c)
 *     ?CreateNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x140066124 (-CreateNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::SetAt(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 Node; // rax
  __int64 v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0;
  LODWORD(v11) = 0;
  Node = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
           a1,
           a2,
           &v9,
           &v11,
           v10);
  v7 = Node;
  if ( Node )
  {
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::operator=((__int64 *)(Node + 8), a3);
  }
  else
  {
    v7 = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::CreateNode(
           a1,
           a2,
           v9,
           v11);
    v11 = v7;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::operator=((__int64 *)(v7 + 8), a3);
  }
  return v7;
}
