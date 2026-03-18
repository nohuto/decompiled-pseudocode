/*
 * XREFs of PsMakeSiloContextPermanent @ 0x1406FB440
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409FE37C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PspStorageMakeSlotReadOnly @ 0x1409E21D0 (PspStorageMakeSlotReadOnly.c)
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1)
{
  __int64 v1; // rcx

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1536);
  else
    v1 = qword_140FCEE30;
  return PspStorageMakeSlotReadOnly(v1);
}
