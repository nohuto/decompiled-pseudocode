/*
 * XREFs of MiFreeSlabEntry @ 0x1403B6480
 * Callers:
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiFreeSlabEntries @ 0x1403B5608 (MiFreeSlabEntries.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x14067BCB0 (MiDeleteSlabEntriesForIdentity.c)
 *     MiEstablishDefragSlabEntries @ 0x14067BF8C (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403B79B4 (MiUpdateSlabPagePlaceholderState.c)
 *     MiMakeLinkedListPte @ 0x1403B7F30 (MiMakeLinkedListPte.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14044FFB8 (MiTbFlushTimeStampMayNeedFlush.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeSlabEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  unsigned int v6; // r13d
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r9
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  _WORD *i; // rax
  __int64 v17; // rcx
  __int64 LinkedListPte; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  signed __int32 v21[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+60h] [rbp+8h]
  int v24; // [rsp+60h] [rbp+8h]
  unsigned __int64 v26; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  v5 = 0LL;
  v6 = MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3];
  v7 = 0x7FFFFFFFFFLL;
  v26 = 0x7FFFFFFFFFLL;
  v8 = 48LL * *(_QWORD *)(a2 + 40) - 0x220000000000LL;
  v9 = 48LL * *(_QWORD *)(a2 + 48) - 0x220000000000LL;
  if ( v8 <= v9 )
  {
    v10 = 0xFFFFDE0000000010uLL;
    do
    {
      v11 = (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6;
      if ( v11 != 1 )
      {
        if ( v11 == 3
          || (v17 = (*(_QWORD *)(v8 + 24) >> 59) & 7LL, ((*(_QWORD *)(v8 + 24) >> 59) & 7) != 0)
          && (_InterlockedOr(v21, 0),
              !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v17, (unsigned int)KiTbFlushTimeStamp, 7LL)) )
        {
          MiChangePageAttribute(v8, 1);
        }
        else
        {
          LinkedListPte = MiMakeLinkedListPte(v26, v8 + 0x220000000000LL, a3, v10, v22);
          *(_QWORD *)(v19 + v20) = LinkedListPte;
          v26 = 0xAAAAAAAAAAAAAAABuLL * (v19 >> 4);
        }
      }
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      if ( !v5 )
        v5 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
      v13 = *(_DWORD *)(a1 + 128);
      if ( v13 >= 0 && v13 != 2 && v13 <= 4 )
        MiSetPfnIdentity(v8, 0);
      HIWORD(v23) = HIWORD(*(_DWORD *)(v8 + 32));
      LOWORD(v23) = 2;
      *(_DWORD *)(v8 + 32) = v23;
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
      v24 = *(_DWORD *)(v8 + 32);
      BYTE2(v24) = BYTE2(v24) & 0xF8 | 6;
      *(_DWORD *)(v8 + 32) = v24;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 += 48LL;
      v10 = 0xFFFFDE0000000010uLL;
    }
    while ( v8 <= v9 );
    v7 = v26;
    v4 = a2;
  }
  MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a1 + 128), *(_QWORD *)(v4 + 40), v6, 0LL);
  if ( v7 != 0x7FFFFFFFFFLL )
    MiChangePageAttributeBatch(&v26, 1LL, CLFS_LSN_NULL_EXT, 1LL);
  v14 = *(_QWORD *)(v4 + 40);
  v15 = qword_140E3CF00 + 2 * ((v6 + v14 - 1) >> 9);
  for ( i = (_WORD *)(qword_140E3CF00 + 2 * (v14 >> 9)); (unsigned __int64)i <= v15; ++i )
    *i = 0;
  MiFreeLargePageMemory(*(_QWORD *)(v4 + 40), (*(_DWORD *)(a1 + 136) >> 4) & 3, 0x1Eu);
  if ( (*(_DWORD *)(v4 + 92) & 2) != 0 )
    MiReleaseNonPagedResources(v5, v6);
  ExFreePoolWithTag((PVOID)v4, 0);
}
