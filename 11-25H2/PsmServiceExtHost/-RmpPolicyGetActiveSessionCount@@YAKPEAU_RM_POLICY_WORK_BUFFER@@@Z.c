/*
 * XREFs of ?RmpPolicyGetActiveSessionCount@@YAKPEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180063A98
 * Callers:
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18000F4C8 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall RmpPolicyGetActiveSessionCount(struct _RTL_BITMAP *a1)
{
  struct _RTL_BITMAP *v1; // rsi
  ULONG i; // ebx
  __int64 v4; // rdx

  v1 = a1 + 1;
  RtlClearAllBits(a1 + 1);
  for ( i = 0; i < *(&a1[2].SizeOfBitMap + 1); ++i )
  {
    v4 = *(_QWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)&a1->SizeOfBitMap + 48);
    if ( *(char *)(v4 + 1184) < 0 )
      RtlSetBit(v1, *(_DWORD *)(v4 + 620));
  }
  return RtlNumberOfSetBits(v1);
}
