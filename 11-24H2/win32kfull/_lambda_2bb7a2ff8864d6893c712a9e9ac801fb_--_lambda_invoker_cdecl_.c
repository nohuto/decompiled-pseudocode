/*
 * XREFs of _lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_ @ 0x14018B920
 * Callers:
 *     <none>
 * Callees:
 *     ?DoPowerStateAndMonitor@@YAXXZ @ 0x14018B970 (-DoPowerStateAndMonitor@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

REGHANDLE *lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_()
{
  REGHANDLE *v0; // rbx
  REGHANDLE *result; // rax

  v0 = (REGHANDLE *)&off_140398A28;
  do
  {
    if ( (void (*)(void))*v0 == DoPowerStateAndMonitor )
      DoPowerStateAndMonitor();
    else
      ((void (*)(void))*v0)();
    ++v0;
    result = &W32kControlGuid_Context;
  }
  while ( v0 != &W32kControlGuid_Context );
  return result;
}
