/*
 * XREFs of ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18000F784
 * Callers:
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18008DEE4 (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 * Callees:
 *     ?RmpActivityHostIsKillable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FA28 (-RmpActivityHostIsKillable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpPolicyPopulateFastCommitUse(struct _RM_SYSTEM_MEMORY_METRICS *a1, struct _RM_POLICY_WORK_BUFFER *a2)
{
  unsigned int i; // esi
  __int64 *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rax

  for ( i = 0; i < *((_DWORD *)a2 + 9); ++i )
  {
    v5 = (__int64 *)(*(_QWORD *)a2 + ((unsigned __int64)i << 6));
    v6 = v5[6];
    if ( RmpActivityHostIsKillable((struct _RM_ACTIVITY_HOST *)v6) && (*(_BYTE *)(v6 + 1184) & 0x40) != 0 )
      v7 = *v5;
    else
      v7 = v5[5];
    *((_QWORD *)a1 + 4) += v7;
  }
  *((_DWORD *)a1 + 18) |= 1u;
}
