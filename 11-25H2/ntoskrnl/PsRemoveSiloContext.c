/*
 * XREFs of PsRemoveSiloContext @ 0x140762830
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140763A54 (PspSiloInitializeUserSharedData.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PspStorageRemoveObject @ 0x14076CA48 (PspStorageRemoveObject.c)
 */

__int64 __fastcall PsRemoveSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1536);
  else
    v3 = qword_140FCEEB0;
  if ( a3 )
    *a3 = 0LL;
  return PspStorageRemoveObject(v3, a2, 0LL, a3);
}
