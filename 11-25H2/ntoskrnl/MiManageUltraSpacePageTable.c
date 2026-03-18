/*
 * XREFs of MiManageUltraSpacePageTable @ 0x140450E6C
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiReuseUltraPageTable @ 0x140450BD4 (MiReuseUltraPageTable.c)
 *     MiDeleteUltraMapContext @ 0x140450D20 (MiDeleteUltraMapContext.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     KiFlushAddressSpaceTb @ 0x14026F6A0 (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x14027043C (KxFlushEntireTb.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     ExFlushTb @ 0x1403FA11C (ExFlushTb.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiManageUltraSpacePageTable(__int64 *a1, unsigned int a2, int a3)
{
  int v5; // r13d
  __int64 v6; // rdi
  __int64 **v7; // rbx
  volatile LONG *v8; // rcx
  int v9; // r15d
  __int64 v10; // r8
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 **v15; // rax
  __int64 **v16; // rcx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  __int64 *v21; // rdi
  __int64 v23; // rax
  __int64 *v24; // rdx
  unsigned __int64 v25; // r14
  __int64 *v26; // rbx
  _QWORD **v27; // rcx
  __int64 *v28; // rdx
  __int64 *v29; // rbx
  __int64 v30; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v32; // rdx
  signed __int32 v33[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+20h] [rbp-48h]
  KIRQL v35; // [rsp+78h] [rbp+10h]
  int v36; // [rsp+88h] [rbp+20h]

  v36 = *(_DWORD *)(qword_140E38AF0 + 4);
  v5 = 0;
  v34 = *(_QWORD *)(qword_140E2D8B8 + 384LL * ((a2 >> 9) & 0x3F) + 376);
  v6 = v34 + 648;
  v7 = (__int64 **)(v34 + 776);
  v8 = (volatile LONG *)(v34 + 808);
  if ( KeGetCurrentIrql() == 2 )
  {
    v35 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  else
  {
    v35 = ExAcquireSpinLockExclusive(v8);
  }
  _InterlockedOr(v33, 0);
  v9 = KiTbFlushTimeStamp;
  v10 = 8LL;
  v11 = 0;
  v12 = KiTbFlushTimeStamp & 3;
  do
  {
    v13 = *(_QWORD *)(v6 + 16);
    if ( v13 )
    {
      v17 = *(_DWORD *)(v6 + 24);
      if ( (unsigned int)(v9 - v17) <= 2 && ((v17 & 1) != 0 || (unsigned int)(v9 - v17) < 2) )
      {
        if ( v36 && !v5 && v13 >= 8 )
        {
          KeFlushTb(2u, 1u);
          v5 = 1;
          --v11;
          v6 -= 32LL;
          v10 = 8LL;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = *(_QWORD *)(v6 + 8);
        **(_QWORD **)(v6 + 8) = *(_QWORD *)v6;
        v27 = *(_QWORD ***)v6;
        v28 = v7[1];
        if ( (__int64 **)(*v7)[1] != v7
          || (__int64 **)*v28 != v7
          || (_QWORD **)(*v27)[1] != v27
          || (_QWORD **)*v27[1] != v27 )
        {
          goto LABEL_10;
        }
        *v28 = (__int64)v27;
        v7[1] = v27[1];
        *v27[1] = v7;
        v27[1] = v28;
        v7[2] = (__int64 *)((char *)v7[2] + *(_QWORD *)(v6 + 16));
        *(_QWORD *)(v6 + 8) = v6;
        *(_QWORD *)v6 = v6;
        *(_QWORD *)(v6 + 16) = 0LL;
      }
    }
    ++v11;
    v6 += 32LL;
  }
  while ( v11 < 4 );
  if ( a3 )
  {
    if ( (a3 & 2) != 0 )
    {
      v14 = v34;
      v15 = v7;
      goto LABEL_9;
    }
  }
  else if ( !v7[2] )
  {
    if ( (HvlEnlightenments & 4) != 0
      && ((HvlEnlightenments & 2) != 0
       || (HvlEnlightenments & 0x800000) != 0 && !KiFlushPcid
       || (_DWORD)KeNumberProcessors_0 != 1) )
    {
      LOBYTE(v10) = 1;
      KiFlushAddressSpaceTb(0LL, 0LL, v10, 1);
    }
    else
    {
      KxFlushEntireTb(1LL);
    }
    if ( ExTbFlushActive )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v30) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v30);
      }
      ExFlushTb(0, 0LL, 2);
      if ( KiIrqlFlags )
      {
        LOBYTE(v32) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
      }
      __writecr8(CurrentIrql);
    }
    v14 = v34;
    goto LABEL_27;
  }
  v14 = v34;
  v15 = (__int64 **)(v34 + 32LL * v12 + 648);
  if ( !v15[2] )
    *((_DWORD *)v15 + 6) = v9;
LABEL_9:
  v16 = (__int64 **)v15[1];
  if ( *v16 != (__int64 *)v15 )
    goto LABEL_10;
  *a1 = (__int64)v15;
  a1[1] = (__int64)v16;
  *v16 = a1;
  v15[1] = a1;
  a1 = 0LL;
  v15[2] = (__int64 *)((char *)v15[2] + 1);
  if ( !a3 && v7[2] )
  {
    a1 = *v7;
    v18 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v18 + 8) != a1 )
      goto LABEL_10;
    *v7 = (__int64 *)v18;
    *(_QWORD *)(v18 + 8) = v7;
    v7[2] = (__int64 *)((char *)v7[2] - 1);
  }
LABEL_27:
  v19 = 256LL;
  if ( (unsigned __int64)v7[2] <= 0x100 || !a3 )
  {
    v20 = 0LL;
    v21 = 0LL;
    goto LABEL_29;
  }
  v21 = *v7;
  if ( v36 )
  {
    *v7 = (__int64 *)v7;
    v24 = (__int64 *)v7;
    v19 = 0LL;
    goto LABEL_40;
  }
  v23 = 256LL;
  do
  {
    v21 = (__int64 *)*v21;
    --v23;
  }
  while ( v23 );
  v24 = (__int64 *)v21[1];
  if ( *(__int64 **)(*v21 + 8) != v21 || (__int64 *)*v24 != v21 )
LABEL_10:
    __fastfail(3u);
  *v24 = (__int64)v7;
LABEL_40:
  v7[1] = v24;
  v20 = (unsigned __int64)&v7[2][v19 / 0xFFFFFFFFFFFFFFF8uLL];
  v7[2] = (__int64 *)v19;
LABEL_29:
  MiReleaseSpinLockExclusive((_DWORD *)(v14 + 808), v35);
  if ( v21 )
  {
    if ( v20 )
    {
      v25 = v20;
      if ( v35 == 2 )
      {
        do
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v21 + 0x44000000000LL) >> 4));
          v29 = (__int64 *)*v21;
          MiReleaseFreshPageAtDpc((__int64)v21);
          v21 = v29;
          --v25;
        }
        while ( v25 );
      }
      else
      {
        do
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v21 + 0x44000000000LL) >> 4));
          v26 = (__int64 *)*v21;
          MiReleaseFreshPage((__int64)v21);
          v21 = v26;
          --v25;
        }
        while ( v25 );
      }
    }
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, v20);
  }
  if ( a1 )
    return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  else
    return -1LL;
}
