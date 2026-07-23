/*
 * XREFs of PfSnNameRemove @ 0x14042A140
 * Callers:
 *     PfSnNameRemoveAll @ 0x14094A440 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  int v8; // ecx
  unsigned __int64 v9; // rax
  _RTL_BALANCED_NODE **v11; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v6 = *(_QWORD *)(a1 + 528);
  v7 = *(_QWORD *)(a1 + 520);
  if ( (v6 & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_13;
    v7 ^= a1 + 520;
  }
  v8 = v6 & 1;
  if ( !v7 )
  {
LABEL_13:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(a1 + 576) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 576), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v5);
    __writecr8(v5);
    return v4;
  }
  do
  {
    if ( *(_QWORD *)(v7 + 24) > (unsigned __int64)a2 )
    {
      v9 = *(_QWORD *)v7;
      if ( v8 && v9 )
        goto LABEL_7;
    }
    else
    {
      if ( *(_QWORD *)(v7 + 24) >= (unsigned __int64)a2 )
        break;
      v9 = *(_QWORD *)(v7 + 8);
      if ( v8 && v9 )
      {
LABEL_7:
        v7 ^= v9;
        continue;
      }
    }
    v7 = v9;
  }
  while ( v7 );
  if ( !v7 )
    goto LABEL_13;
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 520), (PRTL_BALANCED_NODE)v7);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576), v5);
  if ( *(_QWORD *)(v7 + 32) != 10LL )
    KeBugCheckEx(0x191u, 0x72DuLL, 0LL, 0LL, 0LL);
  v11 = (_RTL_BALANCED_NODE **)(a1 + 488);
  if ( a1 + 488 < (unsigned __int64)(a1 + 520) )
  {
    do
    {
      if ( *v11 == a2 )
        *v11 = 0LL;
      ++v11;
    }
    while ( (unsigned __int64)v11 < a1 + 520 );
  }
  v4 = 1;
  ExFreePoolWithTag((PVOID)v7, 0);
  return v4;
}
