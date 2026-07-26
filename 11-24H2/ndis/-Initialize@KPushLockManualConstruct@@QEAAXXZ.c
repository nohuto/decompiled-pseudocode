/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x140142708
 * Callers:
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400DA01C (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x14018D5C4 (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x14018DFD8 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
