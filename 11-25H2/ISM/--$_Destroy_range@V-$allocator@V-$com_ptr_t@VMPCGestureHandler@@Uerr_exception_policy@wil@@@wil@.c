/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180068568
 * Callers:
 *     ??1?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180068520 (--1-$vector@V-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x180069FE8 (-OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180096A00 (-_Change_array@-$vector@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180098E24 (--$_Uninitialized_move@PEAV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x1800B3F94 (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800BEBB8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BF11C (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??1PenDevice@@UEAA@XZ @ 0x18018904C (--1PenDevice@@UEAA@XZ.c)
 *     _std::vector_wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy__std::allocator_wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy__const_&__::_1_::catch$0 @ 0x1801CBE81 (_std--vector_wil--com_ptr_t_MPCGestureHandler_wil--err_exception_policy__std--allocator_wil--com.c)
 *     _std::vector_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__&__::_1_::catch$0 @ 0x1801CBEED (_std--vector_wil--com_ptr_t_IHeadEventHandler_wil--err_exception_policy__std--allocator_wil--com.c)
 *     _std::vector_wil::com_ptr_t_PenInterface_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenInterface_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenInterface_wil::err_exception_policy__const_&__::_1_::catch$1 @ 0x1801CD9A1 (_std--vector_wil--com_ptr_t_PenInterface_wil--err_exception_policy__std--allocator_wil--com_ptr_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006934C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
