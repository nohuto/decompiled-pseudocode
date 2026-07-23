/*
 * XREFs of CmDeleteLayeredKey @ 0x14040AAA8
 * Callers:
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x1407DB404 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407E17F0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpHashCompressedComponent @ 0x14083F7D0 (CmpHashCompressedComponent.c)
 *     CmpUnlockHashEntryByKcb @ 0x140840720 (CmpUnlockHashEntryByKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14086CA6C (CmpReportNotifyForKcbStack.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14086E850 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpMarkKeyUnbacked @ 0x14087F7A8 (CmpMarkKeyUnbacked.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087FED4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpMarkKeyDirty @ 0x1408839E4 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x140888160 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1409077DC (CmpGetSubKeyCountForKcbStack.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackExclusive @ 0x14090C338 (CmpLockKcbStackExclusive.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 *     CmpInitializeKcbStack @ 0x1409882A0 (CmpInitializeKcbStack.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A144A0 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A14CEC (CmpCleanupDiscardReplaceContext.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A14D64 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpIncrementKcbSequenceNumber @ 0x140A32B9C (CmpIncrementKcbSequenceNumber.c)
 *     CmpInitializeDiscardReplaceContext @ 0x140A41AE4 (CmpInitializeDiscardReplaceContext.c)
 *     CmpFreeKeyValues @ 0x140A6F904 (CmpFreeKeyValues.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r14
  char v6; // r12
  ULONG_PTR v7; // rdi
  __int64 v8; // r15
  int started; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  ULONG_PTR v13; // rdx
  ULONG_PTR v14; // rcx
  __int64 CellFlat; // rax
  __int64 v16; // r14
  unsigned int i; // r15d
  ULONG_PTR v18; // rcx
  ULONG_PTR v19; // rcx
  __int64 v20; // rcx
  __int64 CellPaged; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // ebx
  __int64 KcbInHashEntryByCellIndex; // rax
  __int64 v30; // [rsp+20h] [rbp-59h] BYREF
  __int64 v31; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v32[2]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v33[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v34; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v35[5]; // [rsp+80h] [rbp+7h] BYREF
  int v37; // [rsp+F8h] [rbp+7Fh] BYREF

  v37 = 0;
  memset(v33, 0, sizeof(v33));
  v30 = 0LL;
  memset(v32, 0, sizeof(v32));
  v31 = 0LL;
  v34 = 0LL;
  memset(v35, 0, 32);
  CmpInitializeKcbStack(v33);
  CmpInitializeKcbStack(v32);
  v5 = 0;
  HvpGetCellContextInitialize(&v31);
  HvpGetCellContextInitialize(&v30);
  CmpInitializeDiscardReplaceContext(v35);
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(v7 + 72);
    if ( (*(_DWORD *)(v7 + 184) & 0x80000) != 0 )
      break;
    started = CmpStartKcbStackForTopLayerKcb(v33, *(_QWORD *)(a1 + 8));
    if ( started < 0 )
      goto LABEL_21;
    started = CmpStartKcbStackForTopLayerKcb(v32, v8);
    if ( started < 0 )
      goto LABEL_21;
    CmpLockHashEntryExclusiveByKcb(v7);
    CmpLockKcbStackTopExclusiveRestShared(v32);
    CmpLockKcbStackExclusive(v33);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      started = 0;
      goto LABEL_19;
    }
    started = CmpGetSubKeyCountForKcbStack(v33, v10, &v37);
    if ( started < 0 )
      goto LABEL_19;
    if ( v37 )
    {
      started = -1073741535;
      goto LABEL_19;
    }
    v12 = *(_QWORD *)(v7 + 192);
    if ( v12 && *(_QWORD *)(v12 + 32) != v12 + 32 )
    {
      if ( !v5 )
      {
        CmpUnlockKcbStack(v33);
        CmpUnlockKcbStack(v32);
        CmpUnlockHashEntryByKcb(v7);
        goto LABEL_27;
      }
      v6 = 1;
      started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, v35);
      if ( started < 0 )
        goto LABEL_19;
    }
    v13 = *(unsigned int *)(v7 + 40);
    if ( (_DWORD)v13 == -1 )
    {
      if ( *(_DWORD *)(v8 + 40) != -1 )
        goto LABEL_46;
      CmpUnlockKcbStack(v33);
      CmpUnlockKcbStack(v32);
      v23 = CmpPromoteKey(v32, 0LL, 0LL);
      started = v23;
      if ( v23 == -1073741444 )
      {
        started = 0;
        goto LABEL_20;
      }
      if ( v23 < 0 )
        goto LABEL_20;
      if ( v5 )
      {
        CmpLockKcbStackTopExclusiveRestShared(v32);
        CmpLockKcbStackExclusive(v33);
LABEL_46:
        started = CmpCreateTombstone(v11, v33);
        if ( started >= 0 )
        {
          CmpReportNotifyForKcbStack(v32, 0LL, 1LL, a2);
          CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v7, v24, a3, 0LL);
          CmpFlushNotifiesOnKeyBodyList(v7, 8LL, a3);
          if ( v6 )
          {
            CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, v35, a3);
          }
          else
          {
            CmpMarkKeyUnbacked(v7, a3);
            CmpDiscardKcb(v7);
          }
          started = 0;
        }
LABEL_19:
        CmpUnlockKcbStack(v33);
        CmpUnlockKcbStack(v32);
LABEL_20:
        CmpUnlockHashEntryByKcb(v7);
        goto LABEL_21;
      }
      CmpUnlockHashEntryByKcb(v7);
      CmpCleanupKcbStack(v32);
      CmpInitializeKcbStack(v32);
      CmpCleanupKcbStack(v33);
      CmpInitializeKcbStack(v33);
    }
    else
    {
      if ( v5 )
      {
        v14 = *(_QWORD *)(v7 + 32);
        if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v14, v13);
        else
          CellFlat = HvpGetCellPaged(v14);
        v16 = CellFlat;
        for ( i = 0; ; ++i )
        {
          v18 = *(_QWORD *)(v7 + 32);
          if ( i >= *(_DWORD *)(v16 + 24) + *(_DWORD *)(v16 + 20) )
            break;
          started = CmpFindSubKeyByNumber(v18);
          if ( started < 0 )
            goto LABEL_17;
          started = CmpMarkKeyDirty(*(_QWORD *)(v7 + 32), 0LL);
          if ( started < 0 )
            goto LABEL_17;
        }
        started = CmpMarkKeyDirty(v18, *(unsigned int *)(v7 + 40));
        if ( started >= 0 )
        {
          while ( 1 )
          {
            CmpFindSubKeyByNumber(*(_QWORD *)(v7 + 32));
            v19 = *(_QWORD *)(v7 + 32);
            if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
              CellPaged = HvpGetCellFlat(v19, 0LL);
            else
              CellPaged = HvpGetCellPaged(v19);
            v25 = *(unsigned __int16 *)(CellPaged + 72);
            if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
            {
              v26 = CmpHashCompressedComponent(CellPaged + 76, v25);
            }
            else
            {
              *((_QWORD *)&v34 + 1) = CellPaged + 76;
              LOWORD(v34) = v25;
              WORD1(v34) = v25;
              v26 = CmpHashUnicodeComponent(&v34);
            }
            v27 = *(_QWORD *)(v7 + 32);
            v28 = v26;
            if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v27, &v30);
            else
              HvpReleaseCellPaged(v27, &v30);
            KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(
                                          *(_QWORD *)(v7 + 32),
                                          (unsigned int)(v28 + 37 * *(_DWORD *)(v7 + 16)),
                                          0LL);
            if ( KcbInHashEntryByCellIndex )
              *(_DWORD *)(KcbInHashEntryByCellIndex + 40) = -1;
            CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), 0LL);
          }
        }
LABEL_17:
        v20 = *(_QWORD *)(v7 + 32);
        if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v20, &v31);
        else
          HvpReleaseCellPaged(v20, &v31);
        goto LABEL_19;
      }
      CmpUnlockKcbStack(v33);
      CmpUnlockKcbStack(v32);
      CmpUnlockHashEntryByKcb(v7);
      CmpCleanupDiscardReplaceContext(v35, a3);
      CmpDrainDelayDerefContext(a3, 0LL);
LABEL_27:
      CmpUnlockRegistry();
      CmpCleanupKcbStack(v32);
      CmpInitializeKcbStack(v32);
      CmpCleanupKcbStack(v33);
      CmpInitializeKcbStack(v33);
      CmpLockRegistryExclusive();
      v5 = 1;
    }
  }
  started = -1073741535;
LABEL_21:
  CmpCleanupDiscardReplaceContext(v35, a3);
  CmpCleanupKcbStack(v33);
  CmpCleanupKcbStack(v32);
  return (unsigned int)started;
}
