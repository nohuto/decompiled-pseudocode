/*
 * XREFs of VslFreePoolTransferObject @ 0x1404B4020
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     VslFinishSecureImageValidation @ 0x14058BFD0 (VslFinishSecureImageValidation.c)
 * Callees:
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslFreePoolTransferObject(__int64 **P, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rdi

  v3 = *P;
  v4 = v3[4] + *((unsigned int *)v3 + 11);
  if ( a2 )
    *a2 = *((unsigned int *)v3 + 10);
  VslpUnlockPagesForTransfer(P);
  ExFreePoolWithTag(P, 0);
  return v4;
}
