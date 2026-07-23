/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x140498780
 * Callers:
 *     PspIumReplenishPartitionPages @ 0x140498624 (PspIumReplenishPartitionPages.c)
 *     PspIumAllocatePartitionState @ 0x1405E37E8 (PspIumAllocatePartitionState.c)
 * Callees:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14021D558 (MiIsPfnFromChargedSlabAllocation.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiPartitionObjectToPartition @ 0x1403945BC (MiPartitionObjectToPartition.c)
 *     MiInitializeMdlPfn @ 0x1403954E8 (MiInitializeMdlPfn.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(ULONG **a1, int a2, unsigned int *a3, __int64 *a4)
{
  int v5; // r15d
  ULONG *v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  __int64 v10; // r12
  unsigned __int32 v11; // edx
  unsigned int v12; // ebx
  __int64 SlabPage; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 Page; // r14
  __int64 v18; // r13
  __int64 v19; // rbx
  unsigned int v20; // r15d
  bool v21; // zf
  _BYTE v22[4]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-64h]
  unsigned int v24; // [rsp+38h] [rbp-60h]
  __int64 CurrentIrql; // [rsp+40h] [rbp-58h]
  __int128 v26; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int8 v28; // [rsp+B0h] [rbp+18h]

  v22[0] = 0;
  v5 = a2;
  v26 = 0LL;
  v6 = MiPartitionObjectToPartition(a1, 1, v22);
  v7 = (__int64)v6;
  if ( v5 && (int)MiAcquireNonPagedResources(v6, *a3, 0LL, 2LL) < 0 )
    *a3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v23 = (_BYTE)CurrentIrql == 2;
  v8 = 22;
  if ( (_BYTE)CurrentIrql != 2 )
    v8 = 6;
  v24 = v8;
  v9 = 0;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v26);
  if ( *a3 )
  {
    v10 = (*((_QWORD *)&v26 + 1) >> 16) & 3LL;
    while ( 1 )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v26, 1u) % (unsigned int)dword_140E2DD00[v10];
      v12 = DWORD2(v26) ^ (unsigned __int8)(BYTE8(v26) ^ v11);
      if ( (*(_DWORD *)(v7 + 4) & 8) == 0 )
        break;
      SlabPage = MiGetSlabPage(v7, 2, v12, v8, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
      Page = SlabPage;
      v18 = 9LL;
      if ( SlabPage != -1 )
      {
        v18 = 11LL;
        if ( (unsigned int)MiIsPfnFromChargedSlabAllocation(48 * SlabPage - 0x220000000000LL) )
          v18 = 15LL;
      }
      if ( Page == -1 )
        goto LABEL_15;
LABEL_16:
      v19 = 48 * Page - 0x220000000000LL;
      *(_QWORD *)v19 = 0LL;
      *(_QWORD *)(v19 + 16) = CLFS_LSN_NULL_EXT;
      *(_QWORD *)(v19 + 40) &= ~0x8000000000000000uLL;
      if ( !v5 )
        _InterlockedIncrement64((volatile signed __int64 *)(v7 + 432));
      if ( (_BYTE)CurrentIrql == 2 )
      {
        v28 = 17;
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v20);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v19 + 24) < 0 );
        }
        v5 = a2;
      }
      else
      {
        v28 = MiLockPageInline(48 * Page - 0x220000000000LL, v14, v15, v16);
      }
      MiInitializeMdlPfn(48 * Page - 0x220000000000LL, 131584);
      *(_QWORD *)(v19 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v19 + 16), v18);
      MiUnlockPage(48 * Page - 0x220000000000LL, v28);
      ++v9;
      *a4 = Page;
      v8 = v24;
      ++a4;
      if ( v9 >= *a3 )
        goto LABEL_31;
    }
    v18 = 9LL;
LABEL_15:
    Page = MiGetPage(v7, v12, v23);
    if ( Page == -1 )
      goto LABEL_31;
    goto LABEL_16;
  }
LABEL_31:
  if ( v5 && v9 < *a3 )
    MiReleaseNonPagedResources(v7, *a3 - v9);
  v21 = v22[0] == 0;
  *a3 = v9;
  if ( !v21 )
    PsDereferencePartition(*(_QWORD *)(v7 + 184));
}
