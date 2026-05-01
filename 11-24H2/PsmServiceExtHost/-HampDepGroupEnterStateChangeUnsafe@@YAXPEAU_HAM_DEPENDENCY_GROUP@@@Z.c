/*
 * XREFs of ?HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036974
 * Callers:
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034838 (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800354A4 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x1800356C0 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampDepGroupEnterStateChangeUnsafe(struct _HAM_DEPENDENCY_GROUP *a1)
{
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 12) <= 1 )
    __fastfail(0xEu);
  *((_DWORD *)a1 + 32) = GetCurrentThreadId();
}
