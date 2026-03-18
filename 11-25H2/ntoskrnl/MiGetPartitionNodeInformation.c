/*
 * XREFs of MiGetPartitionNodeInformation @ 0x140392848
 * Callers:
 *     MmFillEtwNodeInformation @ 0x1403BE054 (MmFillEtwNodeInformation.c)
 *     MmManagePartitionNodeInformation @ 0x1407ED2D0 (MmManagePartitionNodeInformation.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiGetPartitionNodePageCounts @ 0x1403930FC (MiGetPartitionNodePageCounts.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  unsigned __int64 *v12; // rcx
  __int64 *v13; // r8
  __int64 v14; // r10
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 result; // rax
  ULONG_PTR v18; // r15
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-A8h]
  volatile signed __int32 *v22; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v24; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-80h]
  unsigned __int64 v26; // [rsp+50h] [rbp-78h]
  unsigned __int64 v27; // [rsp+58h] [rbp-70h]
  unsigned __int64 v28; // [rsp+60h] [rbp-68h]
  unsigned __int64 v29; // [rsp+68h] [rbp-60h]
  unsigned __int64 v30; // [rsp+70h] [rbp-58h]
  unsigned __int64 v31; // [rsp+78h] [rbp-50h]

  v3 = a2;
  memset_0(&v24, 0, 0x40uLL);
  v6 = a1[2] + 57216 * v3;
  v21 = v6;
  memset_0(a3, 0, 0x48uLL);
  v7 = 0LL;
  v22 = (volatile signed __int32 *)(v6 + 15220);
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
    MiGetPartitionNodePageCounts(a1, (unsigned int)v3, &v24);
    ExAcquireSpinLockSharedAtDpcLevel(v10);
    if ( a1[880] )
    {
      v18 = a1[882];
      if ( v18 != 0x3FFFFFFFFFLL )
      {
        do
        {
          v19 = MiPageToNode(v18);
          v20 = v7 + 1;
          if ( v19 != (_DWORD)v3 )
            v20 = v7;
          v7 = v20;
          v18 = *(_QWORD *)(48 * v18 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
        }
        while ( v18 != 0x3FFFFFFFFFLL );
        v10 = (volatile LONG *)(a1 + 884);
      }
      v6 = v21;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  }
  while ( v7 > v11 );
  MiReleaseSpinLockShared(v22, v9);
  v12 = &v24;
  v13 = MiPageSizes;
  v14 = 4LL;
  do
  {
    v15 = 2LL;
    do
    {
      v16 = *v12;
      if ( *v12 + v7 > v11 )
      {
        v16 = (v11 - v7) / *v13;
        *v12 = v16;
      }
      v7 += v16;
      ++v12;
      --v15;
    }
    while ( v15 );
    ++v13;
    --v14;
  }
  while ( v14 );
  a3[2] = v30;
  a3[1] = v31;
  a3[4] = v28;
  a3[3] = v29;
  a3[6] = v26;
  a3[5] = v27;
  a3[8] = v24;
  result = v25;
  a3[7] = v25;
  *a3 = v11;
  return result;
}
