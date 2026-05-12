/*
 * XREFs of NvmeAdapterQueryLedState @ 0x14008775C
 * Callers:
 *     NvmeNamespaceStorageQueryDeviceLedStatePropertyIoctl @ 0x1401AD0C0 (NvmeNamespaceStorageQueryDeviceLedStatePropertyIoctl.c)
 * Callees:
 *     NvmeQueryLedStateByAcpiDsm @ 0x140088738 (NvmeQueryLedStateByAcpiDsm.c)
 *     NvmeQueryLedStateByNpem @ 0x1400887C0 (NvmeQueryLedStateByNpem.c)
 */

__int64 __fastcall NvmeAdapterQueryLedState(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !a1 || !a2 )
    return 3221225485LL;
  result = NvmeQueryLedStateByAcpiDsm();
  if ( (_DWORD)result == -1073741637 )
    result = NvmeQueryLedStateByNpem(a1, a2);
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    v6 = *(_QWORD *)(v5 + 144);
    if ( (v6 & 0x40000) == 0 )
      *(_QWORD *)(v5 + 144) = v6 | 0x40000;
  }
  return result;
}
