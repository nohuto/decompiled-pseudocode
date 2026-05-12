/*
 * XREFs of PortpAsyncCompletion @ 0x140032280
 * Callers:
 *     <none>
 * Callees:
 *     PortpDisableCancel @ 0x1400322B4 (PortpDisableCancel.c)
 *     PortpCompleteRequestIrp @ 0x140032324 (PortpCompleteRequestIrp.c)
 */

__int64 __fastcall PortpAsyncCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned __int8)PortpDisableCancel(*(_QWORD *)(a3 + 16)) )
    PortpCompleteRequestIrp(*(_QWORD *)(a3 + 16), a3);
  return 3221225494LL;
}
