/*
 * XREFs of HampIpcChannelObjectComparePayloadForTree @ 0x18000A520
 * Callers:
 *     HamCloseActivity @ 0x180009F80 (HamCloseActivity.c)
 *     HamIpcChannelObjectMakeZombie @ 0x18000A1C0 (HamIpcChannelObjectMakeZombie.c)
 *     HampIpcChannelWnfCallback @ 0x18000A350 (HampIpcChannelWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampIpcChannelObjectComparePayloadForTree(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 40) + 72LL))();
}
