/*
 * XREFs of MiGetPartitionNodeInformation @ 0x1402636C4
 * Callers:
 *     MmFillEtwNodeInformation @ 0x140262194 (MmFillEtwNodeInformation.c)
 *     MmManagePartitionNodeInformation @ 0x1407FD8D0 (MmManagePartitionNodeInformation.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiGetPartitionNodePageCounts @ 0x1402646F8 (MiGetPartitionNodePageCounts.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiGetPartitionNodeInformation(_QWORD *a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  volatile LONG *v8; // rcx
  KIRQL v9; // r13
  volatile LONG *v10; // rdi
  unsigned __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *v14; // rcx
  __int64 *v15; // r8
  __int64 v16; // r10
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 result; // rax
  ULONG_PTR v20; // r15
  int v21; // eax
  unsigned __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-A8h]
  volatile signed __int32 *v24; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v26; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-80h]
  unsigned __int64 v28; // [rsp+50h] [rbp-78h]
  unsigned __int64 v29; // [rsp+58h] [rbp-70h]
  unsigned __int64 v30; // [rsp+60h] [rbp-68h]
  unsigned __int64 v31; // [rsp+68h] [rbp-60h]
  unsigned __int64 v32; // [rsp+70h] [rbp-58h]
  unsigned __int64 v33; // [rsp+78h] [rbp-50h]

  v3 = a2;
  memset_0(&v26, 0, 0x40uLL);
  v6 = a1[2] + 57216 * v3;
  v23 = v6;
  memset_0(a3, 0, 0x48uLL);
  v7 = 0LL;
  v24 = (volatile signed __int32 *)(v6 + 15220);
  v8 = (volatile LONG *)(v6 + 15220);
  if ( KeGetCurrentIrql() < 2u )
  {
    v9 = ExAcquireSpinLockShared(v8);
  }
  else
  {
    v9 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v8);
  }
  v10 = (volatile LONG *)(a1 + 884);
  do
  {
    v11 = *(_QWORD *)(v6 + 14976);
    MiGetPartitionNodePageCounts(a1, (unsigned int)v3, &v26);
    ExAcquireSpinLockSharedAtDpcLevel(v10);
    if ( a1[880] )
    {
      v20 = a1[882];
      if ( v20 != 0x3FFFFFFFFFLL )
      {
        do
        {
          v21 = MiPageToNode(v20);
          v22 = v7 + 1;
          if ( v21 != (_DWORD)v3 )
            v22 = v7;
          v7 = v22;
          v20 = *(_QWORD *)(48 * v20 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
        }
        while ( v20 != 0x3FFFFFFFFFLL );
        v10 = (volatile LONG *)(a1 + 884);
      }
      v6 = v23;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  }
  while ( v7 > v11 );
  MiReleaseSpinLockShared(v24, v9, v12, v13);
  v14 = &v26;
  v15 = MiPageSizes;
  v16 = 4LL;
  do
  {
    v17 = 2LL;
    do
    {
      v18 = *v14;
      if ( *v14 + v7 > v11 )
      {
        v18 = (v11 - v7) / *v15;
        *v14 = v18;
      }
      v7 += v18;
      ++v14;
      --v17;
    }
    while ( v17 );
    ++v15;
    --v16;
  }
  while ( v16 );
  a3[2] = v32;
  a3[1] = v33;
  a3[4] = v30;
  a3[3] = v31;
  a3[6] = v28;
  a3[5] = v29;
  a3[8] = v26;
  result = v27;
  a3[7] = v27;
  *a3 = v11;
  return result;
}
