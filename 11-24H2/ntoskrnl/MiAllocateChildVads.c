/*
 * XREFs of MiAllocateChildVads @ 0x140A47718
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiIsVadLargePrivate @ 0x1402903A0 (MiIsVadLargePrivate.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiVadShouldBeForked @ 0x140485458 (MiVadShouldBeForked.c)
 *     MiCloneCaptureVadCommit @ 0x1404A4B08 (MiCloneCaptureVadCommit.c)
 *     MiFreeVadEvents @ 0x1406796AC (MiFreeVadEvents.c)
 *     MiCloneImageVad @ 0x1406922B8 (MiCloneImageVad.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiCloneLargeFileOnlyVad @ 0x1407F03A4 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     MiCreatePlaceholderStorage @ 0x1408DC630 (MiCreatePlaceholderStorage.c)
 *     MiCreateWriteWatchView @ 0x1408DC84C (MiCreateWriteWatchView.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
 *     MiInsertChildVads @ 0x14091A854 (MiInsertChildVads.c)
 *     MiVadHasSharedCommit @ 0x140A47B8C (MiVadHasSharedCommit.c)
 *     MiCloneNoChange @ 0x140A47BE0 (MiCloneNoChange.c)
 *     MiCreateLargePageVad @ 0x140A7D970 (MiCreateLargePageVad.c)
 *     MiFreePlaceholderStorage @ 0x140A91218 (MiFreePlaceholderStorage.c)
 *     MiCloneDiscardVadCommit @ 0x140A96358 (MiCloneDiscardVadCommit.c)
 *     MiFreeVadEventBitmap @ 0x140ABD7CC (MiFreeVadEventBitmap.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  __int64 *v3; // r12
  int v4; // r15d
  _QWORD *j; // rsi
  _QWORD *i; // rax
  _QWORD **v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  int v12; // r8d
  int v13; // r9d
  ULONG_PTR v14; // rdi
  __int64 **Pool; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 **v18; // rbx
  unsigned int *v19; // rdx
  unsigned int v20; // ecx
  int v21; // eax
  int inserted; // edi
  char v24; // al
  int v25; // eax
  _OWORD v26[3]; // [rsp+20h] [rbp-78h] BYREF

  *a2 = 0LL;
  memset(v26, 0, sizeof(v26));
  v3 = 0LL;
  v4 = 0;
  j = 0LL;
  for ( i = *(_QWORD **)&KeGetCurrentThread()->ApcState.Process[3].Header.Lock; i; i = (_QWORD *)*i )
    j = i;
  while ( 1 )
  {
    do
    {
      if ( !j )
        return MiInsertChildVads((_KPROCESS *)BugCheckParameter1, (__int64)v3);
      v8 = (_QWORD **)j[1];
      v9 = (__int64)j;
      v10 = j;
      if ( v8 )
      {
        v11 = *v8;
        for ( j = (_QWORD *)j[1]; v11; v11 = (_QWORD *)*v11 )
          j = v11;
      }
      else
      {
        while ( 1 )
        {
          j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !j || (_QWORD *)*j == v10 )
            break;
          v10 = j;
        }
      }
    }
    while ( !(unsigned int)MiVadShouldBeForked(v9) );
    v12 = *(_DWORD *)(v9 + 48);
    v13 = 1818517846;
    v14 = (-(__int64)((v12 & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136;
    if ( (v12 & 0x200000) == 0 && (v12 & 0x70) == 0x20 && (v12 & 0x400000) != 0 )
    {
      v13 = 1231315286;
      v14 = 8
          * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(v9 + 72) + 8LL) >> 6)
           + ((*(_DWORD *)(***(_QWORD ***)(v9 + 72) + 8LL) & 0x3F) != 0)
           + 21LL);
    }
    Pool = (__int64 **)MiAllocatePool(0x40uLL, v14, v13);
    v18 = Pool;
    if ( !Pool )
    {
      inserted = -1073741670;
      goto LABEL_35;
    }
    memmove(Pool, (const void *)v9, v14);
    v19 = (unsigned int *)(v18 + 6);
    if ( _bittest((const signed __int32 *)(v9 + 48), 0x15u) )
      *v19 &= ~8u;
    else
      v18[14] = (__int64 *)(BugCheckParameter1 | 1);
    *v19 &= ~1u;
    *v19 &= ~2u;
    v18[7] = (__int64 *)((unsigned __int64)v18[7] & 0xF);
    *((_DWORD *)v18 + 9) = 0;
    v18[5] = 0LL;
    v18[1] = 0LL;
    v20 = *v19;
    if ( (*v19 & 0x200000) == 0 && (v20 & 0x70) == 0x20 && (v20 & 0x1800000) != 0 )
      *v19 = v20 & 0xFE7FFFFF;
    v18[2] = (__int64 *)-2LL;
    if ( (unsigned int)MiVadHasSharedCommit(v9) )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD **)(v9 + 72), BugCheckParameter1, 0);
      if ( inserted < 0 )
        goto LABEL_34;
    }
    if ( MiVadPureReserve((__int64)v18)
      && (*((unsigned int *)v18 + 13) | ((unsigned __int64)*((unsigned __int8 *)v18 + 34) << 32)) < 0x7FFFFFFFDLL )
    {
      inserted = MiCloneCaptureVadCommit((__int64)v18);
      if ( inserted < 0 )
        break;
    }
    if ( (*(_DWORD *)(v9 + 48) & 8) != 0 )
    {
      inserted = MiCloneNoChange(v9, v18);
      if ( inserted < 0 )
        goto LABEL_35;
    }
    if ( MiLocateLockedVadEvent(v9, 128) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v26);
      v4 = 1;
      inserted = MiCreatePlaceholderStorage((__int64)v18);
      if ( inserted < 0 )
        goto LABEL_60;
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x600000) == 0x600000 )
    {
      if ( !v4 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v26);
        v4 = 1;
      }
      inserted = MiCreateWriteWatchView(BugCheckParameter1, (__int64)v18);
      if ( inserted < 0 )
        goto LABEL_60;
    }
    if ( MiIsVadLargePrivate(v9) )
    {
      v24 = *(_BYTE *)(v9 + 34);
      *((_DWORD *)v18 + 13) = *(_DWORD *)(v9 + 52);
      *((_BYTE *)v18 + 34) = v24;
      inserted = MiCreateLargePageVad(BugCheckParameter1, v18, 0LL, 1LL);
      if ( inserted < 0 )
        goto LABEL_35;
      ++*a2;
    }
    else
    {
      v21 = *(_DWORD *)(v9 + 48) & 0x70;
      if ( v21 == 32 )
      {
        v25 = MiCloneImageVad(BugCheckParameter1, (__int64)v18, v9);
      }
      else
      {
        if ( v21 != 80 || !*(_QWORD *)(**(_QWORD **)(v9 + 72) + 64LL) )
          goto LABEL_26;
        v25 = MiCloneLargeFileOnlyVad(v9);
      }
      inserted = v25;
      if ( v25 < 0 )
        goto LABEL_35;
    }
LABEL_26:
    if ( v4 )
    {
      KiUnstackDetachProcess((__int64)v26, 0, v16, v17);
      v4 = 0;
    }
    *v18 = v3;
    v3 = (__int64 *)v18;
  }
  if ( (unsigned int)MiVadHasSharedCommit(v18) )
    MiRemoveSharedCommitNode(*v18[9], BugCheckParameter1, 0);
LABEL_34:
  ExFreePoolWithTag(v18, 0);
  v18 = 0LL;
LABEL_35:
  if ( !v4 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v26);
  if ( v18 )
  {
LABEL_60:
    if ( (unsigned int)MiVadHasSharedCommit(v18) )
      MiRemoveSharedCommitNode(*v18[9], BugCheckParameter1, 0);
    MiCloneDiscardVadCommit(v18);
    MiFreeVadEventBitmap(BugCheckParameter1, v18, 4LL);
    MiFreePlaceholderStorage(v18);
    MiFreeVadEvents((__int64)v18);
    ExFreePoolWithTag(v18, 0);
  }
  if ( v3 )
    MiDeletePartialCloneVads(v3);
  KiUnstackDetachProcess((__int64)v26, 0, v16, v17);
  return (unsigned int)inserted;
}
