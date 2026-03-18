/*
 * XREFs of SignalStartNowEvent @ 0x18021F590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 SignalStartNowEvent()
{
  __int64 result; // rax

  if ( g_pComposition )
  {
    if ( *((_BYTE *)g_pComposition + 6473) )
      return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 78) + 72LL))(*((_QWORD *)g_pComposition
                                                                                             + 78));
  }
  return result;
}
