/*
 * XREFs of ?HampDepGroupPruneEmptyLinks@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003674C
 * Callers:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035678 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800368C8 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x180036930 (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

void __fastcall HampDepGroupPruneEmptyLinks(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_DEPENDENCY_LINK *FirstLink; // rbx
  struct _HAM_DEPENDENCY_LINK *NextLink; // rdi

  FirstLink = HampDepGroupGetFirstLink(a1);
  if ( FirstLink )
  {
    do
    {
      NextLink = HampDepGroupGetNextLink(FirstLink);
      if ( *((struct _HAM_DEPENDENCY_LINK **)FirstLink + 8) == (struct _HAM_DEPENDENCY_LINK *)((char *)FirstLink + 64)
        && *((struct _HAM_DEPENDENCY_LINK **)FirstLink + 10) == (struct _HAM_DEPENDENCY_LINK *)((char *)FirstLink + 80) )
      {
        RtlRbRemoveNode((char *)a1 + 72, FirstLink);
        *((_QWORD *)FirstLink + 2) = -1LL;
        HampDepGroupDereference(*((struct _HAM_DEPENDENCY_GROUP **)FirstLink + 5));
        HampFreeHeap(FirstLink);
      }
      FirstLink = NextLink;
    }
    while ( NextLink );
  }
}
