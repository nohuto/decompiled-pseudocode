/*
 * XREFs of ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1800164A0
 * Callers:
 *     ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18001D5E4 (--$_Construct_in_place@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV-$function@$$A6AXXZ@0@0@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18002E348 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180030E34 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (void)>::function<void (void)>(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
