/*
 * XREFs of KEOEMProcs @ 0x1400FACF0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FB48C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

char __fastcall KEOEMProcs(struct tagKE *a1)
{
  __int64 (__fastcall **i)(struct tagKE *); // rbx

  for ( i = aKEProcOEM; ; ++i )
  {
    if ( !*i )
      return 1;
    if ( !(unsigned int)(*i)(a1) )
      break;
  }
  InputTraceLogging::Keyboard::DropInput(11LL);
  return 0;
}
