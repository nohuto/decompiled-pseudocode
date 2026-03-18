/*
 * XREFs of PoFxRegisterCrashdumpDevice @ 0x140AAACE0
 * Callers:
 *     <none>
 * Callees:
 *     PopPluginRegisterCrashdumpDevice @ 0x1404CEEB4 (PopPluginRegisterCrashdumpDevice.c)
 */

__int64 __fastcall PoFxRegisterCrashdumpDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 64) )
    return PopPluginRegisterCrashdumpDevice(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 72), a1, a4);
  return 3221225659LL;
}
