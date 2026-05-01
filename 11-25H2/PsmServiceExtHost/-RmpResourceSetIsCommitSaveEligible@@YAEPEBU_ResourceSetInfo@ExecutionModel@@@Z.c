/*
 * XREFs of ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800102C8
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010B10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800123D0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpResourceSetIsCommitSaveEligible(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = ((*((_BYTE *)a1 + 40) & 0x10) != 0
         || *(_DWORD *)a1 <= 0x28u && (v1 = 0x11000002000LL, _bittest64(&v1, *(int *)a1)))
        && (*((_BYTE *)a1 + 42) & 0x40) == 0;
  return result;
}
