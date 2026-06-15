/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x140066E50
 * Callers:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x140067008 (--$_Emplace_reallocate@V-$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1400671B0 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wi.c)
 *     ??1CBridgeSourceEndpoint@@UEAA@XZ @ 0x140067328 (--1CBridgeSourceEndpoint@@UEAA@XZ.c)
 *     _std::vector_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IBridgeSourceEndpointConsumer_wil::err_returncode_policy____::_1_::catch$0 @ 0x140095CA5 (_std--vector_wil--com_ptr_t_IBridgeSourceEndpointConsumer_wil--err_returncode_policy__std--alloc.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IBridgeSourceEndpointConsumer,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
