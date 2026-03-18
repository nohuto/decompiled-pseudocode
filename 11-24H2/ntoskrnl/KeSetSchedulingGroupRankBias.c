/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x14030ED08
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x14030D204 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x14030E6D0 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14030E95C (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14030F768 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceScbRankChange @ 0x1404F7594 (EtwTraceScbRankChange.c)
 *     EtwTraceSchedulingGroup @ 0x14064DF08 (EtwTraceSchedulingGroup.c)
 */

__int64 __fastcall KeSetSchedulingGroupRankBias(__int64 a1, __int64 a2)
{
  char v2; // r13
  __int64 v3; // rbp
  __int64 CurrentIrql; // r14
  unsigned int v5; // esi
  struct _KPRCB *v6; // rdi
  __int64 v7; // rbx
  union _KISOLATION_UNIT_LOCK_HANDLE *v8; // rdx
  int v9; // r15d
  __int16 v10; // r12
  __int64 v11; // r9
  __int64 result; // rax
  int v13; // ecx
  char v14; // r8
  struct _KSCB *v15; // rdx
  __int64 v16; // r8
  _KSCB *Parent; // rax
  struct _SINGLE_LIST_ENTRY *v18; // r9
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  struct _SINGLE_LIST_ENTRY v22; // [rsp+80h] [rbp+18h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h]

  v2 = a2;
  v21 = 0LL;
  v3 = a1;
  v22.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v23 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v5 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v6 = (struct _KPRCB *)KiProcessorBlock[v5];
      v7 = v3 + 440LL * v5 + 128;
      if ( v6 )
        KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[v5], 0, &v21);
      v8 = (union _KISOLATION_UNIT_LOCK_HANDLE *)*(unsigned __int16 *)(v7 + 112);
      v9 = *(_DWORD *)(v7 + 124);
      v10 = *(_WORD *)(v7 + 112) & 2;
      if ( v2 )
        break;
      v13 = v9 - (((unsigned int)v8 >> 3) & 1);
      LOWORD(v8) = (unsigned __int16)v8 & 0xFFF7;
      *(_DWORD *)(v7 + 124) = v13;
      *(_WORD *)(v7 + 112) = (_WORD)v8;
      if ( v13 )
      {
        if ( ((unsigned __int8)v8 & 1) != 0 )
        {
          v14 = 0;
LABEL_25:
          KiResortScbQueue(v6, (struct _KSCB *)(v3 + 440LL * v5 + 128), v14);
        }
LABEL_8:
        if ( v6 )
          goto LABEL_9;
        goto LABEL_10;
      }
      if ( v6 )
      {
        if ( ((unsigned __int8)v8 & 1) == 0 )
        {
LABEL_16:
          *(_WORD *)(v7 + 112) &= ~4u;
LABEL_9:
          KiCheckForEffectivePriorityChange(v6, v8, (struct _KSCB *)(v3 + 440LL * v5 + 128));
          KiReleasePrcbLocksForIsolationUnit(&v21);
          if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0 )
          {
            v16 = *(unsigned int *)(v7 + 124);
            if ( v9 != (_DWORD)v16 || (v11 = 0LL, (v10 != 0) != ((*(_WORD *)(v7 + 112) >> 1) & 1)) )
            {
              LOBYTE(v11) = (*(_BYTE *)(v7 + 112) & 2) != 0;
              EtwTraceScbRankChange(v3, v5, v16, v11, CurrentPrcb);
            }
          }
          goto LABEL_10;
        }
        v15 = (struct _KSCB *)(v3 + 440LL * v5 + 128);
        do
        {
          Parent = v15->Parent;
          if ( !Parent )
            break;
          v15 = v15->Parent;
        }
        while ( !Parent->Rank );
        if ( v15->Rank )
        {
          v18 = 0LL;
        }
        else
        {
          v18 = &v22;
          v15 = 0LL;
        }
        KiMoveScbThreadsToNewReadylist((struct _KSCB *)(v3 + 440LL * v5 + 128), v15, 0LL, v18);
        v19 = *(_QWORD *)(v7 + 400);
        if ( (*(_BYTE *)(v7 + 408) & 1) != 0 )
        {
          if ( v19 )
          {
            v19 ^= v7 + 400;
            goto LABEL_34;
          }
        }
        else
        {
LABEL_34:
          if ( v19 )
            goto LABEL_16;
        }
        KiRemoveSchedulingGroupQueue(v6, (struct _KSCB *)(v3 + 440LL * v5 + 128), 1);
        goto LABEL_16;
      }
LABEL_10:
      if ( ++v5 >= KeMaximumProcessors )
        goto LABEL_11;
    }
    LOWORD(v8) = (unsigned __int16)v8 | 0xC;
    *(_DWORD *)(v7 + 124) = v9 + 1;
    *(_WORD *)(v7 + 112) = (_WORD)v8;
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      v14 = 1;
      goto LABEL_25;
    }
    goto LABEL_8;
  }
LABEL_11:
  *(_DWORD *)(v3 + 4) ^= ((unsigned __int8)*(_DWORD *)(v3 + 4) ^ (unsigned __int8)(4 * v2)) & 4;
  result = KiProcessDeferredReadyList(CurrentPrcb);
  if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0 )
    return EtwTraceSchedulingGroup(v3, 1380LL);
  return result;
}
