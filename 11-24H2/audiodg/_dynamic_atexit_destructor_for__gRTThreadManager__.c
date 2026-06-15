/*
 * XREFs of _dynamic_atexit_destructor_for__gRTThreadManager__ @ 0x140097260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__gRTThreadManager__()
{
  __int64 result; // rax

  if ( gRTThreadManager )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)gRTThreadManager + 16LL))(gRTThreadManager);
  return result;
}
