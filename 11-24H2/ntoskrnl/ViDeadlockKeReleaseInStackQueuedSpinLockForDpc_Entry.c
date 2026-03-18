/*
 * XREFs of ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry @ 0x140B99780
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140BA75AC (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0xFFFFFFF8);
}
