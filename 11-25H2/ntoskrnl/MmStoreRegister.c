/*
 * XREFs of MmStoreRegister @ 0x1407ED518
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404AAD80 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 *     KeQueryMaximumGroupCount @ 0x14047F9E0 (KeQueryMaximumGroupCount.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140680478 (MiMoveModifiedPagesToCompressList.c)
 *     MiStoreChargeReservedPages @ 0x140680540 (MiStoreChargeReservedPages.c)
 *     MiStoreReleaseReservedPageCharges @ 0x140680EF4 (MiStoreReleaseReservedPageCharges.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiCreatePagefile @ 0x1407DE100 (MiCreatePagefile.c)
 *     MiDeletePagefile @ 0x1407DF058 (MiDeletePagefile.c)
 *     MiInsertPageFileInList @ 0x1407DF450 (MiInsertPageFileInList.c)
 *     MmStoreCheckPagefiles @ 0x1407ED4D4 (MmStoreCheckPagefiles.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmStoreRegister(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rdi
  __int64 Pool; // rax
  __int64 v9; // rsi
  int inserted; // ebx
  unsigned int *v11; // rbp
  int v12; // r14d
  _RTL_BITMAP *v13; // rax
  _RTL_BITMAP *v14; // r15
  void *v15; // r12
  unsigned int *Pagefile; // rax
  USHORT MaximumGroupCount; // ax
  __int64 v18; // rdx
  __int64 v19; // r8
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v5 = *a1;
  Handle = 0LL;
  *(_DWORD *)(v5 + 1208) = 1;
  if ( (*(_DWORD *)(v5 + 4) & 0x80u) != 0 )
    return 3221225659LL;
  if ( !(unsigned int)MmStoreCheckPagefiles((__int64)a1) )
    return 3221225799LL;
  Pool = MiAllocatePool(0x40uLL, 0x28uLL, 1884581197);
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  *(_QWORD *)Pool = v5;
  KeInitializeEvent((PRKEVENT)(Pool + 8), NotificationEvent, 0);
  *(_DWORD *)(v9 + 32) = 0;
  inserted = PsCreateSystemThreadEx(
               &Handle,
               0x1FFFFFLL,
               0LL,
               *(_QWORD *)(*(_QWORD *)(v5 + 184) + 128LL),
               0LL,
               MiStoreEvictThread,
               v9,
               0LL,
               0LL);
  if ( inserted >= 0 )
  {
    v11 = 0LL;
    v12 = 0;
    v13 = (_RTL_BITMAP *)MiAllocatePool(
                           0x40uLL,
                           8 * (((dword_140FC41FC & 0x3F) != 0) + 2 + ((unsigned int)dword_140FC41FC >> 6)),
                           538996045);
    v14 = v13;
    if ( !v13 )
    {
      *(_DWORD *)(v9 + 32) = 1;
      inserted = -1073741670;
LABEL_29:
      KeSetEvent((PRKEVENT)(v9 + 8), 0, 0);
      ObCloseHandle(Handle, 0);
      return (unsigned int)inserted;
    }
    v13->SizeOfBitMap = dword_140FC41FC;
    v13->Buffer = &v13[1].SizeOfBitMap;
    RtlClearAllBits(v13);
    v15 = (void *)MiAllocatePool(0x40uLL, (unsigned __int64)(unsigned int)dword_140FC41FC << 6, 1767074125);
    if ( v15 && (unsigned int)MiStoreChargeReservedPages(v5) )
    {
      *(_DWORD *)(v5 + 1212) = -2;
      v12 = 1;
      Pagefile = (unsigned int *)MiCreatePagefile(v5, 0LL, 0LL, 0x40000, 0x40000, 0LL, 0, 2);
      v11 = Pagefile;
      if ( !Pagefile )
      {
        *(_DWORD *)(v9 + 32) = 1;
        inserted = -1073741670;
LABEL_17:
        ExFreePoolWithTag(v14, 0);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        if ( v11 )
          MiDeletePagefile((char *)v11, 1);
        if ( v12 )
          MiStoreReleaseReservedPageCharges(v5);
        goto LABEL_29;
      }
      inserted = MiInsertPageFileInList(Pagefile);
      if ( inserted >= 0 )
      {
        inserted = 0;
        ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x66506D4Du, v5 + 1320, 0LL, 0LL);
        *(_QWORD *)(v5 + 1416) = v14;
        *(_QWORD *)(v5 + 1424) = v15;
        *(_DWORD *)(v5 + 1208) = 254;
        *(_QWORD *)(v5 + 1696) = a4;
        if ( (a5 & 1) != 0 )
          *(_DWORD *)(v5 + 1708) |= 1u;
        if ( (a5 & 2) != 0 )
          *(_DWORD *)(v5 + 1708) |= 2u;
        MaximumGroupCount = KeQueryMaximumGroupCount();
        *(_WORD *)(v5 + 1432) = 1;
        *(_WORD *)(v5 + 1434) = MaximumGroupCount;
        *(_DWORD *)(v5 + 1436) = 0;
        memset_0((void *)(v5 + 1440), 0, 8LL * MaximumGroupCount);
        *(_DWORD *)(v5 + 1204) = v11[43] & 0xF;
        MiMoveModifiedPagesToCompressList(v5, v18, v19);
        goto LABEL_29;
      }
    }
    else
    {
      inserted = -1073741670;
    }
    *(_DWORD *)(v9 + 32) = 1;
    goto LABEL_17;
  }
  ExFreePoolWithTag((PVOID)v9, 0);
  return (unsigned int)inserted;
}
