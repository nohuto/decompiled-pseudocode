/*
 * XREFs of ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x14019DA38
 * Callers:
 *     HmgCreate @ 0x1400798EC (HmgCreate.c)
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x140126A8C (-Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z.c)
 */

void __fastcall GdiHandleManager::Destroy(PVOID Buffer)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)Buffer + 3);
  if ( v2 )
    GreDeleteFastMutex(v2);
  GdiHandleEntryDirectory::Destroy(*((char **)Buffer + 2));
  GreDeleteFastMutex((char *)Buffer);
}
