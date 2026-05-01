/*
 * XREFs of ??$_Destroy_range@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@RemoteSystemData@@QEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806449AC
 * Callers:
 *     ??$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAPEAURemoteSystem@RemoteSystemData@@QEAU23@AEAU23@@Z @ 0x180644CF8 (--$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@-$vector@URemoteSystem@RemoteSystemDa.c)
 *     ??$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAPEAURemoteSystem@RemoteSystemData@@QEAU12@0PEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806459CC (--$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@RemoteSyste.c)
 *     ??1?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@QEAA@XZ @ 0x18064A0F4 (--1-$vector@URemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@RemoteSystemData@@@std@@@.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x1806506A4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     _std::vector_RemoteSystemData::RemoteSystem_std::allocator_RemoteSystemData::RemoteSystem___::_Emplace_reallocate_RemoteSystemData::RemoteSystem_&__::_1_::catch$0 @ 0x180701D6C (_std--vector_RemoteSystemData--RemoteSystem_std--allocator_RemoteSystemData--RemoteSystem___--_E.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      winrt::handle_type<winrt::impl::hstring_traits>::close(v3);
      v3 += 4;
    }
    while ( v3 != a2 );
  }
}
