/*
 * XREFs of ?InitHashTable@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAA_NI_N@Z @ 0x180032954
 * Callers:
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXI@Z @ 0x180033A2C (-Rehash@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@.c)
 *     ?RemoveAll@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXXZ @ 0x180033BB8 (-RemoveAll@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_poli.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800343D4 (-SetAt@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@w.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004E70 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180010AC0 (--3@YAXPEAX@Z.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAXXZ @ 0x18001A184 (-UpdateRehashThresholds@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_re.c)
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 */

char __fastcall ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::InitHashTable(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  unsigned __int64 v4; // rdi
  void *v6; // rcx
  SIZE_T v7; // rax

  v4 = a2;
  v6 = *(void **)a1;
  if ( v6 )
  {
    operator delete(v6);
    *(_QWORD *)a1 = 0LL;
  }
  if ( a3 )
  {
    v7 = 8 * v4;
    if ( !is_mul_ok(v4, 8uLL) )
      v7 = -1LL;
    *(_QWORD *)a1 = operator new(v7);
    if ( !*(_QWORD *)a1 )
      return 0;
    memset_0(*(void **)a1, 0, 8 * v4);
  }
  *(_DWORD *)(a1 + 16) = v4;
  ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::UpdateRehashThresholds(a1);
  return 1;
}
