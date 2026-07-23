/*
 * XREFs of KiComputeSharedReadyQueueAssignments @ 0x1405C5E30
 * Callers:
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405B35D0 (KiAssignSubNodeSharedReadyQueues.c)
 * Callees:
 *     KiComputePartialSharedReadyQueueAssignments @ 0x1405C5D68 (KiComputePartialSharedReadyQueueAssignments.c)
 *     KiMergeSmallSharedReadyQueueAssignments @ 0x1405C66E8 (KiMergeSmallSharedReadyQueueAssignments.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiComputeSharedReadyQueueAssignments(__int64 a1, unsigned int a2, unsigned __int8 *a3, _OWORD *a4)
{
  __int64 i; // rsi
  unsigned __int64 v9; // rbx
  unsigned int v10; // edx
  char v11; // r8
  unsigned __int8 v12; // r10
  unsigned __int8 *v13; // r9
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // r11
  unsigned __int64 v16; // rax
  bool v17; // cf
  __int64 result; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _OWORD v22[4]; // [rsp+20h] [rbp-78h] BYREF

  memset_0(v22, 255, sizeof(v22));
  for ( i = a1; i; i &= ~v9 )
  {
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    v12 = -1;
    v13 = a3;
    do
    {
      if ( _bittest64(&i, v10) )
      {
        v14 = *v13;
        v15 = *v13;
        if ( *v13 >= v12 )
          v15 = v12;
        v16 = 0LL;
        v17 = v14 < v12;
        v12 = v15;
        if ( !v17 )
          v16 = v9;
        v9 = v16;
        if ( v14 == v15 )
          v9 = v16 | (1LL << v11);
      }
      ++v10;
      ++v11;
      ++v13;
    }
    while ( v10 < 0x40 );
    KiComputePartialSharedReadyQueueAssignments(v9, a2, (unsigned __int8 *)v22);
  }
  result = KiMergeSmallSharedReadyQueueAssignments(a1, a2, v22);
  v19 = v22[1];
  *a4 = v22[0];
  v20 = v22[2];
  a4[1] = v19;
  v21 = v22[3];
  a4[2] = v20;
  a4[3] = v21;
  return result;
}
