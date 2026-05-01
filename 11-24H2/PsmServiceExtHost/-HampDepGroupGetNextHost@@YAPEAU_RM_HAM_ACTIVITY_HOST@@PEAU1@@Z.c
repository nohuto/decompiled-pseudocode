/*
 * XREFs of ?HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180065B1C
 * Callers:
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001DE08 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 * Callees:
 *     <none>
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampDepGroupGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  char *v1; // rcx
  unsigned __int64 v2; // rdx
  __int64 i; // rdx
  _QWORD *v4; // rcx

  v1 = (char *)a1 + 720;
  v2 = *((_QWORD *)v1 + 1);
  if ( v2 )
  {
    v4 = *(_QWORD **)v2;
    if ( *(_QWORD *)v2 )
    {
      do
      {
        v2 = (unsigned __int64)v4;
        v4 = (_QWORD *)*v4;
      }
      while ( v4 );
    }
  }
  else
  {
    for ( i = *((_QWORD *)v1 + 2); ; i = *(_QWORD *)(v2 + 16) )
    {
      v2 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v2 || *(char **)v2 == v1 )
        break;
      v1 = (char *)v2;
    }
  }
  return (struct _RM_HAM_ACTIVITY_HOST *)((v2 - 720) & -(__int64)(v2 != 0));
}
