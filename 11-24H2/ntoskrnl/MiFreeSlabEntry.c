/*
 * XREFs of MiFreeSlabEntry @ 0x1403533C8
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiFreeSlabEntries @ 0x140354D7C (MiFreeSlabEntries.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x140688670 (MiDeleteSlabEntriesForIdentity.c)
 *     MiEstablishDefragSlabEntries @ 0x14068894C (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403A9C00 (MiUpdateSlabPagePlaceholderState.c)
 *     MiMakeLinkedListPte @ 0x1403F8EF0 (MiMakeLinkedListPte.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x140446A68 (MiTbFlushTimeStampMayNeedFlush.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeSlabEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r15
  unsigned int v5; // r13d
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  _WORD *i; // rax
  __int64 v15; // rcx
  __int64 LinkedListPte; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  signed __int32 v19[22]; // [rsp+0h] [rbp-58h] BYREF
  int v20; // [rsp+60h] [rbp+8h]
  int v21; // [rsp+60h] [rbp+8h]
  unsigned __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  v4 = 0LL;
  v5 = MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3];
  v6 = 0x7FFFFFFFFFLL;
  v23 = 0x7FFFFFFFFFLL;
  v7 = 48LL * *(_QWORD *)(a2 + 40) - 0x220000000000LL;
  v8 = 48LL * *(_QWORD *)(a2 + 48) - 0x220000000000LL;
  if ( v7 <= v8 )
  {
    do
    {
      v9 = (unsigned __int8)BYTE2(*(_DWORD *)(v7 + 32)) >> 6;
      if ( v9 != 1 )
      {
        if ( v9 == 3
          || (v15 = (*(_QWORD *)(v7 + 24) >> 59) & 7LL, ((*(_QWORD *)(v7 + 24) >> 59) & 7) != 0)
          && (_InterlockedOr(v19, 0),
              !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v15, (unsigned int)KiTbFlushTimeStamp, 7LL)) )
        {
          MiChangePageAttribute(v7, 1u);
        }
        else
        {
          LinkedListPte = MiMakeLinkedListPte(v23);
          *(_QWORD *)(v17 + v18) = LinkedListPte;
          v23 = 0xAAAAAAAAAAAAAAABuLL * (v17 >> 4);
        }
      }
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v10);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      if ( !v4 )
        v4 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      v11 = *(_DWORD *)(a1 + 128);
      if ( v11 >= 0 && v11 != 2 && v11 <= 4 )
        MiSetPfnIdentity(v7, 0);
      HIWORD(v20) = HIWORD(*(_DWORD *)(v7 + 32));
      LOWORD(v20) = 2;
      *(_DWORD *)(v7 + 32) = v20;
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 24) & 0xC000000000000000uLL | 1;
      v21 = *(_DWORD *)(v7 + 32);
      BYTE2(v21) = BYTE2(v21) & 0xF8 | 6;
      *(_DWORD *)(v7 + 32) = v21;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 += 48LL;
    }
    while ( v7 <= v8 );
    v6 = v23;
    v3 = a2;
  }
  MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a1 + 128), *(_QWORD *)(v3 + 40), v5, 0LL);
  if ( v6 != 0x7FFFFFFFFFLL )
    MiChangePageAttributeBatch(&v23, 1LL, CLFS_LSN_NULL_EXT, 1LL);
  v12 = *(_QWORD *)(v3 + 40);
  v13 = qword_140E3D280 + 2 * ((v5 + v12 - 1) >> 9);
  for ( i = (_WORD *)(qword_140E3D280 + 2 * (v12 >> 9)); (unsigned __int64)i <= v13; ++i )
    *i = 0;
  MiFreeLargePageMemory(*(_QWORD *)(v3 + 40), (*(_DWORD *)(a1 + 136) >> 4) & 3, 30LL);
  if ( (*(_DWORD *)(v3 + 92) & 2) != 0 )
    MiReleaseNonPagedResources(v4, v5);
  ExFreePoolWithTag((PVOID)v3, 0);
}
