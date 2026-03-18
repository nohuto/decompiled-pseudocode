/*
 * XREFs of ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140028890
 * Callers:
 *     ?ScanLookAsideList_Free@@YAXPEAX@Z @ 0x140026A70 (-ScanLookAsideList_Free@@YAXPEAX@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1400271F0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140027B90 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400280F8 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     Win32FreeToPagedLookasideList @ 0x140028730 (Win32FreeToPagedLookasideList.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1400287F0 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x14003E570 (-ScanLookAsideList_Allocate@@YAPEAXXZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x14003F7D0 (Win32AllocateFromPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x14003FBE0 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14005264C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::PlatformFreeToPagedLookasideList(
        struct _PAGED_LOOKASIDE_LIST *this,
        void *a2,
        void *a3)
{
  ExFreeToPagedLookasideList(this, a2);
}
