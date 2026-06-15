/*
 * XREFs of _std::vector_std::function_void___cdecl(void)__std::allocator_std::function_void___cdecl(void)_____::_Emplace_reallocate_std::function_void___cdecl(void)__const_&__::_1_::catch$0 @ 0x18016E587
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV?$function@$$A6AXXZ@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x1800DA298 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV-$function@$$A6AXXZ@.c)
 *     ?deallocate@?$allocator@V?$function@$$A6AXXZ@std@@@std@@QEAAXQEAV?$function@$$A6AXXZ@2@_K@Z @ 0x1800E24DC (-deallocate@-$allocator@V-$function@$$A6AXXZ@std@@@std@@QEAAXQEAV-$function@$$A6AXXZ@2@_K@Z.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_void___std::allocator_std::function_void___cdecl_void______::_Emplace_reallocate_std::function_void___cdecl_void___const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<std::function<void (void)>>>(*(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 136));
  std::allocator<std::function<void (void)>>::deallocate(v3, *(char **)(a2 + 32), *(_QWORD *)(a2 + 120));
  throw;
}
