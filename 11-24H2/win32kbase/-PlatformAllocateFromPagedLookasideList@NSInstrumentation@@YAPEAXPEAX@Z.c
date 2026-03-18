/*
 * XREFs of ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14003E6A8
 * Callers:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1400271F0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x14003E570 (-ScanLookAsideList_Allocate@@YAPEAXXZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x14003F7D0 (Win32AllocateFromPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x14003FBE0 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14005264C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NSInstrumentation::PlatformAllocateFromPagedLookasideList(
        struct _PAGED_LOOKASIDE_LIST *this,
        void *a2)
{
  return ExAllocateFromPagedLookasideList(this);
}
