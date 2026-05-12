/*
 * XREFs of NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C
 * Callers:
 *     NvmeControllerReenumerationRoutine @ 0x1400BF370 (NvmeControllerReenumerationRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeGetIdentifyNamespaceData @ 0x1400BF7F8 (NvmeGetIdentifyNamespaceData.c)
 *     NvmeNamespaceUpdateDiskProperties @ 0x1400BFCC8 (NvmeNamespaceUpdateDiskProperties.c)
 *     NvmeVersionCheck @ 0x1400BFE0C (NvmeVersionCheck.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeControllerAddNvmeNamespaceToList @ 0x1400EA460 (NvmeControllerAddNvmeNamespaceToList.c)
 *     NvmeControllerGetNamespace @ 0x1400EEC74 (NvmeControllerGetNamespace.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x1400FB9D8 (NvmeNamespaceAcquireRemoveLock.c)
 *     NvmeNamespaceComputeBlockInfo @ 0x1400FCDF8 (NvmeNamespaceComputeBlockInfo.c)
 *     NvmeNamespaceUnlockIoQueue @ 0x1401152B4 (NvmeNamespaceUnlockIoQueue.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeControllerIdentifyChangedNamespaces(__int64 a1, __int64 a2, _DWORD *a3)
{
  _BYTE *v3; // rdi
  int DmaBuffer; // r15d
  int v6; // ebx
  char v7; // dl
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int *v10; // r10
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rax
  unsigned int v14; // r13d
  char v15; // cl
  unsigned int v16; // ebx
  void *v17; // rcx
  int v18; // r9d
  _BYTE *Pool; // rax
  __int64 v20; // r8
  __int64 Namespace; // r14
  __int64 v22; // rbx
  __int64 v23; // rcx
  _DWORD *v24; // r9
  __int64 v25; // rbx
  char v26; // cl
  int v27; // r14d
  int v28; // r8d
  signed __int32 v30[8]; // [rsp+0h] [rbp-B9h] BYREF
  __int64 v31; // [rsp+28h] [rbp-91h]
  int v32; // [rsp+A0h] [rbp-19h]
  int v33; // [rsp+A4h] [rbp-15h]
  unsigned int v34; // [rsp+A8h] [rbp-11h]
  int v35; // [rsp+ACh] [rbp-Dh]
  __int64 v36; // [rsp+B0h] [rbp-9h] BYREF
  void *Src[2]; // [rsp+B8h] [rbp-1h] BYREF
  char v38; // [rsp+120h] [rbp+67h]
  char v41; // [rsp+138h] [rbp+7Fh]

  v3 = 0LL;
  DmaBuffer = 0;
  *(_OWORD *)Src = 0LL;
  v6 = 0;
  v41 = NvmeVersionCheck(a1, 1LL, 1LL);
  v11 = *(_QWORD *)(v8 + 1656);
  v12 = 0;
  v33 = 0;
  v32 = 0;
  if ( (*(_DWORD *)(v11 + 28) & 0x100) == 0 )
  {
    v15 = 0;
    v34 = 1024;
    v38 = 0;
    v14 = 0;
    goto LABEL_5;
  }
  v13 = *(_QWORD *)(v8 + 592);
  v14 = 0;
  v15 = v7;
  v38 = v7;
  v34 = *(_DWORD *)(v13 + 516);
  if ( !v34 )
    goto LABEL_37;
  while ( 1 )
  {
LABEL_5:
    v16 = v14 + 1;
    if ( !v15 )
      v16 = *v10;
    ++v14;
    if ( !v16 )
      break;
    v17 = Src[0];
    if ( !Src[0] )
    {
      LOBYTE(v31) = 0;
      DmaBuffer = NvmeAllocateDmaBuffer(a1, 4096LL, v9, Src, &Src[1], v31);
      if ( DmaBuffer < 0 )
        break;
      v17 = Src[0];
      if ( !Src[0] )
        break;
    }
    memset_0(v17, 0, 0x1000uLL);
    DmaBuffer = NvmeGetIdentifyNamespaceData(a1, Src[0], Src[1], v18, v16);
    if ( DmaBuffer < 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 1656) + 28LL) |= 0x80u;
      goto LABEL_31;
    }
    Pool = (_BYTE *)RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
    v3 = Pool;
    if ( !Pool )
    {
      DmaBuffer = -1073741670;
      goto LABEL_36;
    }
    memmove(Pool, Src[0], 0x1000uLL);
    Namespace = NvmeControllerGetNamespace(a1, v16);
    if ( v41 && !v3[4 * (v3[26] & 0xF) + 130] && !*(_QWORD *)v3 )
    {
      if ( Namespace )
      {
        ++v33;
        *(_QWORD *)(Namespace + 112) &= ~2uLL;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 1656) + 28LL) |= 0x40u;
      }
      goto LABEL_30;
    }
    if ( Namespace )
    {
      if ( *(_QWORD *)(Namespace + 176) && (int)NvmeNamespaceAcquireRemoveLock(Namespace, 0LL) >= 0 )
      {
        v24 = *(_DWORD **)(Namespace + 176);
        v35 = v24[(*((_BYTE *)v24 + 26) & 0xF) + 32];
        v25 = *(_QWORD *)v24 * (1LL << SBYTE2(v35));
        memmove(v24, v3, 0x1000uLL);
        NvmeNamespaceComputeBlockInfo(Namespace);
        _InterlockedOr(v30, 0);
        v26 = v3[4 * (v3[26] & 0xF) + 130];
        if ( *(_QWORD *)v3 * (1LL << v26) != v25 || v26 != BYTE2(v35) )
          NvmeNamespaceUpdateDiskProperties(Namespace);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Namespace + 120));
      }
      ++v12;
LABEL_30:
      ExFreePoolWithTag(v3, 0x52436152u);
LABEL_31:
      v3 = 0LL;
      goto LABEL_32;
    }
    v36 = 0LL;
    ++v32;
    DmaBuffer = NvmeControllerCreateNvmeNamespace(a1, v16, v20, &v36);
    if ( DmaBuffer < 0 )
      goto LABEL_36;
    v22 = v36;
    v23 = v36;
    *(_QWORD *)(v36 + 176) = v3;
    v3 = 0LL;
    NvmeNamespaceComputeBlockInfo(v23);
    *(_QWORD *)(v22 + 112) |= 0x10uLL;
    NvmeControllerAddNvmeNamespaceToList(a1, v22);
    NvmeNamespaceUnlockIoQueue(v22);
    *(_DWORD *)(*(_QWORD *)(v22 + 8) + 48LL) &= ~0x80u;
LABEL_32:
    v10 = (unsigned int *)(a2 + 4);
    a2 += 4LL;
    if ( v14 >= v34 )
      goto LABEL_36;
    v15 = v38;
  }
  v3 = 0LL;
LABEL_36:
  v6 = v32;
LABEL_37:
  v27 = v33;
  StorEtwNvmeControllerEvent(
    a1,
    1,
    4,
    (__int64)L"Identify changed namespaces",
    L"NewNamespaceCount",
    v6,
    L"DeletedNamespaceCount",
    v33,
    L"ModifiedNamespaceCount",
    v12,
    &word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    L"NtStatus",
    DmaBuffer);
  NvmeFreeDmaBuffer(a1, 4096, v28, Src[0], (__int64)Src[1]);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x52436152u);
  *(_DWORD *)(*(_QWORD *)(a1 + 1656) + 16LL) = v6;
  *(_DWORD *)(*(_QWORD *)(a1 + 1656) + 20LL) = v27;
  *(_DWORD *)(*(_QWORD *)(a1 + 1656) + 24LL) = v12;
  if ( a3 )
    *a3 = v6 + v12 + v27;
  return (unsigned int)DmaBuffer;
}
