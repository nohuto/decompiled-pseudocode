/*
 * XREFs of NvmeAdapterCompleteControllerQueueRequest @ 0x1400DF110
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterCleanupControllerQueueRequest @ 0x1400DEF20 (NvmeAdapterCleanupControllerQueueRequest.c)
 *     NvmeControllerGetNamespace @ 0x1400EEC74 (NvmeControllerGetNamespace.c)
 *     NvmeControllerQueueDecrementProcessingCount @ 0x1400F38B8 (NvmeControllerQueueDecrementProcessingCount.c)
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

int __fastcall NvmeAdapterCompleteControllerQueueRequest(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // r15
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // r14d
  unsigned __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, __int64, __int64, _QWORD, __int64, __int64); // r12
  __int64 v15; // r13
  signed __int32 v17[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 Namespace; // [rsp+80h] [rbp+8h]
  __int64 v19; // [rsp+88h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 168);
  v19 = *(_QWORD *)(a1 + 160);
  Namespace = 0LL;
  v3 = 0;
  if ( *(_BYTE *)(v1 + 2) == 40 && (v4 = *(_DWORD *)(v1 + 56)) != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *(unsigned int *)(v1 + 4LL * v5 + 120);
      if ( (unsigned int)v6 >= 0x80 && (unsigned int)v6 < *(_DWORD *)(v1 + 16) )
      {
        v7 = v6 + v1;
        if ( *(_DWORD *)(v6 + v1) == 67 )
          break;
      }
      if ( ++v5 >= v4 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v7 = 0LL;
  }
  v8 = *(unsigned __int16 *)(v7 + 106);
  v9 = *(_QWORD *)(a1 + 784);
  if ( (_WORD)v8 )
  {
    if ( (unsigned __int16)v8 > *(_WORD *)(v9 + 20) )
      return v7;
    v10 = 192 * v8 + *(_QWORD *)(v9 + 728) - 192LL;
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 712);
  }
  LODWORD(v7) = *(unsigned __int16 *)(a1 + 782);
  if ( (unsigned int)v7 < *(_DWORD *)(v10 + 124) )
  {
    _InterlockedAdd16((volatile signed __int16 *)(v10 + 152), 1u);
    *(_BYTE *)(a1 + 17) |= 0x80u;
    _InterlockedOr(v17, 0);
    if ( (*(_BYTE *)(v10 + 112) & 4) != 0 )
    {
      *(_BYTE *)(a1 + 17) &= ~0x80u;
      _InterlockedDecrement16((volatile signed __int16 *)(v10 + 152));
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v10 + 148));
      if ( *(_DWORD *)(v9 + 572) == 1 )
        Namespace = NvmeControllerGetNamespace(
                      v9,
                      *(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a1 + 782) << 7)
                                      + *(_QWORD *)(v10 + 32)
                                      + 88));
      v11 = *(_QWORD *)(v10 + 32);
      v12 = *(_DWORD *)(a1 + 20);
      v13 = (unsigned __int64)*(unsigned __int16 *)(a1 + 782) << 7;
      v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64))(v13 + v11 + 32);
      v15 = *(_QWORD *)(v13 + v11 + 40);
      NvmeAdapterCleanupControllerQueueRequest(v10, a1);
      if ( *(_WORD *)(v10 + 136) )
      {
        NvmeControllerQueueDecrementProcessingCount(v10);
        if ( *(_BYTE *)(v1 + 3) != 37 )
        {
          if ( *(_DWORD *)(v9 + 952) )
            v3 = 1;
        }
      }
      if ( v14 )
        LODWORD(v7) = v14(v9, v1, v19, v12, Namespace, v15);
      else
        LODWORD(v7) = KeSetEvent((PRKEVENT)(a1 + 664), 0, 0);
      *(_BYTE *)(a1 + 17) &= ~0x80u;
      _InterlockedDecrement16((volatile signed __int16 *)(v10 + 152));
      if ( v3 )
        LODWORD(v7) = NvmeProcessPendingIo(v9, v10, v12);
    }
  }
  return v7;
}
