/*
 * XREFs of ?RmHamHostIsMemoryRequired@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180043D1C
 * Callers:
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C790 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18002B8E4 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043DFC (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E88 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall RmHamHostIsMemoryRequired(unsigned __int64 a1)
{
  char *v1; // rdi
  unsigned int v3; // ebx
  unsigned int v4; // edx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)(a1 + 64);
  v3 = 0;
  v6 = 0;
  HampHostAcquireLockSharedEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
  if ( (*((_QWORD *)v1 + 83) & 0x80000000000LL) != 0
    || (RmHamHostGetCurrentState((struct _RM_HAM_ACTIVITY_HOST *)v1, (union _RM_OPTIMIZATION_STATE *)&v6, 0LL),
        (v6 & 0x80u) == 0)
    && *(_DWORD *)((a1 & -(__int64)(v1 != 0LL)) + 0x270) == 2 )
  {
    v3 = 1;
  }
  HampHostReleaseLockSharedEx((struct _RM_HAM_ACTIVITY_HOST *)v1, v4);
  return v3;
}
