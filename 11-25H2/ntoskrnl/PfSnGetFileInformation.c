/*
 * XREFs of PfSnGetFileInformation @ 0x140302AF0
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x140302910 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  ULONG_PTR ParentValue; // rsi
  signed __int64 v25; // rax
  bool v26; // cc
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  BOOLEAN v31; // r8
  int v32; // ecx
  unsigned __int64 v33; // rax
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
      goto LABEL_20;
    v12 ^= a1 + 520;
  }
  v13 = v11 & 1;
  while ( v12 )
  {
    if ( *(_QWORD *)(v12 + 24) > (unsigned __int64)v3 )
    {
      v14 = *(_QWORD *)v12;
      if ( !v13 || !v14 )
        goto LABEL_18;
    }
    else
    {
      if ( *(_QWORD *)(v12 + 24) >= (unsigned __int64)v3 )
        break;
      v14 = *(_QWORD *)(v12 + 8);
      if ( !v13 || !v14 )
      {
LABEL_18:
        v12 = v14;
        continue;
      }
    }
    v12 ^= v14;
  }
LABEL_20:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v10);
  __writecr8(v10);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
    return 0;
  }
  Pool2 = (_RTL_BALANCED_NODE *)ExAllocatePool2(0x40uLL);
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
  v21 = *(_QWORD *)(a1 + 520);
  if ( (*(_QWORD *)(a1 + 528) & 1) != 0 )
  {
    if ( !v21 )
    {
LABEL_47:
      if ( !*(_QWORD *)(a1 + 568) )
      {
        v2 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
        if ( !v2 )
        {
          v8 = -1073741431;
          goto LABEL_29;
        }
        *(_QWORD *)(a1 + 568) = a1;
        *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
        v4 = 1;
        *(_QWORD *)(a1 + 544) = 0LL;
      }
      v16[1].Children[1] = *(_RTL_BALANCED_NODE **)(a1 + 536);
      *(_QWORD *)(a1 + 536) = (char *)v16 + 32;
      v29 = *(_QWORD *)(a1 + 528);
      v30 = (unsigned __int64)*v17;
      if ( (v29 & 1) != 0 )
      {
        if ( !v30 )
        {
          v31 = 0;
LABEL_56:
          RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 520), (PRTL_BALANCED_NODE)v30, v31, v16);
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
        v30 ^= (unsigned __int64)v17;
      }
      v31 = 0;
      v32 = v29 & 1;
      if ( !v30 )
        goto LABEL_56;
      while ( 1 )
      {
        if ( *(_QWORD *)(v30 + 24) > (unsigned __int64)v3 )
        {
          v33 = *(_QWORD *)v30;
          if ( v32 )
          {
            if ( !v33 )
              goto LABEL_56;
            v33 ^= v30;
          }
          if ( !v33 )
            goto LABEL_56;
        }
        else
        {
          v33 = *(_QWORD *)(v30 + 8);
          if ( v32 )
          {
            if ( !v33 )
              goto LABEL_55;
            v33 ^= v30;
          }
          if ( !v33 )
          {
LABEL_55:
            v31 = 1;
            goto LABEL_56;
          }
        }
        v30 = v33;
      }
    }
    v21 ^= (unsigned __int64)v17;
  }
  v22 = *(_QWORD *)(a1 + 528) & 1LL;
  if ( !v21 )
    goto LABEL_47;
  while ( *(_QWORD *)(v21 + 24) < (unsigned __int64)v3 )
  {
    v28 = *(_QWORD *)(v21 + 8);
    if ( !(_DWORD)v22 || !v28 )
    {
LABEL_45:
      v21 = v28;
      goto LABEL_46;
    }
LABEL_42:
    v21 ^= v28;
LABEL_46:
    if ( !v21 )
      goto LABEL_47;
  }
  if ( *(_QWORD *)(v21 + 24) > (unsigned __int64)v3 )
  {
    v28 = *(_QWORD *)v21;
    if ( !(_DWORD)v22 || !v28 )
      goto LABEL_45;
    goto LABEL_42;
  }
  v8 = 0;
LABEL_29:
  v23 = (_DWORD *)(a1 + 576);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *v23 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v23, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v18);
  __writecr8(v18);
  ParentValue = v16[1].ParentValue;
  if ( ObpTraceFlags )
    ObpPushStackInfo(ParentValue - 48, 0, 1u, 0x746C6644u);
  v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(ParentValue - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v26 = v25 <= 1;
  BugCheckParameter4 = v25 - 1;
  if ( v26 )
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
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(ParentValue - 48, v22, v19, v20);
      goto LABEL_36;
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
LABEL_36:
    ExFreePoolWithTag(v16, 0);
  }
  return v8;
}
