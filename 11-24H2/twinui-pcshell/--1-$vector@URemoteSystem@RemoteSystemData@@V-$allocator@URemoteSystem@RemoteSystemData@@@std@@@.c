/*
 * XREFs of ??1?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@QEAA@XZ @ 0x18064A0F4
 * Callers:
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnLocal_::_1_::dtor$6 @ 0x1807021DB (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_1807021DB.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@RemoteSystemData@@QEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806449AC (--$_Destroy_range@V-$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@R.c)
 */

void __fastcall std::vector<RemoteSystemData::RemoteSystem>::~vector<RemoteSystemData::RemoteSystem>(__int64 a1)
{
  volatile signed __int32 **v2; // rcx

  v2 = *(volatile signed __int32 ***)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(v2, *(volatile signed __int32 ***)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
