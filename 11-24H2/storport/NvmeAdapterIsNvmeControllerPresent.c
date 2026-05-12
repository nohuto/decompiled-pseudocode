/*
 * XREFs of NvmeAdapterIsNvmeControllerPresent @ 0x1400D3AE4
 * Callers:
 *     NvmeAdapterConnectControllerInternal @ 0x1400CD9D0 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterCreateAddNvmeController @ 0x1400CDD60 (NvmeAdapterCreateAddNvmeController.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NvmeAdapterIsNvmeControllerPresent(__int64 a1, __int16 a2)
{
  _QWORD *v4; // rdi
  struct _ERESOURCE *v5; // rsi
  _QWORD **v6; // rbx
  _QWORD *v7; // r8

  v4 = 0LL;
  KeEnterCriticalRegion();
  v5 = (struct _ERESOURCE *)(a1 + 632);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 632), 1u);
  v6 = (_QWORD **)(a1 + 608);
  v7 = *v6;
  while ( v7 != v6 )
  {
    v4 = v7 - 8;
    if ( *((_WORD *)v7 - 30) == a2 )
      break;
    v7 = (_QWORD *)*v7;
    v4 = 0LL;
  }
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
  return v4;
}
