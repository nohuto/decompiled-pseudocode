/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x14049D980
 * Callers:
 *     PspIumReplenishPartitionPages @ 0x14049D824 (PspIumReplenishPartitionPages.c)
 *     PspIumAllocatePartitionState @ 0x1405E61E8 (PspIumAllocatePartitionState.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14039F0B8 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiPartitionObjectToPartition @ 0x14041217C (MiPartitionObjectToPartition.c)
 *     MiInitializeMdlPfn @ 0x140413588 (MiInitializeMdlPfn.c)
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
  __int64 Page; // r14
  __int64 v15; // r13
  __int64 v16; // rbx
  unsigned int v17; // r15d
  bool v18; // zf
  _BYTE v19[4]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-64h]
  unsigned int v21; // [rsp+38h] [rbp-60h]
  __int64 CurrentIrql; // [rsp+40h] [rbp-58h]
  __int128 v23; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int8 v25; // [rsp+B0h] [rbp+18h]

  v19[0] = 0;
  v5 = a2;
  v23 = 0LL;
  v6 = MiPartitionObjectToPartition(a1, 1, v19);
  v7 = (__int64)v6;
  if ( v5 && (int)MiAcquireNonPagedResources(v6, *a3, 0LL, 2u) < 0 )
    *a3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v20 = (_BYTE)CurrentIrql == 2;
  v8 = 22;
  if ( (_BYTE)CurrentIrql != 2 )
    v8 = 6;
  v21 = v8;
  v9 = 0;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v23);
  if ( *a3 )
  {
    v10 = (*((_QWORD *)&v23 + 1) >> 16) & 3LL;
    while ( 1 )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v23, 1u) % (unsigned int)dword_140E2DBC0[v10];
      v12 = DWORD2(v23) ^ (unsigned __int8)(BYTE8(v23) ^ v11);
      if ( (*(_DWORD *)(v7 + 4) & 8) == 0 )
        break;
      SlabPage = MiGetSlabPage(v7, 2, v12, v8, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
      Page = SlabPage;
      v15 = 9LL;
      if ( SlabPage != -1 )
      {
        v15 = 11LL;
        if ( (unsigned int)MiIsPfnFromChargedSlabAllocation(48 * SlabPage - 0x220000000000LL) )
          v15 = 15LL;
      }
      if ( Page == -1 )
        goto LABEL_15;
LABEL_16:
      v16 = 48 * Page - 0x220000000000LL;
      *(_QWORD *)v16 = 0LL;
      *(_QWORD *)(v16 + 16) = CLFS_LSN_NULL_EXT;
      *(_QWORD *)(v16 + 40) &= ~0x8000000000000000uLL;
      if ( !v5 )
        _InterlockedIncrement64((volatile signed __int64 *)(v7 + 432));
      if ( (_BYTE)CurrentIrql == 2 )
      {
        v25 = 17;
        v17 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v17 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v17);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        v5 = a2;
      }
      else
      {
        v25 = MiLockPageInline(48 * Page - 0x220000000000LL);
      }
      MiInitializeMdlPfn(48 * Page - 0x220000000000LL, 131584);
      *(_QWORD *)(v16 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v16 + 16), v15);
      MiUnlockPage(48 * Page - 0x220000000000LL, v25);
      ++v9;
      *a4 = Page;
      v8 = v21;
      ++a4;
      if ( v9 >= *a3 )
        goto LABEL_31;
    }
    v15 = 9LL;
LABEL_15:
    Page = MiGetPage(v7, v12, v20);
    if ( Page == -1 )
      goto LABEL_31;
    goto LABEL_16;
  }
LABEL_31:
  if ( v5 && v9 < *a3 )
    MiReleaseNonPagedResources(v7, *a3 - v9);
  v18 = v19[0] == 0;
  *a3 = v9;
  if ( !v18 )
    PsDereferencePartition(*(_QWORD *)(v7 + 184));
}
