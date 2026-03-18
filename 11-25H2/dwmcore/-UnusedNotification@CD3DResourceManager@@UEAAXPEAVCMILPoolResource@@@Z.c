/*
 * XREFs of ?UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1800ACB00
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?FinalRelease@CMILPoolResource@@MEAAXXZ @ 0x18020D4A0 (-FinalRelease@CMILPoolResource@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DResourceManager::UnusedNotification(union _SLIST_HEADER *this, struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *Next; // rax

  Next = a2->Next;
  *((_QWORD *)&a2[2].Next + 1) = 0LL;
  (*((void (__fastcall **)(struct _SLIST_ENTRY *))&Next->Next + 1))(a2);
  InterlockedPushEntrySList(this + 1, a2 + 5);
}
