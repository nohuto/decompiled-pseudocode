/*
 * XREFs of PpmIdleGetConcurrencyStats @ 0x140A5A754
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmParkGetParkNode @ 0x14049067C (PpmParkGetParkNode.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmIdleGetConcurrencyStats(int a1, __int64 a2, PVOID *a3, unsigned int *a4)
{
  int v5; // edi
  unsigned int *v6; // r13
  PVOID *v7; // r12
  __int16 v8; // bx
  __int64 ParkNode; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  unsigned int v13; // eax
  __int64 Pool2; // rax
  _DWORD *v15; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // r13
  unsigned int v20; // ebx
  unsigned int v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+24h] [rbp-54h]

  v21 = 0;
  *a3 = 0LL;
  *a4 = 0;
  v5 = 0;
  v22 = 0;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, (unsigned int)a3);
  ParkNode = PpmParkGetParkNode(v8, 0);
  v10 = ParkNode;
  if ( !ParkNode )
    goto LABEL_13;
  v11 = *(_QWORD *)(ParkNode + 1104);
  if ( !v11 )
    goto LABEL_13;
  if ( a1 == 76 )
  {
    v12 = 1;
  }
  else
  {
    v12 = *(unsigned __int8 *)(ParkNode + 12);
    if ( (unsigned __int8)v12 <= 2u )
      v12 = 2;
  }
  v13 = 8 * (v12 + *(_DWORD *)(v11 + 8)) + 8;
  *v6 = v13;
  Pool2 = ExAllocatePool2(0x100uLL, v13, 0x206D654Du);
  *v7 = (PVOID)Pool2;
  v15 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v5 = -1073741670;
    goto LABEL_8;
  }
  if ( a1 == 76 )
  {
    memmove(
      (void *)(Pool2 + 8),
      (const void *)(*(_QWORD *)(v10 + 1104) + 328LL),
      8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 1104) + 8LL) + 1));
    *v15 = *(_DWORD *)(*(_QWORD *)(v10 + 1104) + 8LL);
    goto LABEL_8;
  }
  if ( a1 != 77 )
    goto LABEL_13;
  v17 = 0LL;
  if ( !*(_BYTE *)(v10 + 12) )
    goto LABEL_13;
  v18 = Pool2;
  do
  {
    if ( (unsigned int)v17 >= 2 )
      break;
    v19 = *(_QWORD *)(640 * v17 + *(_QWORD *)(v10 + 1288) + 568);
    if ( v19 )
    {
      v20 = *(_DWORD *)(v19 + 8) + 1;
      v22 = 1;
      memmove((void *)(v18 + 8 * (v21 + 1LL)), (const void *)(v19 + 328), 8LL * v20);
      v21 += v20;
      *(_DWORD *)(v18 + 4 * v17) = *(_DWORD *)(v19 + 8);
    }
    v17 = (unsigned int)(v17 + 1);
  }
  while ( (unsigned int)v17 < *(unsigned __int8 *)(v10 + 12) );
  v5 = 0;
  v7 = a3;
  v6 = a4;
  if ( !v22 )
LABEL_13:
    v5 = -1073741637;
LABEL_8:
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v5 < 0 )
  {
    *v6 = 0;
    if ( *v7 )
    {
      ExFreePoolWithTag(*v7, 0x206D654Du);
      *v7 = 0LL;
    }
  }
  return (unsigned int)v5;
}
