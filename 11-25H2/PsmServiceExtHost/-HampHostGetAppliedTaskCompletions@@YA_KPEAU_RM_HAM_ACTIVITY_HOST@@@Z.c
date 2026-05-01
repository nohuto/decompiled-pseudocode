/*
 * XREFs of ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006D104
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007734 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DAE8 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18008261C (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009DD0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostGetAppliedTaskCompletions(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_ACTIVITY *FirstActivity; // rdx
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // rax

  FirstActivity = HampHostGetFirstActivity(a1);
  if ( FirstActivity )
  {
    do
    {
      if ( *((_BYTE *)FirstActivity + 562) == 3 )
      {
        v3 = *((_DWORD *)FirstActivity + 28) & 0x7F;
        if ( v3 != 64 )
          v2 |= 1LL << v3;
      }
      v4 = *((_QWORD *)FirstActivity + 12);
      if ( v4 == *((_QWORD *)FirstActivity + 10) + 608LL )
        break;
      FirstActivity = (struct _HAM_ACTIVITY *)(v4 - 96);
    }
    while ( v4 != 96 );
  }
  return v2;
}
