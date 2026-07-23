/*
 * XREFs of MiManageUltraSpacePageTable @ 0x140352F3C
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiDeleteUltraMapContext @ 0x140352DF0 (MiDeleteUltraMapContext.c)
 *     MiReuseUltraPageTable @ 0x1404622AC (MiReuseUltraPageTable.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExFlushTb @ 0x1402A1EA4 (ExFlushTb.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiFlushAddressSpaceTb @ 0x14039E4BC (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x14039EFB4 (KxFlushEntireTb.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiManageUltraSpacePageTable(__int64 *a1, unsigned int a2, int a3)
{
  int v5; // r13d
  __int64 v6; // rdi
  __int64 **v7; // rbx
  volatile LONG *v8; // rcx
  __int64 v9; // r9
  int v10; // r15d
  __int64 v11; // r8
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 **v16; // rax
  __int64 **v17; // rcx
  int v18; // ecx
  _QWORD **v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rbp
  __int64 *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rax
  __int64 *v30; // rdx
  unsigned __int64 v31; // r14
  __int64 *v32; // rbx
  __int64 *v33; // rbx
  __int64 v34; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v36; // rdx
  signed __int32 v37[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+20h] [rbp-48h]
  KIRQL v39; // [rsp+78h] [rbp+10h]
  int v40; // [rsp+88h] [rbp+20h]

  v40 = *(_DWORD *)(qword_140E38E70 + 4);
  v5 = 0;
  v38 = *(_QWORD *)(qword_140E2DC38 + 384LL * ((a2 >> 9) & 0x3F) + 376);
  v6 = v38 + 648;
  v7 = (__int64 **)(v38 + 776);
  v8 = (volatile LONG *)(v38 + 808);
  if ( KeGetCurrentIrql() == 2 )
  {
    v39 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  else
  {
    v39 = ExAcquireSpinLockExclusive(v8);
  }
  _InterlockedOr(v37, 0);
  v10 = KiTbFlushTimeStamp;
  v11 = 8LL;
  v12 = 0;
  v13 = KiTbFlushTimeStamp & 3;
  do
  {
    v14 = *(_QWORD *)(v6 + 16);
    if ( v14 )
    {
      v18 = *(_DWORD *)(v6 + 24);
      if ( (unsigned int)(v10 - v18) <= 2 && ((v18 & 1) != 0 || (unsigned int)(v10 - v18) < 2) )
      {
        if ( v40 && !v5 && v14 >= 8 )
        {
          KeFlushTb(2LL, 1LL, 8LL);
          v5 = 1;
          --v12;
          v6 -= 32LL;
          v11 = 8LL;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = *(_QWORD *)(v6 + 8);
        **(_QWORD **)(v6 + 8) = *(_QWORD *)v6;
        v19 = *(_QWORD ***)v6;
        v20 = v7[1];
        if ( (__int64 **)(*v7)[1] != v7
          || (__int64 **)*v20 != v7
          || (_QWORD **)(*v19)[1] != v19
          || (_QWORD **)*v19[1] != v19 )
        {
          goto LABEL_10;
        }
        *v20 = (__int64)v19;
        v7[1] = v19[1];
        *v19[1] = v7;
        v19[1] = v20;
        v7[2] = (__int64 *)((char *)v7[2] + *(_QWORD *)(v6 + 16));
        *(_QWORD *)(v6 + 8) = v6;
        *(_QWORD *)v6 = v6;
        *(_QWORD *)(v6 + 16) = 0LL;
      }
    }
    ++v12;
    v6 += 32LL;
  }
  while ( v12 < 4 );
  if ( a3 )
  {
    if ( (a3 & 2) != 0 )
    {
      v15 = v38;
      v16 = v7;
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
      LOBYTE(v9) = 1;
      LOBYTE(v11) = 1;
      KiFlushAddressSpaceTb(0LL, 0LL, v11, v9);
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
        LOBYTE(v34) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v34, 15LL);
      }
      ExFlushTb(0, 0LL, 2);
      if ( KiIrqlFlags )
      {
        LOBYTE(v36) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v36);
      }
      __writecr8(CurrentIrql);
    }
    v15 = v38;
    goto LABEL_32;
  }
  v15 = v38;
  v16 = (__int64 **)(v38 + 32LL * v13 + 648);
  if ( !v16[2] )
    *((_DWORD *)v16 + 6) = v10;
LABEL_9:
  v17 = (__int64 **)v16[1];
  if ( *v17 != (__int64 *)v16 )
    goto LABEL_10;
  *a1 = (__int64)v16;
  a1[1] = (__int64)v17;
  *v17 = a1;
  v16[1] = a1;
  a1 = 0LL;
  v16[2] = (__int64 *)((char *)v16[2] + 1);
  if ( !a3 && v7[2] )
  {
    a1 = *v7;
    v21 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v21 + 8) != a1 )
      goto LABEL_10;
    *v7 = (__int64 *)v21;
    *(_QWORD *)(v21 + 8) = v7;
    v7[2] = (__int64 *)((char *)v7[2] - 1);
  }
LABEL_32:
  v22 = 256LL;
  if ( (unsigned __int64)v7[2] <= 0x100 || !a3 )
  {
    v23 = 0LL;
    v24 = 0LL;
    goto LABEL_34;
  }
  v24 = *v7;
  if ( v40 )
  {
    *v7 = (__int64 *)v7;
    v30 = (__int64 *)v7;
    v22 = 0LL;
    goto LABEL_45;
  }
  v29 = 256LL;
  do
  {
    v24 = (__int64 *)*v24;
    --v29;
  }
  while ( v29 );
  v30 = (__int64 *)v24[1];
  if ( *(__int64 **)(*v24 + 8) != v24 || (__int64 *)*v30 != v24 )
LABEL_10:
    __fastfail(3u);
  *v30 = (__int64)v7;
LABEL_45:
  v7[1] = v30;
  v23 = (unsigned __int64)&v7[2][v22 / 0xFFFFFFFFFFFFFFF8uLL];
  v7[2] = (__int64 *)v22;
LABEL_34:
  MiReleaseSpinLockExclusive((_DWORD *)(v15 + 808), v39);
  if ( v24 )
  {
    if ( v23 )
    {
      v31 = v23;
      if ( v39 == 2 )
      {
        do
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v24 + 0x44000000000LL) >> 4));
          v33 = (__int64 *)*v24;
          MiReleaseFreshPageAtDpc((__int64)v24, v25, v26, v27);
          v24 = v33;
          --v31;
        }
        while ( v31 );
      }
      else
      {
        do
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v24 + 0x44000000000LL) >> 4));
          v32 = (__int64 *)*v24;
          MiReleaseFreshPage((__int64)v24);
          v24 = v32;
          --v31;
        }
        while ( v31 );
      }
    }
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, v23);
  }
  if ( a1 )
    return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  else
    return -1LL;
}
