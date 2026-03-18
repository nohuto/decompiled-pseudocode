/*
 * XREFs of ?HMDoubleFree@@YAXPEAX@Z @ 0x14014C2E0
 * Callers:
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x14016A8FC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401B5E44 (-CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HMDoubleFree(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0x164u, 0x1BuLL, BugCheckParameter2, 0LL, 0LL);
}
