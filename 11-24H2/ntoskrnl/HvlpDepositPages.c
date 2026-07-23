/*
 * XREFs of HvlpDepositPages @ 0x1405814B4
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     HvlpHandleInsufficientMemory @ 0x140580554 (HvlpHandleInsufficientMemory.c)
 *     HvlpStartLogicalProcessor @ 0x1405829C8 (HvlpStartLogicalProcessor.c)
 *     HvlpAddRemovePhysicalMemory @ 0x1406A1D78 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14070CB90 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x1403953A0 (MmAllocateNodePagesForMdlEx.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlpDepositPages(unsigned __int16 a1, __int64 a2, char a3, char a4)
{
  unsigned int v4; // esi
  char v5; // r12
  char v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  __int64 NodePagesForMdl; // rax
  char *v12; // r15
  unsigned int v14; // r14d
  _QWORD *v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // r12d
  int v18; // ebp
  void *v19; // r13
  unsigned int v20; // eax
  unsigned int v21; // ebp
  int v22; // [rsp+40h] [rbp-78h]
  __int128 v23; // [rsp+48h] [rbp-70h] BYREF
  __int64 v24; // [rsp+58h] [rbp-60h]
  __int64 v25; // [rsp+60h] [rbp-58h]
  unsigned __int16 i; // [rsp+C0h] [rbp+8h]

  v4 = 128;
  v24 = 0LL;
  LODWORD(v25) = 0;
  v5 = a4;
  v6 = a3;
  v7 = 0x200000LL;
  v23 = 0LL;
  v8 = 113;
  v9 = *(_WORD *)(KeNodeBlock[a1] + 2);
  for ( i = v9; ; v9 = i )
  {
    v10 = (v8 & 0x20) != 0 ? (v4 + 511) & 0xFFFFFE00 : v4;
    NodePagesForMdl = MmAllocateNodePagesForMdlEx(0, -1, v7, v10 << 12, 1u, v9, v8);
    v12 = (char *)NodePagesForMdl;
    if ( NodePagesForMdl )
      break;
    if ( (v8 & 0x20) == 0 )
      return 3221225495LL;
    if ( v6 )
    {
      if ( (v8 & 0x40) == 0 )
        return 3221225495LL;
LABEL_21:
      v8 &= ~0x40u;
      continue;
    }
LABEL_20:
    if ( (v8 & 0x40) != 0 )
      goto LABEL_21;
    v8 = v8 & 0xFFFFFFDB | 4;
    v7 = 0LL;
  }
  v14 = (*(_DWORD *)(NodePagesForMdl + 40) >> 12) + ((*(_DWORD *)(NodePagesForMdl + 40) & 0xFFF) != 0);
  if ( v4 < v14 )
    v4 = 0;
  else
    v4 -= v14;
  v15 = HvlpAcquireHypercallPage((__int64)&v23, 1, 0LL, 8LL);
  *v15 = HvlPartitionId;
  v16 = v5 != 0 ? 0xB7 : 0;
  v17 = 0;
  v22 = v16 + 72;
  if ( v14 )
  {
    v18 = (unsigned __int64)(v16 + 72) >> 32;
    v19 = v15 + 1;
    v20 = 511;
    do
    {
      if ( v14 - v17 < 0x1FF )
      {
        v20 = v18 & 0xFFFFF000;
        v21 = ((_WORD)v14 - (_WORD)v17) & 0xFFF;
      }
      else
      {
        v21 = v18 & 0xFFFFF1FF;
      }
      v18 = v20 | v21;
      memmove(v19, &v12[8 * v17 + 48], 8LL * (v18 & 0xFFF));
      HvcallInitiateHypercall(v22);
      v20 = 511;
      v17 += 511;
    }
    while ( v17 < v14 );
  }
  HvlpReleaseHypercallPage((unsigned int *)&v23);
  ExFreePoolWithTag(v12, 0);
  v6 = a3;
  v5 = a4;
  if ( v4 )
    goto LABEL_20;
  return 0LL;
}
