/*
 * XREFs of ?SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ @ 0x1401A3980
 * Callers:
 *     <none>
 * Callees:
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x1401A3374 (-JITThaw@tagPROCESSINFO@@AEAA_NXZ.c)
 */

char __fastcall tagPROCESSINFO::SyncAndTestFreeze(tagPROCESSINFO *this)
{
  int IsProcessDeepFrozen; // eax
  int v3; // r8d
  char result; // al
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  IsProcessDeepFrozen = KfIsProcessDeepFrozen(*(_QWORD *)this);
  v3 = *((_DWORD *)this + 298);
  if ( (IsProcessDeepFrozen == 0) == v3 )
    return v3 == 0;
  if ( IsProcessDeepFrozen )
    return 1;
  v6 = 0LL;
  v5[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v5);
  result = tagPROCESSINFO::JITThaw(this) ^ 1;
  if ( v5[0] )
    --*(_DWORD *)(v6 + 28);
  return result;
}
