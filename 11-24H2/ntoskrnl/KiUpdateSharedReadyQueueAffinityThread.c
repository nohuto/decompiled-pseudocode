/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x1403B25A0
 * Callers:
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiComputeThreadAffinity @ 0x14029AC34 (KiComputeThreadAffinity.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiSetAffinityThread @ 0x1403B1A08 (KiSetAffinityThread.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     KiInitializeForegroundBoostThread @ 0x1403B3D80 (KiInitializeForegroundBoostThread.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x1403B4344 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KiUpdateThreadSchedulingProperties @ 0x14047C4A8 (KiUpdateThreadSchedulingProperties.c)
 *     KiApplyForegroundBoostThread @ 0x1404F6D4C (KiApplyForegroundBoostThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v3; // r8d
  __int64 v4; // rax
  _WORD *v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax

  if ( !a1 )
    a1 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v2 = *(_QWORD *)(a1 + 36416);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(unsigned __int8 *)(a1 + 208);
    v5 = *(_WORD **)(a2 + 576);
    if ( (unsigned __int16)v4 >= *v5 )
      v6 = 0LL;
    else
      v6 = *(_QWORD *)&v5[4 * v4 + 4];
    LOBYTE(v3) = (v2 & v6) == v2;
  }
  result = (*(_DWORD *)(a2 + 120) >> 13) & 1;
  if ( v3 != (_DWORD)result )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
  return result;
}
