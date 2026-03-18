/*
 * XREFs of PfSnGetFileInformation @ 0x140276200
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x140276060 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  BOOLEAN v2; // r12
  unsigned __int64 v3; // rdi
  int v4; // r13d
  _QWORD *i; // rax
  unsigned int v8; // edi
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // ecx
  unsigned __int64 v14; // rax
  _OWORD *Pool2; // rax
  _QWORD *v16; // rbp
  unsigned __int64 *v17; // rsi
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // edx
  _DWORD *v23; // rcx
  ULONG_PTR v24; // rsi
  signed __int64 v25; // rax
  bool v26; // cc
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // ecx
  unsigned __int64 v32; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0;
  v3 = a2[3];
  v4 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return (unsigned int)-1073741637;
  for ( i = (_QWORD *)(a1 + 488); (unsigned __int64)i < a1 + 520; ++i )
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
    if ( *(_QWORD *)(v12 + 24) > v3 )
    {
      v14 = *(_QWORD *)v12;
      if ( !v13 || !v14 )
        goto LABEL_17;
    }
    else
    {
      if ( *(_QWORD *)(v12 + 24) >= v3 )
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
  Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL);
  v16 = Pool2;
  if ( !Pool2 )
  {
    if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
      _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
    return (unsigned int)-1073741670;
  }
  *Pool2 = 0LL;
  Pool2[1] = 0LL;
  Pool2[2] = 0LL;
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  v16[5] = a2;
  v16[3] = v3;
  v17 = (unsigned __int64 *)(a1 + 520);
  v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v20 = *(_QWORD *)(a1 + 528);
  v21 = *(_QWORD *)(a1 + 520);
  if ( (v20 & 1) != 0 )
  {
    if ( !v21 )
    {
LABEL_46:
      if ( !*(_QWORD *)(a1 + 568) )
      {
        v2 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
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
      v16[4] = *(_QWORD *)(a1 + 536);
      *(_QWORD *)(a1 + 536) = v16 + 4;
      v29 = *(_QWORD *)(a1 + 528);
      v30 = *v17;
      if ( (v29 & 1) != 0 )
      {
        if ( !v30 )
        {
          LOBYTE(v19) = 0;
LABEL_55:
          RtlRbInsertNodeEx(a1 + 520, v30, v19, v16);
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
      LOBYTE(v19) = 0;
      v31 = v29 & 1;
      if ( !v30 )
        goto LABEL_55;
      while ( 1 )
      {
        if ( *(_QWORD *)(v30 + 24) > v3 )
        {
          v32 = *(_QWORD *)v30;
          if ( v31 )
          {
            if ( !v32 )
              goto LABEL_55;
            v32 ^= v30;
          }
          if ( !v32 )
            goto LABEL_55;
        }
        else
        {
          v32 = *(_QWORD *)(v30 + 8);
          if ( v31 )
          {
            if ( !v32 )
              goto LABEL_54;
            v32 ^= v30;
          }
          if ( !v32 )
          {
LABEL_54:
            LOBYTE(v19) = 1;
            goto LABEL_55;
          }
        }
        v30 = v32;
      }
    }
    v21 ^= (unsigned __int64)v17;
  }
  v22 = v20 & 1;
  if ( !v21 )
    goto LABEL_46;
  while ( *(_QWORD *)(v21 + 24) < v3 )
  {
    v28 = *(_QWORD *)(v21 + 8);
    if ( !v22 || !v28 )
    {
LABEL_44:
      v21 = v28;
      goto LABEL_45;
    }
LABEL_41:
    v21 ^= v28;
LABEL_45:
    if ( !v21 )
      goto LABEL_46;
  }
  if ( *(_QWORD *)(v21 + 24) > v3 )
  {
    v28 = *(_QWORD *)v21;
    if ( !v22 || !v28 )
      goto LABEL_44;
    goto LABEL_41;
  }
  v8 = 0;
LABEL_28:
  v23 = (_DWORD *)(a1 + 576);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *v23 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v23, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v18);
  __writecr8(v18);
  v24 = v16[5];
  if ( ObpTraceFlags )
    ObpPushStackInfo(v24 - 48);
  v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v26 = v25 <= 1;
  BugCheckParameter4 = v25 - 1;
  if ( v26 )
  {
    if ( *(_QWORD *)(v24 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v24 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v24 - 48) >> 8)],
        v24,
        1uLL,
        *(_QWORD *)(v24 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v24, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(v24 - 48);
      goto LABEL_35;
    }
    if ( (*(_BYTE *)(v24 - 22) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)(v24 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v24 - 22) & 0x7F]) + 24LL) )
    {
      ObpHandleRevocationBlockRemoveObject();
    }
    if ( ObpTraceFlags )
      ObpDeregisterObject(v24 - 48);
    ObpRemoveObjectRoutine(v24 - 48, 0LL);
    ExFreePoolWithTag(v16, 0);
  }
  else
  {
LABEL_35:
    ExFreePoolWithTag(v16, 0);
  }
  return v8;
}
