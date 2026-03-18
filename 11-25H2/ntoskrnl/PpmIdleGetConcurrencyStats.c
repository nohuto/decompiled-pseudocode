/*
 * XREFs of PpmIdleGetConcurrencyStats @ 0x140A60704
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PpmParkGetParkNode @ 0x140493530 (PpmParkGetParkNode.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmIdleGetConcurrencyStats(int a1, __int64 a2, PVOID *a3, _DWORD *a4)
{
  int v5; // edi
  _DWORD *v6; // r12
  PVOID *v7; // r13
  __int16 v8; // bx
  __int64 ParkNode; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 Pool2; // rax
  _DWORD *v14; // r12
  __int64 v16; // rbp
  bool v17; // zf
  __int64 v18; // r13
  unsigned int v19; // ebx
  int v20; // [rsp+20h] [rbp-48h]

  v20 = 0;
  v5 = 0;
  *a3 = 0LL;
  v6 = a4;
  *a4 = 0;
  v7 = a3;
  v8 = a2;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, (unsigned int)a3);
  ParkNode = PpmParkGetParkNode(v8, 0);
  v10 = ParkNode;
  if ( ParkNode && (v11 = *(_QWORD *)(ParkNode + 48)) != 0 )
  {
    if ( a1 == 76 )
    {
      v12 = 1;
    }
    else
    {
      v12 = *(unsigned __int8 *)(ParkNode + 11);
      if ( (unsigned __int8)v12 <= 2u )
        v12 = 2;
    }
    *v6 = 8 * (v12 + *(_DWORD *)(v11 + 8)) + 8;
    Pool2 = ExAllocatePool2(0x100uLL);
    *v7 = (PVOID)Pool2;
    v14 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      if ( a1 == 76 )
      {
        memmove(
          (void *)(Pool2 + 8),
          (const void *)(*(_QWORD *)(v10 + 48) + 328LL),
          8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 48) + 8LL) + 1));
        *v14 = *(_DWORD *)(*(_QWORD *)(v10 + 48) + 8LL);
      }
      else
      {
        if ( a1 != 77 )
          goto LABEL_14;
        v16 = 0LL;
        if ( !*(_BYTE *)(v10 + 11) )
          goto LABEL_14;
        do
        {
          if ( (unsigned int)v16 >= 2 )
            break;
          v18 = *(_QWORD *)(104LL * (unsigned int)v16 + *(_QWORD *)(v10 + 200) + 32);
          if ( v18 )
          {
            v19 = *(_DWORD *)(v18 + 8) + 1;
            v5 = 1;
            memmove(&v14[2 * v20 + 2], (const void *)(v18 + 328), 8LL * v19);
            v20 += v19;
            v14[v16] = *(_DWORD *)(v18 + 8);
          }
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < *(unsigned __int8 *)(v10 + 11) );
        v7 = a3;
        v17 = v5 == 0;
        v5 = 0;
        if ( v17 )
LABEL_14:
          v5 = -1073741637;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    v6 = a4;
  }
  else
  {
    v5 = -1073741637;
  }
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
