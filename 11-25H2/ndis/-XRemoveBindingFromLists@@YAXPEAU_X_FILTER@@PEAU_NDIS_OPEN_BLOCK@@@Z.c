/*
 * XREFs of ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140042FB0
 * Callers:
 *     ?EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140085F90 (-EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140087050 (-nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14018B420 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x140043220 (NdisAcquireRWLockWrite.c)
 */

void __fastcall XRemoveBindingFromLists(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_RW_LOCK_EX *BindListLock; // rcx
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  _X_FILTER *EthDB; // rcx
  struct _X_FILTER *i; // rcx
  struct _NDIS_OPEN_BLOCK *OpenList; // rax
  _NDIS_OPEN_BLOCK **j; // rcx
  struct _NDIS_OPEN_BLOCK *v10; // rax
  _NDIS_OPEN_BLOCK **k; // rcx
  struct _NDIS_OPEN_BLOCK *v12; // rax
  unsigned int v13; // r9d
  unsigned int NumEntries; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r10d
  unsigned int v17; // edx
  _NDIS_FRAME_TYPE_AND_OPEN *v18; // r8
  _NDIS_FRAME_TYPE_AND_OPEN v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  BindListLock = a1->BindListLock;
  LockState.Flags = 0;
  NdisAcquireRWLockWrite(BindListLock, &LockState, 0);
  if ( a1->SingleActiveOpen == a2 )
  {
    Miniport = a1->Miniport;
    a1->SingleActiveOpen = 0LL;
    EthDB = Miniport->EthDB;
    if ( EthDB && EthDB->SingleActiveOpen || !Miniport->LoopbackOpens || Miniport->NumOpens <= 1u )
      Miniport->Flags &= ~0x4000u;
    else
      Miniport->Flags |= 0x4000u;
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
  for ( j = &a1->NoFTypeOpenList; ; j = &v10->FilterNextOpen )
  {
    v10 = *j;
    if ( !*j )
      break;
    if ( v10 == a2 )
    {
      *j = a2->FilterNextOpen;
      --a1->NumNoETypeOpens;
      break;
    }
  }
  for ( k = &a1->FTypeOpenList; ; k = &v12->FilterNextOpen )
  {
    v12 = *k;
    if ( !*k )
      break;
    if ( v12 == a2 )
    {
      *k = a2->FilterNextOpen;
      break;
    }
  }
  a2->FilterNextOpen = 0LL;
  v13 = 0;
  --a1->NumOpens;
  NumEntries = a1->FrameTypeRecord.NumEntries;
  if ( NumEntries )
  {
    do
    {
      v15 = NumEntries;
      if ( a1->FrameTypeRecord.Entry[v13].Open == a2 )
      {
        v16 = v13 + 1;
        do
        {
          v17 = v13;
          if ( v16 < NumEntries )
          {
            v18 = &a1->FrameTypeRecord.Entry[v16];
            do
            {
              v19 = *v18++;
              v20 = v17++;
              a1->FrameTypeRecord.Entry[v20] = v19;
            }
            while ( v17 + 1 < NumEntries );
          }
          v21 = v17;
          a1->FrameTypeRecord.Entry[v21].Type = 0;
          a1->FrameTypeRecord.Entry[v21].Open = 0LL;
          v15 = a1->FrameTypeRecord.NumEntries - 1;
          a1->FrameTypeRecord.NumEntries = v15;
          NumEntries = v15;
        }
        while ( a1->FrameTypeRecord.Entry[v13].Open == a2 );
      }
      ++v13;
      NumEntries = v15;
    }
    while ( v13 < v15 );
  }
  NdisReleaseRWLock(a1->BindListLock, &LockState);
}
