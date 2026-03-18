/*
 * XREFs of IsUserEnableConsoleModeSupported @ 0x14019E5D8
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x140092B70 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017A4CC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsUserEnableConsoleModeSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2168LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
