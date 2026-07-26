/*
 * XREFs of ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003FB00
 * Callers:
 *     ?EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003EBB0 (-EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14003F550 (-nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017E480 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x14003FCA0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x14003FD30 (NdisAcquireRWLockWrite.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003FE10 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall XRemoveBindingFromLists(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_RW_LOCK_EX *BindListLock; // rcx
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  struct _X_FILTER *i; // rcx
  struct _NDIS_OPEN_BLOCK *OpenList; // rax
  _NDIS_OPEN_BLOCK **j; // rcx
  struct _NDIS_OPEN_BLOCK *v9; // rax
  _NDIS_OPEN_BLOCK **k; // rcx
  struct _NDIS_OPEN_BLOCK *v11; // rax
  unsigned int v12; // r9d
  unsigned int NumEntries; // ecx
  unsigned int v14; // eax
  unsigned int v15; // r10d
  unsigned int v16; // edx
  _NDIS_FRAME_TYPE_AND_OPEN *v17; // r8
  _NDIS_FRAME_TYPE_AND_OPEN v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  BindListLock = a1->BindListLock;
  LockState.Flags = 0;
  NdisAcquireRWLockWrite(BindListLock, &LockState, 0);
  if ( a1->SingleActiveOpen == a2 )
  {
    Miniport = a1->Miniport;
    a1->SingleActiveOpen = 0LL;
    ndisUpdateCheckForLoopbackFlag(Miniport);
  }
  for ( i = a1; ; i = (struct _X_FILTER *)&OpenList->FilterNextOpen )
  {
    OpenList = i->OpenList;
    if ( !i->OpenList )
      break;
    if ( OpenList == a2 )
    {
      i->OpenList = a2->FilterNextOpen;
      break;
    }
  }
  for ( j = &a1->NoFTypeOpenList; ; j = &v9->FilterNextOpen )
  {
    v9 = *j;
    if ( !*j )
      break;
    if ( v9 == a2 )
    {
      *j = a2->FilterNextOpen;
      --a1->NumNoETypeOpens;
      break;
    }
  }
  for ( k = &a1->FTypeOpenList; ; k = &v11->FilterNextOpen )
  {
    v11 = *k;
    if ( !*k )
      break;
    if ( v11 == a2 )
    {
      *k = a2->FilterNextOpen;
      break;
    }
  }
  a2->FilterNextOpen = 0LL;
  v12 = 0;
  --a1->NumOpens;
  NumEntries = a1->FrameTypeRecord.NumEntries;
  if ( NumEntries )
  {
    do
    {
      v14 = NumEntries;
      if ( a1->FrameTypeRecord.Entry[v12].Open == a2 )
      {
        v15 = v12 + 1;
        do
        {
          v16 = v12;
          if ( v15 < NumEntries )
          {
            v17 = &a1->FrameTypeRecord.Entry[v15];
            do
            {
              v18 = *v17++;
              v19 = v16++;
              a1->FrameTypeRecord.Entry[v19] = v18;
            }
            while ( v16 + 1 < NumEntries );
          }
          v20 = v16;
          a1->FrameTypeRecord.Entry[v20].Type = 0;
          a1->FrameTypeRecord.Entry[v20].Open = 0LL;
          v14 = a1->FrameTypeRecord.NumEntries - 1;
          a1->FrameTypeRecord.NumEntries = v14;
          NumEntries = v14;
        }
        while ( a1->FrameTypeRecord.Entry[v12].Open == a2 );
      }
      ++v12;
      NumEntries = v14;
    }
    while ( v12 < v14 );
  }
  NdisReleaseRWLock(a1->BindListLock, &LockState);
}
