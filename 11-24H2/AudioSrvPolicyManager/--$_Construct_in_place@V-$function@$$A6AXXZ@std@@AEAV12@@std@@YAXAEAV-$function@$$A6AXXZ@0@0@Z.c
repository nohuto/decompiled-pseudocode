/*
 * XREFs of ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18001D5E4
 * Callers:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x18001D560 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>(
        __int64 a1,
        __int64 a2)
{
  return std::function<void (void)>::function<void (void)>(a1, a2);
}
