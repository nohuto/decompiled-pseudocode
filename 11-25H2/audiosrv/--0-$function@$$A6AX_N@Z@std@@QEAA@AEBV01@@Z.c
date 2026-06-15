/*
 * XREFs of ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x1800B708C
 * Callers:
 *     _lambda_c5ba6885c59c7d44add3d2e24646e672_::operator() @ 0x1800B81D4 (_lambda_c5ba6885c59c7d44add3d2e24646e672_--operator().c)
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800BCBC0 (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 *     std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Copy @ 0x1800C0F60 (std--_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___--_Co.c)
 *     ??$construct@V?$function@$$A6AX_N@Z@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@SAXAEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@1@QEAV?$function@$$A6AX_N@Z@1@AEBV31@@Z @ 0x1800D32D8 (--$construct@V-$function@$$A6AX_N@Z@std@@AEBV12@@-$_Default_allocator_traits@V-$allocator@V-$fun.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800D371C (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (bool)>::function<void (bool)>(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
