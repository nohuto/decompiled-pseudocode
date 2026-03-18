/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C003FAF4
 * Callers:
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00350B8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C015A180 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     UserIsProcessImmersiveAppContainer @ 0x1C003FAA0 (UserIsProcessImmersiveAppContainer.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2)
{
  struct _EPROCESS *v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct _ENTRY *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  struct _ENTRY *EntryFromObject; // rax

  v2 = a2;
  if ( !a2 || (unsigned int)UserIsProcessImmersiveAppContainer((__int64)a2) )
  {
    GreAcquireHmgrSemaphore();
    if ( v2 )
    {
      v11 = SGDGetSessionState(v4);
      EntryFromObject = GdiHandleManager::GetEntryFromObject(
                          *(GdiHandleManager **)(*(_QWORD *)(v11 + 24) + 8008LL),
                          this);
      *((_BYTE *)EntryFromObject + 15) |= 0x80u;
      goto LABEL_5;
    }
  }
  else
  {
    v2 = 0LL;
    GreAcquireHmgrSemaphore();
  }
  v5 = SGDGetSessionState(v4);
  v6 = GdiHandleManager::GetEntryFromObject(*(GdiHandleManager **)(*(_QWORD *)(v5 + 24) + 8008LL), this);
  *((_BYTE *)v6 + 15) &= ~0x80u;
LABEL_5:
  *((_QWORD *)this + 80) = v2;
  GreReleaseHmgrSemaphore(v8, v7, v9, v10);
}
