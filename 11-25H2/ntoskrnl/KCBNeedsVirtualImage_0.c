/*
 * XREFs of KCBNeedsVirtualImage_0 @ 0x1404AD6EC
 * Callers:
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x140841680 (CmpIsKcbInsideVirtualizedHive.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 */

bool __fastcall KCBNeedsVirtualImage_0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx

  if ( !CmpVEEnabled || (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 || !(unsigned __int8)CmpIsKcbInsideVirtualizedHive() )
    return 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(CurrentThread) == 0;
}
