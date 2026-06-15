/*
 * XREFs of _lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_ @ 0x180048C84
 * Callers:
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180016E30 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180048B30 (-ForEachStream@CProcessSubmixProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     _lambda_c5ba6885c59c7d44add3d2e24646e672_::operator() @ 0x1800B7560 (_lambda_c5ba6885c59c7d44add3d2e24646e672_--operator().c)
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800BC4DC (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 *     std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Delete_this @ 0x1800BFDA0 (std--_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___--_De.c)
 *     __lambda_c5ba6885c59c7d44add3d2e24646e672_::operator()_::_1_::dtor$0 @ 0x18016D4F6 (__lambda_c5ba6885c59c7d44add3d2e24646e672_--operator()_--_1_--dtor$0.c)
 *     _CAudioResourceManager::DisconnectOffloadStreams_::_1_::dtor$4 @ 0x18016DA0D (_CAudioResourceManager--DisconnectOffloadStreams_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
