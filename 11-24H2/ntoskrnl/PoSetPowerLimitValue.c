/*
 * XREFs of PoSetPowerLimitValue @ 0x140749110
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1402BC6B8 (PoCaptureReasonContext.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x1405CD00C (PopUpdatePowerLimitTimeTracking.c)
 *     PopEvaluatePowerLimitChange @ 0x140749704 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitRequestValueUpdate @ 0x140755B98 (PopDiagTracePowerLimitRequestValueUpdate.c)
 */

__int64 __fastcall PoSetPowerLimitValue(__int64 a1, __int128 *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // esi
  _QWORD *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rbp
  char v11; // r13
  unsigned int i; // r14d
  unsigned int v13; // r8d
  _DWORD *v14; // rsi
  __int64 v15; // r11
  __int64 v16; // r15
  __int64 v17; // r12
  unsigned int v18; // r9d
  __int64 v19; // rcx
  unsigned int v20; // edx
  _QWORD *v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h]
  __int64 v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  v4 = a4;
  v22 = 0LL;
  v5 = a3;
  v7 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = PoCaptureReasonContext(a2, 0LL, 0LL, 1, 0LL, (PVOID *)&v22);
      v7 = v22;
      if ( v9 < 0 )
        v7 = 0LL;
    }
    v10 = *(_QWORD *)(a1 + 64);
    PopAcquireRwLockExclusive((unsigned __int64 *)(v10 + 32));
    if ( *(_BYTE *)(a1 + 16) && *(_BYTE *)(v10 + 48) )
    {
      v11 = 0;
      for ( i = 0; i < v5; ++i )
      {
        v13 = 0;
        v14 = (_DWORD *)(v4 + 16LL * i);
        while ( 1 )
        {
          if ( v13 >= *(_DWORD *)(a1 + 32) )
          {
            v8 = -1073741637;
            goto LABEL_33;
          }
          v15 = *(_QWORD *)(a1 + 40);
          v16 = 2LL * v13;
          v17 = v13;
          if ( *v14 == *(_DWORD *)(v15 + 16LL * v13) && v14[1] == *(_DWORD *)(v15 + 16LL * v13 + 4) )
            break;
          ++v13;
        }
        v18 = v14[2];
        v19 = *(_QWORD *)(v10 + 80);
        if ( v18 != -1 && (v18 < *(_DWORD *)(v19 + 36LL * v13 + 12) || v18 > *(_DWORD *)(v19 + 36LL * v13 + 8))
          || (*(_DWORD *)(v19 + 36LL * v13 + 32) & 1) != 0
          && (v20 = v14[3], v20 != -1)
          && (v20 < *(_DWORD *)(v19 + 36LL * v13 + 16) || v20 > *(_DWORD *)(v19 + 36LL * v13 + 20)) )
        {
          v8 = -1073741811;
          goto LABEL_33;
        }
        if ( v18 != *(_DWORD *)(v15 + 16LL * v13 + 8)
          || (*(_DWORD *)(v19 + 36LL * v13 + 32) & 1) != 0 && v14[3] != *(_DWORD *)(v15 + 16LL * v13 + 12) )
        {
          PopUpdatePowerLimitTimeTracking(a1, v13);
          v11 = 1;
          *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v16 + 8) = v14[2];
          *(_DWORD *)(*(_QWORD *)(a1 + 40) + 16 * v17 + 12) = v14[3];
        }
        v5 = v23;
        v4 = v24;
      }
      if ( v11 )
      {
        PopDiagTracePowerLimitRequestValueUpdate(a1, v7);
        PopEvaluatePowerLimitChange(v10);
      }
      v8 = 0;
    }
    else
    {
      v8 = -1073741431;
    }
LABEL_33:
    if ( v7 )
      PoDestroyReasonContext(v7);
    PopReleaseRwLock((signed __int64 *)(v10 + 32));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
