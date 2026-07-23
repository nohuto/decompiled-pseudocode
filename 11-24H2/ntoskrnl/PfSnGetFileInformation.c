/*
 * XREFs of PfSnGetFileInformation @ 0x14022B790
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x14022B5F0 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  BOOLEAN v2; // r12
  _RTL_BALANCED_NODE *v3; // rdi
  int v4; // r13d
  _RTL_BALANCED_NODE **i; // rax
  unsigned int v8; // edi
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // ecx
  unsigned __int64 v14; // rax
  _RTL_BALANCED_NODE *Pool2; // rax
  _RTL_BALANCED_NODE *v16; // rbp
  _RTL_BALANCED_NODE **v17; // rsi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  ULONG_PTR ParentValue; // rsi
  signed __int64 v23; // rax
  bool v24; // cc
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  BOOLEAN v29; // r8
  int v30; // ecx
  unsigned __int64 v31; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0;
  v3 = (_RTL_BALANCED_NODE *)a2[3];
  v4 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return (unsigned int)-1073741637;
  for ( i = (_RTL_BALANCED_NODE **)(a1 + 488); (unsigned __int64)i < a1 + 520; ++i )
  {
    if ( *i == v3 )
      return 0;
  }
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
  v11 = *(_QWORD *)(a1 + 528);
  v12 = *(_QWORD *)(a1 + 520);
  if ( (v11 & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_19;
    v12 ^= a1 + 520;
  }
  v13 = v11 & 1;
  while ( v12 )
  {
    if ( *(_QWORD *)(v12 + 24) > (unsigned __int64)v3 )
    {
      v14 = *(_QWORD *)v12;
      if ( !v13 || !v14 )
        goto LABEL_17;
    }
    else
    {
      if ( *(_QWORD *)(v12 + 24) >= (unsigned __int64)v3 )
        break;
      v14 = *(_QWORD *)(v12 + 8);
      if ( !v13 || !v14 )
      {
LABEL_17:
        v12 = v14;
        continue;
      }
    }
    v12 ^= v14;
  }
LABEL_19:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v10);
  __writecr8(v10);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
    return 0;
  }
  Pool2 = (_RTL_BALANCED_NODE *)ExAllocatePool2(0x40uLL, 0x30uLL, 0x6E506343u);
  v16 = Pool2;
  if ( !Pool2 )
  {
    if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
      _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
    return (unsigned int)-1073741670;
  }
  Pool2->0 = 0LL;
  *(_OWORD *)&Pool2->0 = 0LL;
  *(_OWORD *)&Pool2[1].Right = 0LL;
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  v16[1].ParentValue = (unsigned __int64)a2;
  v16[1].Children[0] = v3;
  v17 = (_RTL_BALANCED_NODE **)(a1 + 520);
  v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v19 = *(_QWORD *)(a1 + 520);
  if ( (*(_QWORD *)(a1 + 528) & 1) != 0 )
  {
    if ( !v19 )
    {
LABEL_46:
      if ( !*(_QWORD *)(a1 + 568) )
      {
        v2 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
        if ( !v2 )
        {
          v8 = -1073741431;
          goto LABEL_28;
        }
        *(_QWORD *)(a1 + 568) = a1;
        *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
        v4 = 1;
        *(_QWORD *)(a1 + 544) = 0LL;
      }
      v16[1].Children[1] = *(_RTL_BALANCED_NODE **)(a1 + 536);
      *(_QWORD *)(a1 + 536) = (char *)v16 + 32;
      v27 = *(_QWORD *)(a1 + 528);
      v28 = (unsigned __int64)*v17;
      if ( (v27 & 1) != 0 )
      {
        if ( !v28 )
        {
          v29 = 0;
LABEL_55:
          RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 520), (PRTL_BALANCED_NODE)v28, v29, v16);
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576), v18);
          if ( v4 )
          {
            v2 = 0;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
          }
          *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
          v8 = 0;
          if ( v2 )
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
          return v8;
        }
        v28 ^= (unsigned __int64)v17;
      }
      v29 = 0;
      v30 = v27 & 1;
      if ( !v28 )
        goto LABEL_55;
      while ( 1 )
      {
        if ( *(_QWORD *)(v28 + 24) > (unsigned __int64)v3 )
        {
          v31 = *(_QWORD *)v28;
          if ( v30 )
          {
            if ( !v31 )
              goto LABEL_55;
            v31 ^= v28;
          }
          if ( !v31 )
            goto LABEL_55;
        }
        else
        {
          v31 = *(_QWORD *)(v28 + 8);
          if ( v30 )
          {
            if ( !v31 )
              goto LABEL_54;
            v31 ^= v28;
          }
          if ( !v31 )
          {
LABEL_54:
            v29 = 1;
            goto LABEL_55;
          }
        }
        v28 = v31;
      }
    }
    v19 ^= (unsigned __int64)v17;
  }
  v20 = *(_QWORD *)(a1 + 528) & 1LL;
  if ( !v19 )
    goto LABEL_46;
  while ( *(_QWORD *)(v19 + 24) < (unsigned __int64)v3 )
  {
    v26 = *(_QWORD *)(v19 + 8);
    if ( !(_DWORD)v20 || !v26 )
    {
LABEL_44:
      v19 = v26;
      goto LABEL_45;
    }
LABEL_41:
    v19 ^= v26;
LABEL_45:
    if ( !v19 )
      goto LABEL_46;
  }
  if ( *(_QWORD *)(v19 + 24) > (unsigned __int64)v3 )
  {
    v26 = *(_QWORD *)v19;
    if ( !(_DWORD)v20 || !v26 )
      goto LABEL_44;
    goto LABEL_41;
  }
  v8 = 0;
LABEL_28:
  v21 = (_DWORD *)(a1 + 576);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *v21 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v18);
  __writecr8(v18);
  ParentValue = v16[1].ParentValue;
  if ( ObpTraceFlags )
    ObpPushStackInfo(ParentValue - 48);
  v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(ParentValue - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v24 = v23 <= 1;
  BugCheckParameter4 = v23 - 1;
  if ( v24 )
  {
    if ( *(_QWORD *)(ParentValue - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(ParentValue - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(ParentValue - 48) >> 8)],
        ParentValue,
        1uLL,
        *(_QWORD *)(ParentValue - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, ParentValue, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable
      || !(unsigned __int8)KeAreInterruptsEnabled(0LL, v20)
      || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(ParentValue - 48);
      goto LABEL_35;
    }
    if ( (*(_BYTE *)(ParentValue - 22) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)(ParentValue - 48 - ObpInfoMaskToOffset[*(_BYTE *)(ParentValue - 22) & 0x7F]) + 24LL) )
    {
      ObpHandleRevocationBlockRemoveObject();
    }
    if ( ObpTraceFlags )
      ObpDeregisterObject(ParentValue - 48);
    ObpRemoveObjectRoutine(ParentValue - 48, 0LL);
    ExFreePoolWithTag(v16, 0);
  }
  else
  {
LABEL_35:
    ExFreePoolWithTag(v16, 0);
  }
  return v8;
}
