/*
 * XREFs of SnapEnergyCountersDispatch @ 0x14000CD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall SnapEnergyCountersDispatch(unsigned int a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // r10

  result = (__int64 (*)(void))WPP_MAIN_CB.Queue.ListEntry.Blink;
  v2 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
  if ( v2 )
  {
    result = (__int64 (*)(void))qword_140015DB8[32 * (unsigned __int64)*(unsigned __int8 *)(v2 + 376)];
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
