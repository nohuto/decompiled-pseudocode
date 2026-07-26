/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x14014D3C4
 * Callers:
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400E1218 (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1401985FC (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x140199010 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
