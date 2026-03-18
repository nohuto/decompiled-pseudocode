/*
 * XREFs of MiAllocateChildVads @ 0x140A40978
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140AB962C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiIsVadLargePrivate @ 0x1402A82E0 (MiIsVadLargePrivate.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     MiVadShouldBeForked @ 0x14048AD48 (MiVadShouldBeForked.c)
 *     MiCloneCaptureVadCommit @ 0x1404B369C (MiCloneCaptureVadCommit.c)
 *     MiFreeVadEvents @ 0x14066CBD0 (MiFreeVadEvents.c)
 *     MiCloneImageVad @ 0x140685D88 (MiCloneImageVad.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiCloneLargeFileOnlyVad @ 0x1407DFF34 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1407F052C (MiDeletePartialCloneVads.c)
 *     MiRemoveSharedCommitNode @ 0x1408B5520 (MiRemoveSharedCommitNode.c)
 *     MiCreatePlaceholderStorage @ 0x1408F9230 (MiCreatePlaceholderStorage.c)
 *     MiCreateWriteWatchView @ 0x1408F944C (MiCreateWriteWatchView.c)
 *     MiInsertSharedCommitNode @ 0x140900A50 (MiInsertSharedCommitNode.c)
 *     MiVadHasSharedCommit @ 0x140A40DEC (MiVadHasSharedCommit.c)
 *     MiCloneNoChange @ 0x140A40E40 (MiCloneNoChange.c)
 *     MiInsertChildVads @ 0x140A40F24 (MiInsertChildVads.c)
 *     MiCreateLargePageVad @ 0x140A7F47C (MiCreateLargePageVad.c)
 *     MiFreePlaceholderStorage @ 0x140A90928 (MiFreePlaceholderStorage.c)
 *     MiCloneDiscardVadCommit @ 0x140A950C8 (MiCloneDiscardVadCommit.c)
 *     MiFreeVadEventBitmap @ 0x140ABE6F4 (MiFreeVadEventBitmap.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 **v16; // rbx
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  int v19; // eax
  int inserted; // edi
  char v22; // al
  int v23; // eax
  _OWORD v24[3]; // [rsp+20h] [rbp-78h] BYREF

  *a2 = 0LL;
  memset(v24, 0, sizeof(v24));
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
        return MiInsertChildVads(BugCheckParameter1, v3);
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
    v16 = Pool;
    if ( !Pool )
    {
      inserted = -1073741670;
      goto LABEL_35;
    }
    memmove(Pool, (const void *)v9, v14);
    v17 = (unsigned int *)(v16 + 6);
    if ( _bittest((const signed __int32 *)(v9 + 48), 0x15u) )
      *v17 &= ~8u;
    else
      v16[14] = (__int64 *)(BugCheckParameter1 | 1);
    *v17 &= ~1u;
    *v17 &= ~2u;
    v16[7] = (__int64 *)((unsigned __int64)v16[7] & 0xF);
    *((_DWORD *)v16 + 9) = 0;
    v16[5] = 0LL;
    v16[1] = 0LL;
    v18 = *v17;
    if ( (*v17 & 0x200000) == 0 && (v18 & 0x70) == 0x20 && (v18 & 0x1800000) != 0 )
      *v17 = v18 & 0xFE7FFFFF;
    v16[2] = (__int64 *)-2LL;
    if ( (unsigned int)MiVadHasSharedCommit(v9) )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD **)(v9 + 72), BugCheckParameter1, 0);
      if ( inserted < 0 )
        goto LABEL_34;
    }
    if ( MiVadPureReserve((__int64)v16)
      && (*((unsigned int *)v16 + 13) | ((unsigned __int64)*((unsigned __int8 *)v16 + 34) << 32)) < 0x7FFFFFFFDLL )
    {
      inserted = MiCloneCaptureVadCommit((__int64)v16);
      if ( inserted < 0 )
        break;
    }
    if ( (*(_DWORD *)(v9 + 48) & 8) != 0 )
    {
      inserted = MiCloneNoChange(v9, v16);
      if ( inserted < 0 )
        goto LABEL_35;
    }
    if ( MiLocateLockedVadEvent(v9, 128) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v24);
      v4 = 1;
      inserted = MiCreatePlaceholderStorage((__int64)v16);
      if ( inserted < 0 )
        goto LABEL_60;
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x600000) == 0x600000 )
    {
      if ( !v4 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v24);
        v4 = 1;
      }
      inserted = MiCreateWriteWatchView(BugCheckParameter1, (__int64)v16);
      if ( inserted < 0 )
        goto LABEL_60;
    }
    if ( MiIsVadLargePrivate(v9) )
    {
      v22 = *(_BYTE *)(v9 + 34);
      *((_DWORD *)v16 + 13) = *(_DWORD *)(v9 + 52);
      *((_BYTE *)v16 + 34) = v22;
      inserted = MiCreateLargePageVad(BugCheckParameter1, v16, 0LL, 1LL);
      if ( inserted < 0 )
        goto LABEL_35;
      ++*a2;
    }
    else
    {
      v19 = *(_DWORD *)(v9 + 48) & 0x70;
      if ( v19 == 32 )
      {
        v23 = MiCloneImageVad(BugCheckParameter1, (__int64)v16, v9);
      }
      else
      {
        if ( v19 != 80 || !*(_QWORD *)(**(_QWORD **)(v9 + 72) + 64LL) )
          goto LABEL_26;
        v23 = MiCloneLargeFileOnlyVad(v9);
      }
      inserted = v23;
      if ( v23 < 0 )
        goto LABEL_35;
    }
LABEL_26:
    if ( v4 )
    {
      KiUnstackDetachProcess((__int64)v24, 0LL);
      v4 = 0;
    }
    *v16 = v3;
    v3 = (__int64 *)v16;
  }
  if ( (unsigned int)MiVadHasSharedCommit(v16) )
    MiRemoveSharedCommitNode(*v16[9], BugCheckParameter1, 0);
LABEL_34:
  ExFreePoolWithTag(v16, 0);
  v16 = 0LL;
LABEL_35:
  if ( !v4 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v24);
  if ( v16 )
  {
LABEL_60:
    if ( (unsigned int)MiVadHasSharedCommit(v16) )
      MiRemoveSharedCommitNode(*v16[9], BugCheckParameter1, 0);
    MiCloneDiscardVadCommit(v16);
    MiFreeVadEventBitmap(BugCheckParameter1, v16, 4LL);
    MiFreePlaceholderStorage(v16);
    MiFreeVadEvents((__int64)v16);
    ExFreePoolWithTag(v16, 0);
  }
  if ( v3 )
    MiDeletePartialCloneVads(v3);
  KiUnstackDetachProcess((__int64)v24, 0LL);
  return (unsigned int)inserted;
}
