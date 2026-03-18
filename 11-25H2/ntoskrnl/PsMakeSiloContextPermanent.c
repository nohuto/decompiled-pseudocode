/*
 * XREFs of PsMakeSiloContextPermanent @ 0x1406EF5D0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PspStorageMakeSlotReadOnly @ 0x1409E3580 (PspStorageMakeSlotReadOnly.c)
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1)
{
  __int64 v1; // rcx

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1536);
  else
    v1 = qword_140FCEEB0;
  return PspStorageMakeSlotReadOnly(v1);
}
