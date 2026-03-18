/*
 * XREFs of ??$?0E$0?0$0?0$0A@@?$span@$$CBE$0?0@gsl@@QEAA@AEBV?$span@E$0?0@1@@Z @ 0x18021C4A4
 * Callers:
 *     ?Create@CSharedCircularQueueProducer@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@@Z @ 0x18028E900 (-Create@CSharedCircularQueueProducer@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall gsl::span<unsigned char const,-1>::span<unsigned char const,-1>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *a2;
  if ( *a2 == -1 || (v3 = a2[1], *a1 = v2, (a1[1] = v3) == 0LL) && v2 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  return a1;
}
