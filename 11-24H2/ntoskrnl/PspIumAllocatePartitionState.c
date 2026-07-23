/*
 * XREFs of PspIumAllocatePartitionState @ 0x1405E37E8
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     MmFreeNonChargedSecurePages @ 0x140433BCC (MmFreeNonChargedSecurePages.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePartitionState(__int64 a1)
{
  void *v2; // r14
  unsigned int v3; // r15d
  __int64 Pool2; // rax
  __int64 v5; // rbx
  unsigned int v7; // eax
  __int64 *v8; // r9
  int v9; // eax
  void *v10; // rcx
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  void *v12; // [rsp+68h] [rbp+10h]
  __int64 v13; // [rsp+70h] [rbp+18h]
  __int64 v14; // [rsp+78h] [rbp+20h]

  v2 = *(void **)(a1 + 16);
  v12 = v2;
  v3 = 0;
  v11 = 0;
  Pool2 = ExAllocatePool2(0x40uLL, 0xA8uLL, 0x70507549u);
  v5 = Pool2;
  v13 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 8) = v2;
  v7 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v5 + 152) = v7;
  if ( v7 < 8 )
    *(_DWORD *)(v5 + 152) = 8;
  v14 = v5 + 96;
  *(_QWORD *)(v5 + 96) = 0LL;
  *(_WORD *)(v5 + 104) = 8 * (((unsigned __int16)((v5 & 0xFFF) + 4263) >> 12) + 6);
  *(_WORD *)(v5 + 106) = 0;
  *(_QWORD *)(v5 + 128) = v5 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v5 + 140) = v5 & 0xFFF;
  *(_DWORD *)(v5 + 136) = 168;
  MmProbeAndLockPages((PMDL)(v5 + 96), 0, IoModifyAccess);
  v8 = (__int64 *)ExAllocatePool2(0x40uLL, 8LL * *(unsigned int *)(v5 + 152), 0x61507549u);
  *(_QWORD *)(v5 + 160) = v8;
  if ( v8
    && (v11 = *(_DWORD *)(v5 + 152),
        MmAllocateNonChargedSecurePages((ULONG **)v2, 1, &v11, v8),
        v9 = *(_DWORD *)(v5 + 152),
        v3 = v11,
        v9 == v11) )
  {
    *(_DWORD *)(v5 + 156) = v9;
    if ( v2 )
      ObfReferenceObjectWithTag(v2, 0x746C6644u);
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v5 + 144);
    return 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(v5 + 106) & 2) != 0 )
      MmUnlockPages((PMDL)(v5 + 96));
    if ( v3 )
      MmFreeNonChargedSecurePages((ULONG **)v2, 1, v3, *(_QWORD **)(v5 + 160));
    v10 = *(void **)(v5 + 160);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
    return 3221225626LL;
  }
}
