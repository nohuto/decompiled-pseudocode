/*
 * XREFs of PpmIdleGetPackageIdleIntervalStats @ 0x140A60E74
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmConvertTimeTo @ 0x140370A00 (PpmConvertTimeTo.c)
 *     PpmParkGetParkNode @ 0x14049067C (PpmParkGetParkNode.c)
 */

__int64 __fastcall PpmIdleGetPackageIdleIntervalStats(int a1, __int64 a2, ULONGLONG *a3)
{
  __int64 v4; // rdi
  int v5; // r12d
  ULONGLONG *v6; // r14
  __int16 v7; // bx
  __int64 ParkNode; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v14; // rbp
  __int64 v15; // rbx
  ULONGLONG *v16; // r15
  __int64 v17; // r13

  LODWORD(v4) = 0;
  v5 = 0;
  v6 = a3;
  v7 = a2;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, (unsigned int)a3);
  ParkNode = PpmParkGetParkNode(v7, 0);
  v9 = ParkNode;
  if ( !ParkNode || (v10 = *(_QWORD *)(ParkNode + 1104)) == 0 )
  {
LABEL_10:
    LODWORD(v4) = -1073741637;
    goto LABEL_11;
  }
  if ( a1 == 74 )
  {
    v14 = 37LL;
    v15 = v10 + 32 - (_QWORD)v6;
    do
    {
      *v6 = PpmConvertTimeTo(*(ULONGLONG *)((char *)v6 + v15), 0x989680uLL);
      ++v6;
      --v14;
    }
    while ( v14 );
  }
  else
  {
    if ( a1 != 75 )
      goto LABEL_10;
    v11 = 0;
    if ( !*(_BYTE *)(ParkNode + 12) )
      goto LABEL_10;
    do
    {
      if ( v11 >= 2 )
        break;
      v12 = *(_QWORD *)(640LL * v11 + *(_QWORD *)(v9 + 1288) + 568);
      if ( v12 )
      {
        v5 = 1;
        v16 = &v6[37 * v11];
        v4 = 37LL;
        v17 = v12 + 32 - (_QWORD)v16;
        do
        {
          *v16 = PpmConvertTimeTo(*(ULONGLONG *)((char *)v16 + v17), 0x989680uLL);
          ++v16;
          --v4;
        }
        while ( v4 );
      }
      ++v11;
    }
    while ( v11 < *(unsigned __int8 *)(v9 + 12) );
    if ( !v5 )
      goto LABEL_10;
  }
LABEL_11:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)v4;
}
