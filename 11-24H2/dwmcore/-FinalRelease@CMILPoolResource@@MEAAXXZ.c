/*
 * XREFs of ?FinalRelease@CMILPoolResource@@MEAAXXZ @ 0x180201390
 * Callers:
 *     <none>
 * Callees:
 *     ?UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x18007ACE0 (-UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
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
