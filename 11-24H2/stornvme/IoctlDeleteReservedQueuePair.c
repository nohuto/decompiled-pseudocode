/*
 * XREFs of IoctlDeleteReservedQueuePair @ 0x1400208C0
 * Callers:
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 * Callees:
 *     NVMeIoCompletionQueueDelete @ 0x140007A30 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1400080F0 (NVMeIoSubmissionQueueDelete.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x14001DC5C (NVMeFreePool.c)
 */

__int64 __fastcall IoctlDeleteReservedQueuePair(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v4; // edi
  __int64 SrbDataBuffer; // rdx
  __int64 v6; // r8
  int v7; // ecx
  __int16 *v8; // r14
  unsigned int v9; // edx
  __int16 v10; // dx
  unsigned __int16 i; // bp
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r10
  unsigned __int16 j; // cx
  __int64 v23; // r9
  unsigned __int16 v24; // ax
  unsigned __int16 k; // dx
  __int64 v26; // r8
  char v27; // cl
  _DWORD *v29; // [rsp+100h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0;
  v29 = 0LL;
  if ( !*(_WORD *)(a1 + 982) || !*(_WORD *)(a1 + 954) )
  {
    v4 = -1056964601;
    v27 = 6;
    goto LABEL_39;
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v29);
  if ( *v29 >= 0x28u )
  {
    v7 = *(unsigned __int16 *)(a1 + 332);
    v8 = (__int16 *)(SrbDataBuffer + 36);
    v9 = *(unsigned __int16 *)(SrbDataBuffer + 36);
    if ( v9 > v7 + (unsigned int)*(unsigned __int16 *)(a1 + 982) || (unsigned __int16)v9 <= (unsigned __int16)v7 )
    {
      v4 = -1056964601;
      goto LABEL_40;
    }
    v10 = *(_WORD *)(a1 + 952);
    for ( i = 0; i < *(_WORD *)(a1 + 982) && v10; ++i )
    {
      v12 = *(_QWORD *)(a1 + 960);
      v13 = (unsigned __int64)i << 6;
      if ( *(_WORD *)(v13 + v12 + 46) == *v8 )
      {
        v14 = *(_QWORD *)(v13 + v12);
        if ( v14 && (*(_DWORD *)(a1 + 128) & 1) != 0 )
        {
          v15 = *(unsigned __int16 *)(v13 + v12 + 44);
          v29 = *(_DWORD **)(v13 + v12 + 8);
          NVMeFreeDmaBuffer(a1, v15 << 6, (__int64 *)&v29, v14);
        }
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 960) + v13 + 24);
        if ( v16 )
          NVMeFreePool(a1, v16, v6, v14);
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 960) + v13 + 32);
        if ( v17 )
          NVMeFreePool(a1, *(_QWORD *)(v17 + 24), v6, v14);
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 960) + v13 + 32);
        if ( v18 )
          NVMeFreePool(a1, v18, v6, v14);
        if ( !NVMeIoSubmissionQueueDelete(a1, *(_WORD *)(a1 + 330) + i + 1) )
        {
          *(_DWORD *)(a1 + 28) = 19;
          v4 = -1056964607;
          StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
          goto LABEL_40;
        }
        v19 = *(_QWORD *)(a1 + 960);
        *(_OWORD *)(v13 + v19) = 0LL;
        *(_OWORD *)(v13 + v19 + 16) = 0LL;
        *(_OWORD *)(v13 + v19 + 32) = 0LL;
        *(_OWORD *)(v13 + v19 + 48) = 0LL;
        v10 = --*(_WORD *)(a1 + 952);
      }
    }
    if ( (*(_DWORD *)(a1 + 128) & 1) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 968);
      v21 = *(unsigned __int16 *)(v20 + 48LL * i + 26);
      for ( j = 0; j < *(_WORD *)(a1 + 954); ++j )
      {
        if ( *(_WORD *)(v20 + 48LL * j + 24) == *v8 )
        {
          v23 = *(_QWORD *)(v20 + 48LL * j);
          v29 = *(_DWORD **)(v20 + 48LL * j + 8);
          NVMeFreeDmaBuffer(a1, v21 << 6, (__int64 *)&v29, v23);
          break;
        }
      }
    }
    if ( !NVMeIoCompletionQueueDelete(a1, *v8) )
    {
      *(_DWORD *)(a1 + 28) = 20;
      v4 = -1056964607;
      StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
      goto LABEL_40;
    }
    v24 = *(_WORD *)(a1 + 954);
    for ( k = 0; k < v24; ++k )
    {
      v26 = *(_QWORD *)(a1 + 968);
      if ( *(_WORD *)(v26 + 48LL * k + 24) == *v8 )
      {
        *(_OWORD *)(v26 + 48LL * k) = 0LL;
        *(_OWORD *)(v26 + 48LL * k + 16) = 0LL;
        *(_OWORD *)(v26 + 48LL * k + 32) = 0LL;
      }
      v24 = *(_WORD *)(a1 + 954);
    }
    *(_WORD *)(a1 + 954) = v24 - 1;
    v27 = 1;
    a2 = v2;
LABEL_39:
    *(_BYTE *)(a2 + 3) = v27;
    if ( !v4 )
      return v4;
    goto LABEL_40;
  }
  v4 = -1056964602;
LABEL_40:
  if ( !*(_BYTE *)(v2 + 3) )
    *(_BYTE *)(v2 + 3) = 4;
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  return v4;
}
