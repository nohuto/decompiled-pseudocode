/*
 * XREFs of ExpAllocatePoolWithQuotaTag @ 0x140B74210
 * Callers:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402776D0 (ExpAllocatePoolWithTagFromNode.c)
 *     PspExpandQuota @ 0x14027BC98 (PspExpandQuota.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14035C3DC (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14035D9AC (RtlpHpVaMgrCtxQuery.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

ULONG_PTR __fastcall ExpAllocatePoolWithQuotaTag(ULONG_PTR BugCheckParameter3, size_t a2, ULONG_PTR a3, int a4)
{
  unsigned int v4; // r14d
  ULONG v5; // r13d
  ULONG_PTR v6; // rdi
  __int64 v7; // r12
  _KPROCESS *Process; // rbp
  ULONG_PTR PoolWithTagFromNode; // rbx
  ULONG_PTR v10; // rdx
  __int16 v11; // ax
  _BOOL8 v12; // r10
  _KSCHEDULING_GROUP *SchedulingGroup; // rax
  unsigned __int64 *v14; // r15
  char v15; // cl
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  bool v19; // zf
  signed __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  ULONG_PTR v28; // rsi
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 *i; // rax
  KIRQL v32; // al
  int v33; // r11d
  unsigned __int64 v34; // rsi
  unsigned int v35; // r8d
  char *v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // r15
  unsigned int v39; // r8d
  int v40; // ecx
  char *v41; // rdx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  char v44; // al
  signed __int32 v45[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v46; // [rsp+30h] [rbp-78h]
  unsigned __int64 v47; // [rsp+38h] [rbp-70h] BYREF
  _DWORD v48[2]; // [rsp+40h] [rbp-68h]
  _BOOL8 v49; // [rsp+48h] [rbp-60h]
  ULONG_PTR v50; // [rsp+50h] [rbp-58h]
  __int128 v51; // [rsp+58h] [rbp-50h] BYREF
  __int128 v52; // [rsp+68h] [rbp-40h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]

  v4 = 0;
  v5 = a3;
  v6 = BugCheckParameter3;
  v7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == PsInitialSystemProcess )
    v6 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL;
  PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(v6, a2, a3, a4);
  if ( !PoolWithTagFromNode || (v6 & 1) == 0 )
    return PoolWithTagFromNode;
  if ( ExpSpecialAllocations )
  {
    if ( (_WORD)PoolWithTagFromNode )
    {
      v25 = 0;
    }
    else
    {
      v37 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68510, 2 * ((PoolWithTagFromNode - qword_140E68508) >> 20));
      if ( !v37 || (v25 = v37 - 1, v25 == 2) )
      {
        v51 = 0LL;
        v52 = 0LL;
        RtlpHpVaMgrCtxQuery((__int64)&unk_140E68558, PoolWithTagFromNode, (__int64)&v51);
        v27 = *(_QWORD *)v52;
LABEL_29:
        if ( !v27 )
          KeBugCheckEx(0xC2u, 0LL, 0LL, PoolWithTagFromNode, 0LL);
        for ( i = qword_140EEEE40; (__int64)i < (__int64)qword_140EEEE60; ++i )
        {
          if ( v27 == *i )
            return PoolWithTagFromNode;
        }
        goto LABEL_6;
      }
    }
    v48[0] = 0x100000;
    v48[1] = 0x1000000;
    v26 = (unsigned int)v48[v25];
    v27 = (RtlpHpHeapGlobals ^ *(_QWORD *)((PoolWithTagFromNode & -v26) + 0x10) ^ PoolWithTagFromNode & -v26)
        - 192LL * v25
        - 320;
    goto LABEL_29;
  }
LABEL_6:
  v50 = PoolWithTagFromNode & 0xFFF;
  if ( (PoolWithTagFromNode & 0xFFF) != 0 )
  {
    v10 = PoolWithTagFromNode - 16;
    if ( (*(_BYTE *)(PoolWithTagFromNode - 13) & 4) != 0 )
      v10 += -16LL * (unsigned __int8)*(_WORD *)v10;
    v11 = *(_WORD *)(v10 + 2);
    v7 = 16LL * (unsigned __int8)v11;
    if ( (v11 & 0x800) != 0 )
      *(_QWORD *)(v10 + 8) = ExpPoolQuotaCookie ^ v10;
  }
  else
  {
    v32 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
    v33 = 1;
    v34 = v32;
    v35 = (PoolBigPageTableSize - 1) & ((40543 * (PoolWithTagFromNode >> 12)) ^ ((40543 * (PoolWithTagFromNode >> 12)) >> 32));
    while ( 1 )
    {
      v36 = (char *)PoolBigPageTable + 32 * v35;
      if ( *(_QWORD *)v36 == PoolWithTagFromNode )
        break;
      if ( ++v35 >= (unsigned __int64)PoolBigPageTableSize )
      {
        if ( !v33 )
          goto LABEL_52;
        v35 = 0;
        v33 = 0;
      }
    }
    if ( !v36 )
LABEL_52:
      KeBugCheckEx(0x19u, 0x22uLL, PoolWithTagFromNode, (unsigned int)v6, 0LL);
    if ( (*((_DWORD *)v36 + 3) & 0x100) != 0 )
    {
      v7 = *((_QWORD *)v36 + 2);
      *((_QWORD *)v36 + 3) = ExpPoolQuotaCookie ^ PoolWithTagFromNode;
    }
    if ( (BYTE6(PerfGlobalGroupMask[0]) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpLargePoolTableLock);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v34);
    __writecr8(v34);
  }
  if ( Process == PsInitialSystemProcess )
    goto LABEL_32;
  v12 = (v6 & 0x100) != 0;
  SchedulingGroup = Process[1].SchedulingGroup;
  v49 = v12;
  v14 = (unsigned __int64 *)(&SchedulingGroup->Policy + 16 * v12);
  v15 = PspResourceFlags[8 * v12];
  v46 = v15;
  _m_prefetchw(v14);
  v16 = *v14;
  _InterlockedOr(v45, 0);
  do
  {
    v17 = v14[8];
LABEL_14:
    v47 = v17;
    while ( 1 )
    {
      v18 = v16 + v7;
      if ( v16 + v7 < v16 )
      {
LABEL_31:
        if ( *(int *)&PspResourceFlags[8 * v12 + 4] >= 0 )
          goto LABEL_32;
        ExFreePoolWithTag((PVOID)PoolWithTagFromNode, v5);
        return 0LL;
      }
      if ( v18 <= v17 )
        break;
      if ( (v15 & 1) == 0 || !v14[10] )
        goto LABEL_31;
      v43 = _InterlockedExchange64((volatile __int64 *)v14 + 9, 0LL);
      if ( v43 )
      {
        v17 = v43 + _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 8, v43);
        v15 = v46;
        goto LABEL_14;
      }
      v44 = PspExpandQuota(v12, (__int64)v14, v16, v7, &v47);
      v12 = v49;
      if ( !v44 )
        goto LABEL_31;
      v17 = v47;
      v15 = v46;
    }
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, v18, v16);
    v19 = v16 == v20;
    v16 = v20;
  }
  while ( !v19 );
  _m_prefetchw(v14 + 1);
  v21 = v14[1];
  do
  {
    if ( v18 <= v21 )
      break;
    v42 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 1, v18, v21);
  }
  while ( v21 != v42 );
  if ( Process && (v46 & 4) != 0 )
  {
    v22 = v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v12, v7);
    _m_prefetchw(&Process[1].DeepFreezeStartTime + v12);
    v23 = *(&Process[1].DeepFreezeStartTime + v12);
    do
    {
      if ( v22 <= v23 )
        break;
      v24 = v23;
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v12, v22, v23);
    }
    while ( v23 != v24 );
  }
LABEL_32:
  v28 = 0LL;
  if ( v50 )
  {
    v28 = PoolWithTagFromNode - 16;
    if ( (*(_BYTE *)(PoolWithTagFromNode - 13) & 4) != 0 )
      v28 += -16LL * (unsigned __int8)*(_WORD *)v28;
    if ( (*(_BYTE *)(v28 + 3) & 8) != 0 )
    {
      BugCheckParameter4 = ExpPoolQuotaCookie ^ *(_QWORD *)(v28 + 8) ^ v28;
      *(_QWORD *)(v28 + 8) = (unsigned __int64)Process ^ ExpPoolQuotaCookie ^ v28;
      goto LABEL_37;
    }
    goto LABEL_41;
  }
  v38 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v39 = (PoolBigPageTableSize - 1) & ((40543 * (PoolWithTagFromNode >> 12)) ^ ((40543 * (PoolWithTagFromNode >> 12)) >> 32));
  v40 = 1;
  while ( 1 )
  {
    v41 = (char *)PoolBigPageTable + 32 * v39;
    if ( *(_QWORD *)v41 == PoolWithTagFromNode )
      break;
    if ( ++v39 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v40 )
        goto LABEL_52;
      v39 = 0;
      v40 = 0;
    }
  }
  if ( !v41 )
    goto LABEL_52;
  if ( (*((_DWORD *)v41 + 3) & 0x100) != 0 )
  {
    BugCheckParameter4 = PoolWithTagFromNode ^ ExpPoolQuotaCookie ^ *((_QWORD *)v41 + 3);
    *((_QWORD *)v41 + 3) = PoolWithTagFromNode ^ ExpPoolQuotaCookie ^ (unsigned __int64)Process;
  }
  else
  {
    BugCheckParameter4 = -1LL;
  }
  if ( (BYTE6(PerfGlobalGroupMask[0]) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
  __writecr8(v38);
LABEL_37:
  if ( BugCheckParameter4
    && BugCheckParameter4 != -1LL
    && (BugCheckParameter4 < 0xFFFF800000000000uLL || (*(_BYTE *)BugCheckParameter4 & 0x7F) != 3) )
  {
    if ( v28 )
      v4 = *(_DWORD *)(v28 + 4);
    KeBugCheckEx(0xC2u, 0xDuLL, PoolWithTagFromNode, v4, BugCheckParameter4);
  }
LABEL_41:
  ObfReferenceObjectWithTag(Process, v5);
  return PoolWithTagFromNode;
}
