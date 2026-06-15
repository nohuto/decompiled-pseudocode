/*
 * XREFs of ??1CBluetoothAudioEndpointResourceManagerProvider@@UEAA@XZ @ 0x1800F178C
 * Callers:
 *     ??_GCBluetoothAudioEndpointResourceManagerProvider@@UEAAPEAXI@Z @ 0x1800F1BA0 (--_GCBluetoothAudioEndpointResourceManagerProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180019110 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800F2BE4 (-clear@-$forward_list@V-$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

void __fastcall CBluetoothAudioEndpointResourceManagerProvider::~CBluetoothAudioEndpointResourceManagerProvider(
        CBluetoothAudioEndpointResourceManagerProvider *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
      v2,
      *((__int64 **)this + 7));
    std::_Deallocate<16,0>(
      *((char **)this + 6),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  std::forward_list<wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>>::clear((char *)this + 32);
  *((_DWORD *)this + 5) = -1073741823;
}
