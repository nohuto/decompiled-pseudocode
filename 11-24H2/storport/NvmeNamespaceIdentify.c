/*
 * XREFs of NvmeNamespaceIdentify @ 0x1400BF954
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NVMeFindNSIDInActiveNameSpaceIDList @ 0x1400BEAE4 (NVMeFindNSIDInActiveNameSpaceIDList.c)
 *     NvmeGetActiveNameSpaceIdList @ 0x1400BF674 (NvmeGetActiveNameSpaceIdList.c)
 *     NvmeGetIdentifyNamespaceData @ 0x1400BF7F8 (NvmeGetIdentifyNamespaceData.c)
 *     NvmeVersionCheck @ 0x1400BFE0C (NvmeVersionCheck.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeControllerAddNvmeNamespaceToList @ 0x1400EA460 (NvmeControllerAddNvmeNamespaceToList.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeNamespaceComputeBlockInfo @ 0x1400FCDF8 (NvmeNamespaceComputeBlockInfo.c)
 *     NvmeNamespaceUnlockIoQueue @ 0x1401152B4 (NvmeNamespaceUnlockIoQueue.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceIdentify(_QWORD *a1)
{
  void *v1; // r15
  _BYTE *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // r10
  bool v7; // r12
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  int DmaBuffer; // esi
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 i; // rcx
  unsigned int v16; // r13d
  unsigned int j; // r14d
  __int64 v18; // r9
  _BYTE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v27; // [rsp+30h] [rbp-28h] BYREF
  void *Src[2]; // [rsp+38h] [rbp-20h] BYREF
  char v29; // [rsp+A0h] [rbp+48h]
  char v30; // [rsp+A8h] [rbp+50h]
  int v31; // [rsp+B0h] [rbp+58h]
  unsigned int *Pool; // [rsp+B8h] [rbp+60h]

  v1 = 0LL;
  Pool = 0LL;
  *(_OWORD *)Src = 0LL;
  v3 = 0LL;
  v30 = NvmeVersionCheck(a1, 1LL, 1LL);
  v7 = 0;
  v8 = 0;
  v31 = 0;
  v29 = 0;
  v9 = *(_QWORD *)(v4 + 1048);
  if ( v9 && (*(_DWORD *)(v9 + 24) & 0x100000) != 0 || (unsigned __int8)NvmeVersionCheck(v4, 2LL, 0LL) )
    v29 = v6;
  v10 = *(_QWORD *)(v4 + 592);
  DmaBuffer = NvmeAllocateDmaBuffer(v4, 4096LL, v5, Src, &Src[1], 0);
  if ( DmaBuffer >= 0 )
  {
    if ( v30 )
    {
      v14 = a1[131];
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 24) & 0x40000) == 0 )
        {
          Pool = (unsigned int *)RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(a1[16] + 8LL));
          v1 = Pool;
          if ( !Pool )
          {
LABEL_10:
            DmaBuffer = -1073741670;
            goto LABEL_48;
          }
          if ( (int)NvmeGetActiveNameSpaceIdList((__int64)a1, (__int64)Src[0], (__int64)Src[1]) < 0 )
          {
            DmaBuffer = 0;
          }
          else
          {
            memmove(Pool, Src[0], 0x1000uLL);
            v13 = 0;
            DmaBuffer = 0;
            for ( i = 0LL; (unsigned int)i < 0x400; i = (unsigned int)(i + 1) )
            {
              v11 = Pool[i];
              if ( !(_DWORD)v11 )
                break;
              if ( (unsigned int)v11 <= v13 )
              {
                DmaBuffer = -1073741762;
                goto LABEL_19;
              }
              v13 = Pool[i];
            }
            v8 = v13;
LABEL_19:
            v7 = DmaBuffer >= 0;
          }
        }
      }
    }
    v16 = *(_DWORD *)(v10 + 516);
    if ( v7 && v8 > v16 )
      v16 = v8;
    for ( j = 1; j - 1 < v16; ++j )
    {
      if ( !v7 || !v29 || NVMeFindNSIDInActiveNameSpaceIDList((__int64)v1, v11, j) )
      {
        memset_0(Src[0], 0, 0x1000uLL);
        DmaBuffer = NvmeGetIdentifyNamespaceData((__int64)a1, (__int64)Src[0], (__int64)Src[1], v18, j);
        if ( DmaBuffer >= 0 )
        {
          v19 = (_BYTE *)RaidAllocatePool(64LL, 4096LL, 1380147538LL, *(_QWORD *)(a1[16] + 8LL));
          v3 = v19;
          if ( !v19 )
            goto LABEL_10;
          memmove(v19, Src[0], 0x1000uLL);
          if ( !v30 || v3[4 * (v3[26] & 0xF) + 130] || *(_QWORD *)v3 )
          {
            ++v31;
            v27 = 0LL;
            DmaBuffer = NvmeControllerCreateNvmeNamespace(a1, j, v21, &v27);
            if ( DmaBuffer < 0 )
              goto LABEL_48;
            v24 = v27;
            *(_QWORD *)(v27 + 176) = v3;
            if ( v7 && !NVMeFindNSIDInActiveNameSpaceIDList((__int64)Pool, v23, j) )
            {
              v25 = a1[17];
              if ( (v25 & 0x2000000) == 0 )
                a1[17] = v25 | 0x2000000;
            }
            NvmeNamespaceComputeBlockInfo(v24);
            *(_QWORD *)(v24 + 112) |= 0x10uLL;
            NvmeControllerAddNvmeNamespaceToList(a1, v24);
            NvmeNamespaceUnlockIoQueue(v24);
            *(_DWORD *)(*(_QWORD *)(v24 + 8) + 48LL) &= ~0x80u;
          }
          else
          {
            if ( v7 )
            {
              if ( NVMeFindNSIDInActiveNameSpaceIDList((__int64)v1, v20, j) )
              {
                v22 = a1[17];
                if ( (v22 & 0x2000000) == 0 )
                  a1[17] = v22 | 0x2000000;
              }
            }
            ExFreePoolWithTag(v3, 0x52436152u);
          }
        }
      }
      v1 = Pool;
    }
    v3 = 0LL;
    if ( !v31 )
      a1[17] |= 0x20000uLL;
  }
LABEL_48:
  NvmeFreeDmaBuffer((_DWORD)a1, 4096, v13, Src[0], (__int64)Src[1]);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x52436152u);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x52436152u);
  return (unsigned int)DmaBuffer;
}
