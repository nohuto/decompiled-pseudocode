/*
 * XREFs of ??1?$unique_ptr@VCGenericWorkItem@@U?$default_delete@VCGenericWorkItem@@@std@@@std@@QEAA@XZ @ 0x18001F9F8
 * Callers:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::unique_ptr<CGenericWorkItem>::~unique_ptr<CGenericWorkItem>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
