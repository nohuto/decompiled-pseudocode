/*
 * XREFs of SignalStartNowEvent @ 0x18022AAC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 SignalStartNowEvent()
{
  __int64 result; // rax

  if ( g_pComposition )
  {
    if ( *((_BYTE *)g_pComposition + 6496) )
      return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 78) + 72LL))(*((_QWORD *)g_pComposition
                                                                                             + 78));
  }
  return result;
}
