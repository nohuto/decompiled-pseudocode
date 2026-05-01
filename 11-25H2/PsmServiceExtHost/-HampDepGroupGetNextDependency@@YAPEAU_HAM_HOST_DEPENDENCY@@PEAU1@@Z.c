/*
 * XREFs of ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180035BBC
 * Callers:
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18003588C (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003590C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180035E74 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003639C (-HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180071A94 (-HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081150 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800369B0 (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

struct _HAM_HOST_DEPENDENCY *__fastcall HampDepGroupGetNextDependency(struct _HAM_HOST_DEPENDENCY *a1)
{
  struct _HAM_DEPENDENCY_LINK *v1; // r8
  struct _HAM_DEPENDENCY_LINK *NextLink; // rcx
  char *v3; // r9
  bool v4; // zf
  struct _HAM_DEPENDENCY_LINK *v6; // r9

  v1 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 2);
  NextLink = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 1);
  v3 = 0LL;
  if ( v1 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 64) )
    v3 = (char *)v1 - 16;
  v4 = v3 == 0LL;
  while ( v4 )
  {
    do
    {
      NextLink = HampDepGroupGetNextLink(NextLink);
      if ( !NextLink )
        return 0LL;
      v6 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 8);
    }
    while ( v6 == (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 64) );
    v4 = v6 == (struct _HAM_DEPENDENCY_LINK *)16;
    v3 = (char *)v6 - 16;
  }
  return (struct _HAM_HOST_DEPENDENCY *)v3;
}
