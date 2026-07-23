/*
 * XREFs of MiEmptyPageAccessLog @ 0x14020C9F0
 * Callers:
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 *     MiDrainOldAccessBuffers @ 0x14045F56C (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x140462A14 (MiDrainSystemAccessLog.c)
 *     MiAllocateAccessLog @ 0x1404814C0 (MiAllocateAccessLog.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MiQueuePageAccessLog @ 0x14020D250 (MiQueuePageAccessLog.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v2; // edi
  PVOID *v3; // r10
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r9d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 *v9; // r14
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  unsigned __int16 v15; // r15
  unsigned int v16; // r13d
  int v17; // ebp
  unsigned __int64 v18; // r15
  __int64 **v19; // r14
  __int64 v20; // rbp
  ULONG_PTR v21; // rax
  __int64 *v22; // rsi
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v25; // r14
  __int64 *v26; // rcx
  int v27; // r13d
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  PVOID v33; // rcx
  _DWORD v34[2]; // [rsp+28h] [rbp-60h]
  PVOID P; // [rsp+30h] [rbp-58h]
  unsigned __int64 v36; // [rsp+38h] [rbp-50h]
  unsigned __int64 *v38; // [rsp+98h] [rbp+10h]
  unsigned int v39; // [rsp+A0h] [rbp+18h]
  BOOL v40; // [rsp+A8h] [rbp+20h]

  v38 = a2;
  v34[1] = 3;
  v2 = 0;
  v34[0] = 0;
  v3 = (PVOID *)a2;
  v4 = a2[7];
  v36 = v4;
  v40 = KeGetCurrentIrql() == 2;
  if ( v4 <= 1 || (*(_DWORD *)(v4 + 1532) & 0x1000) != 0 || (v5 = *(_QWORD *)(v4 + 744)) == 0 )
    v6 = -1;
  else
    v6 = *(_DWORD *)(v5 + 8);
  v39 = v6;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (unsigned __int64)(v3 + 8);
    v9 = (unsigned __int64 *)*v3;
    v10 = (__int64 *)((char *)v3[4] - 8);
    P = *v3;
    v11 = 0LL;
    v12 = 0LL;
    if ( v10 < (__int64 *)v3 + 8 )
      break;
    if ( v4 > 1 )
    {
      do
      {
        v13 = (unsigned __int64)*v10 >> 9;
        v14 = *v10 >> 16;
        v15 = *v10 & 0x1FF;
        if ( v15 )
        {
          if ( v15 == (_WORD)v12 )
          {
            v7 += (v14 - v11) >> 3 << 12 << v34[(v7 >> 10) & 1];
            v16 = v7;
          }
          else
          {
            v26 = (__int64 *)*((_QWORD *)v3[6] - (*v10 & 0x1FF));
            v27 = *(_DWORD *)(*v26 + 56);
            v2 ^= ((unsigned __int16)v2 ^ (unsigned __int16)(32 * v27)) & 0x400;
            v28 = MiStartingOffset(v26, *v10 >> 16, v6);
            v3 = (PVOID *)v38;
            v12 = v15;
            v29 = v28 << v34[(v2 >> 10) & 1];
            v16 = v15 | v29 & 0xFFFFFA00 | (32 * (v27 & 0x20));
            v7 = __PAIR64__(HIDWORD(v29), v16);
          }
          v11 = v14;
          *v10 = v7;
          v17 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)((_WORD)v13 << 9)) & 0x200;
        }
        else
        {
          v25 = v14 << 25 >> 16;
          *v10 = v25;
          v17 = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)((_WORD)v13 << 9)) & 0x200;
        }
        v6 = v39;
        *(_DWORD *)v10-- = v17;
      }
      while ( (unsigned __int64)v10 >= v8 );
      v4 = v36;
      v9 = (unsigned __int64 *)P;
      break;
    }
    do
    {
      v30 = *v10;
      if ( (*v10 & 0x1FF) == 0 )
      {
        v31 = *v10 >> 16 << 25 >> 16;
        *v10 = v31;
        *(_DWORD *)v10 = v31 ^ ((unsigned __int16)v31 ^ v30 & 0xFE00) & 0x200;
      }
      --v10;
    }
    while ( (unsigned __int64)v10 >= v8 );
LABEL_28:
    MiQueuePageAccessLog(a1, v3, v12);
    v38 = v9;
    v3 = (PVOID *)v9;
    if ( !v9 )
      return;
    v6 = v39;
  }
  if ( v4 <= 1 )
    goto LABEL_28;
  v18 = (unsigned __int64)v3[6] - 8;
  v19 = (__int64 **)((char *)v3[5] + 8);
  if ( (unsigned __int64)v19 <= v18 )
  {
    do
    {
      v20 = **v19;
      v21 = MiReferenceControlAreaFileWithTag(v20, 0x63536D4Du, v40);
      v22 = *(__int64 **)(v21 + 24);
      ObFastDereferenceObjectDeferDelete((__int64 *)(v20 + 64), v21);
      *v19++ = v22;
    }
    while ( (unsigned __int64)v19 <= v18 );
    v4 = v36;
    v3 = (PVOID *)v38;
  }
  _m_prefetchw((const void *)(v4 - 48));
  v23 = *(_QWORD *)(v4 - 48);
  while ( v23 )
  {
    v24 = v23;
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 - 48), v23 + 1, v23);
    if ( v24 == v23 )
    {
      ObpTraceObjectReferenceIfActive(v4 - 48, 1LL, 1279356237LL);
      v3 = (PVOID *)v38;
      v9 = (unsigned __int64 *)P;
      goto LABEL_28;
    }
  }
  ExFreePoolWithTag(v3, 0);
  v32 = P;
  v33 = P;
  if ( P )
  {
    do
    {
      v32 = (_QWORD *)*v32;
      ExFreePoolWithTag(v33, 0);
      v33 = v32;
    }
    while ( v32 );
  }
}
