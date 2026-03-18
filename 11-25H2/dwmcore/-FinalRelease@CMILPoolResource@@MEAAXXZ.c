/*
 * XREFs of ?FinalRelease@CMILPoolResource@@MEAAXXZ @ 0x18020D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1800ACB00 (-UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 */

void __fastcall CMILPoolResource::FinalRelease(struct _SLIST_ENTRY *this)
{
  union _SLIST_HEADER *v2; // rcx
  void (__fastcall *v3)(union _SLIST_HEADER *, struct _SLIST_ENTRY *); // rax

  v2 = (union _SLIST_HEADER *)*((_QWORD *)&this[2].Next + 1);
  if ( v2 )
  {
    v3 = *(void (__fastcall **)(union _SLIST_HEADER *, struct _SLIST_ENTRY *))v2->Alignment;
    if ( v3 == CD3DResourceManager::UnusedNotification )
      CD3DResourceManager::UnusedNotification(v2, this);
    else
      v3(v2, this);
  }
}
