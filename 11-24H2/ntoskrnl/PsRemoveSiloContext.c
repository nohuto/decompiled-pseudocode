/*
 * XREFs of PsRemoveSiloContext @ 0x140772410
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140773644 (PspSiloInitializeUserSharedData.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409F75EC (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PspStorageRemoveObject @ 0x14077C498 (PspStorageRemoveObject.c)
 */

__int64 __fastcall PsRemoveSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1536);
  else
    v3 = qword_140FCFE30;
  if ( a3 )
    *a3 = 0LL;
  return PspStorageRemoveObject(v3, a2, 0LL, a3);
}
