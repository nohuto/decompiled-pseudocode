/*
 * XREFs of PpmIdleGetConcurrencyStats @ 0x140A61E54
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmParkGetParkNode @ 0x140495DBC (PpmParkGetParkNode.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmIdleGetConcurrencyStats(int a1, __int64 a2, PVOID *a3, _DWORD *a4)
{
  int v5; // edi
  _DWORD *v6; // r13
  PVOID *v7; // r12
  __int16 v8; // bx
  __int64 ParkNode; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 Pool2; // rax
  _DWORD *v14; // rbx
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // r13
  unsigned int v19; // ebx
  unsigned int v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+24h] [rbp-54h]

  v20 = 0;
  *a3 = 0LL;
  *a4 = 0;
  v5 = 0;
  v21 = 0;
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
  *v6 = 8 * (v12 + *(_DWORD *)(v11 + 8)) + 8;
  Pool2 = ExAllocatePool2(0x100uLL);
  *v7 = (PVOID)Pool2;
  v14 = (_DWORD *)Pool2;
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
    *v14 = *(_DWORD *)(*(_QWORD *)(v10 + 1104) + 8LL);
    goto LABEL_8;
  }
  if ( a1 != 77 )
    goto LABEL_13;
  v16 = 0LL;
  if ( !*(_BYTE *)(v10 + 12) )
    goto LABEL_13;
  v17 = Pool2;
  do
  {
    if ( (unsigned int)v16 >= 2 )
      break;
    v18 = *(_QWORD *)(640 * v16 + *(_QWORD *)(v10 + 1280) + 568);
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 + 8) + 1;
      v21 = 1;
      memmove((void *)(v17 + 8 * (v20 + 1LL)), (const void *)(v18 + 328), 8LL * v19);
      v20 += v19;
      *(_DWORD *)(v17 + 4 * v16) = *(_DWORD *)(v18 + 8);
    }
    v16 = (unsigned int)(v16 + 1);
  }
  while ( (unsigned int)v16 < *(unsigned __int8 *)(v10 + 12) );
  v5 = 0;
  v7 = a3;
  v6 = a4;
  if ( !v21 )
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
