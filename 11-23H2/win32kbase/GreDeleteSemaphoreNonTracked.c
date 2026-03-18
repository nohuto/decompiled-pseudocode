/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C00C4B38
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0077CD4 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall GreDeleteSemaphoreNonTracked(struct _ERESOURCE *P)
{
  if ( P )
  {
    ExDeleteResourceLite(P);
    ExFreePoolWithTag(P, 0);
  }
}
