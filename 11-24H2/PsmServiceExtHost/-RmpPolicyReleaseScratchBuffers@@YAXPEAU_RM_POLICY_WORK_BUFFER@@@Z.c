/*
 * XREFs of ?RmpPolicyReleaseScratchBuffers@@YAXPEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18006E92C
 * Callers:
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18001F280 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 */

void __fastcall RmpPolicyReleaseScratchBuffers(struct _RM_POLICY_WORK_BUFFER *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    HampFreeHeap(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 1);
  if ( v3 )
  {
    HampFreeHeap(v3);
    *((_QWORD *)a1 + 1) = 0LL;
  }
  v4 = (void *)*((_QWORD *)a1 + 3);
  if ( v4 )
    HampFreeHeap(v4);
  *((_DWORD *)a1 + 8) = 0;
}
