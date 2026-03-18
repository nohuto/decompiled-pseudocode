/*
 * XREFs of IoQueuesInitialize @ 0x14001A6C8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeSubmissionQueueInit @ 0x14000D510 (NVMeSubmissionQueueInit.c)
 *     GetMaxDedicatedSqPerCqCount @ 0x140019FD4 (GetMaxDedicatedSqPerCqCount.c)
 *     NVMeCompletionQueueInit @ 0x14001C334 (NVMeCompletionQueueInit.c)
 *     NVMeFreePool @ 0x14001DC5C (NVMeFreePool.c)
 *     NVMeSubmissionQueueAssignmentPolicyInit @ 0x14001EBE0 (NVMeSubmissionQueueAssignmentPolicyInit.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // r8
  _QWORD *v4; // r14
  unsigned int v5; // esi
  unsigned int v6; // r13d
  __int64 v7; // rcx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int k; // esi
  void **v12; // r9
  __int64 v13; // r14
  unsigned int i; // edi
  __int64 *v15; // r8
  unsigned int j; // edi
  __int64 *v17; // r8
  void *v19; // r9
  unsigned int m; // edi
  void **v21; // r9
  unsigned int v22; // r14d
  void *v23; // r9
  char *v24; // [rsp+40h] [rbp-38h]
  void *v25; // [rsp+50h] [rbp-28h]
  int v26; // [rsp+50h] [rbp-28h]
  unsigned int v27; // [rsp+C0h] [rbp+48h]
  char *v28; // [rsp+D0h] [rbp+58h]
  char *v29; // [rsp+D8h] [rbp+60h]

  v24 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  if ( !*(_WORD *)(a1 + 332) )
    return 0;
  v2 = *(unsigned __int16 *)(a1 + 330);
  if ( !(_WORD)v2 )
    return 0;
  v3 = *(unsigned __int16 *)(a1 + 326);
  v4 = (_QWORD *)(a1 + 944);
  v5 = *(unsigned __int16 *)(a1 + 326) << 6;
  v6 = 16 * v3;
  v27 = v5;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeSubmissionQueueAssignmentPolicyInit();
    StorPortExtendedFunction(0LL, a1, 392 * (unsigned int)*(unsigned __int16 *)(v7 + 332), 1701672526LL);
    StorPortExtendedFunction(0LL, a1, 208 * (unsigned int)*(unsigned __int16 *)(a1 + 330), 1701672526LL);
    if ( *v4 && *(_QWORD *)(a1 + 936) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 326) * (unsigned int)*(unsigned __int16 *)(a1 + 330),
        1701672526LL);
LABEL_18:
    if ( !*(_BYTE *)(a1 + 20) )
    {
      if ( *(_QWORD *)(a1 + 936) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 330); ++i )
        {
          v15 = (__int64 *)(*(_QWORD *)(a1 + 936) + 208LL * i);
          if ( *v15 )
            NVMeFreeDmaBuffer(a1, v5, v15, v15[1]);
        }
      }
      if ( *(_QWORD *)(a1 + 944) )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 332); ++j )
        {
          v17 = (__int64 *)(*(_QWORD *)(a1 + 944) + 392LL * j);
          if ( *v17 )
            NVMeFreeDmaBuffer(a1, v6, v17, v17[1]);
        }
      }
      NVMeFreePool(a1, v28);
      NVMeFreePool(a1, 0LL);
      NVMeFreePool(a1, v29);
      NVMeFreePool(a1, 0LL);
      NVMeFreePool(a1, v24);
      NVMeFreePool(a1, *(_QWORD *)(a1 + 944));
      NVMeFreePool(a1, *(_QWORD *)(a1 + 936));
    }
    *(_DWORD *)(a1 + 330) = 0;
    return 0;
  }
  v24 = (char *)(v6 + *(_QWORD *)*v4);
  v29 = &v24[16 * v2 * v3];
  v28 = &v29[32 * v2 * *(unsigned __int16 *)(a1 + 328)];
  v8 = (16 * *(unsigned __int16 *)(a1 + 330) * (unsigned int)*(unsigned __int16 *)(a1 + 326)) >> 2;
  if ( v8 )
    memset(v24, 0, 4LL * v8);
  v9 = (32 * *(unsigned __int16 *)(a1 + 330) * (unsigned int)*(unsigned __int16 *)(a1 + 328)) >> 2;
  if ( v9 )
    memset(v29, 0, 4LL * v9);
  v10 = (8 * (unsigned int)*(unsigned __int16 *)(a1 + 332)) >> 2;
  if ( v10 )
    memset(v28, 0, 4LL * v10);
  for ( k = 0; k < *(unsigned __int16 *)(a1 + 330); ++k )
  {
    v12 = *(void ***)(a1 + 936);
    v13 = (__int64)&v12[26 * k];
    if ( !*(_BYTE *)(a1 + 20) )
    {
      NVMeAllocateDmaBuffer(a1, v27);
LABEL_17:
      v5 = v27;
      goto LABEL_18;
    }
    v19 = *v12;
    v25 = v19;
    if ( v27 >> 2 )
    {
      memset(v19, 0, 4LL * (v27 >> 2));
      v19 = v25;
    }
    NVMeSubmissionQueueInit(
      a1,
      v13,
      k + 1,
      (__int64)v19,
      0LL,
      (__int64)&v24[16 * k * (unsigned __int64)*(unsigned __int16 *)(a1 + 326)],
      (__int64)&v29[32 * k * (unsigned __int64)*(unsigned __int16 *)(a1 + 328)],
      0LL);
  }
  for ( m = 0; m < *(unsigned __int16 *)(a1 + 332) && m < *(unsigned __int16 *)(a1 + 330); ++m )
  {
    v21 = *(void ***)(a1 + 944);
    v22 = (_DWORD)v21 + 392 * m;
    if ( !*(_BYTE *)(a1 + 20) )
    {
      NVMeAllocateDmaBuffer(a1, v6);
      goto LABEL_17;
    }
    v23 = *v21;
    v26 = (int)v23;
    if ( v6 >> 2 )
    {
      memset(v23, 0, 4LL * (v6 >> 2));
      LODWORD(v23) = v26;
    }
    NVMeCompletionQueueInit(a1, v22, m + 1, (_DWORD)v23, 0LL, (__int64)&v28[8 * m], 0LL);
  }
  return 1;
}
