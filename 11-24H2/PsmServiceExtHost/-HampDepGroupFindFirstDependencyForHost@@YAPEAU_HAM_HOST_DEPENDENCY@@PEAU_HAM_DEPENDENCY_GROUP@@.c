/*
 * XREFs of ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800654F8
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180035DF4 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180082ADC (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180065624 (-HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE **__fastcall HampDepGroupFindFirstDependencyForHost(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RTL_BALANCED_NODE *i; // rbx
  __int64 v3; // r8
  int v4; // eax
  struct _RTL_BALANCED_NODE *v5; // rdi
  struct _RTL_BALANCED_NODE *v6; // rsi
  int v7; // eax
  struct _RTL_BALANCED_NODE **v8; // r8
  struct _RTL_BALANCED_NODE *ParentValue; // rcx
  struct _RTL_BALANCED_NODE *v11; // rax
  struct _RTL_BALANCED_NODE *v12; // rcx
  struct _RTL_BALANCED_NODE *v13; // rcx
  struct _RTL_BALANCED_NODE *v14; // [rsp+30h] [rbp+8h] BYREF

  i = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 9);
  v3 = 32LL;
  if ( a2 )
    v3 = (__int64)a2 - 32;
  v14 = *(struct _RTL_BALANCED_NODE **)v3;
  while ( 1 )
  {
    if ( !i )
      return 0LL;
    v4 = HampDepGroupCompareDependencyLinkForHost(&v14, i);
    if ( !v4 )
      break;
    if ( v4 >= 0 )
      i = i->Children[1];
    else
      i = i->Children[0];
  }
  v5 = i->Children[0];
  v6 = 0LL;
  if ( !i->Children[0] )
    goto LABEL_15;
  do
  {
    v7 = HampDepGroupCompareDependencyLinkForHost(&v14, v5);
    if ( v7 < 0 )
      goto LABEL_11;
    if ( v7 <= 0 )
    {
      v6 = v5;
LABEL_11:
      v5 = v5->Children[0];
      continue;
    }
    v5 = v5->Children[1];
  }
  while ( v5 );
  if ( v6 )
    i = v6;
LABEL_15:
  while ( i )
  {
    v8 = 0LL;
    if ( i[1].Children[0] != v14 )
      return v8;
    ParentValue = (struct _RTL_BALANCED_NODE *)i[2].ParentValue;
    if ( ParentValue != (struct _RTL_BALANCED_NODE *)&i[2].16 )
      v8 = &ParentValue[-1].Children[1];
    if ( v8 )
      return v8;
    v11 = i->Children[1];
    v12 = i;
    if ( v11 )
    {
      v13 = v11->Children[0];
      for ( i = i->Children[1]; v13; v13 = v13->Children[0] )
        i = v13;
    }
    else
    {
      for ( i = (struct _RTL_BALANCED_NODE *)(i->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
            i;
            i = (struct _RTL_BALANCED_NODE *)(i->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( i->Children[0] == v12 )
          break;
        v12 = i;
      }
    }
  }
  return 0LL;
}
