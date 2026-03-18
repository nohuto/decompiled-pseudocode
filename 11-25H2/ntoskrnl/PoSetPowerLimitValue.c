/*
 * XREFs of PoSetPowerLimitValue @ 0x14073ED10
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PoCaptureReasonContext @ 0x140425AF8 (PoCaptureReasonContext.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x1405CB23C (PopUpdatePowerLimitTimeTracking.c)
 *     PopEvaluatePowerLimitChange @ 0x14073F304 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitRequestValueUpdate @ 0x14074B664 (PopDiagTracePowerLimitRequestValueUpdate.c)
 */

__int64 __fastcall PoSetPowerLimitValue(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // esi
  _QWORD *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r13
  unsigned int i; // r14d
  _DWORD *v16; // rsi
  __int64 v17; // r11
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rcx
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
      v9 = PoCaptureReasonContext(a2, 0, 0LL, 1, 0LL, (__int64 *)&v22);
      v7 = v22;
      if ( v9 < 0 )
        v7 = 0LL;
    }
    v10 = *(_QWORD *)(a1 + 64);
    PopAcquireRwLockExclusive((unsigned __int64 *)(v10 + 32));
    if ( *(_BYTE *)(a1 + 16) && *(_BYTE *)(v10 + 48) )
    {
      v14 = 0;
      for ( i = 0; i < v5; ++i )
      {
        v12 = 0LL;
        v16 = (_DWORD *)(v4 + 16LL * i);
        while ( 1 )
        {
          if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 32) )
          {
            v8 = -1073741637;
            goto LABEL_33;
          }
          v17 = *(_QWORD *)(a1 + 40);
          v18 = 2LL * (unsigned int)v12;
          v19 = (unsigned int)v12;
          if ( *v16 == *(_DWORD *)(v17 + 16LL * (unsigned int)v12)
            && v16[1] == *(_DWORD *)(v17 + 16LL * (unsigned int)v12 + 4) )
          {
            break;
          }
          v12 = (unsigned int)(v12 + 1);
        }
        v13 = (unsigned int)v16[2];
        v20 = *(_QWORD *)(v10 + 80);
        if ( (_DWORD)v13 != -1
          && ((unsigned int)v13 < *(_DWORD *)(v20 + 36LL * (unsigned int)v12 + 12)
           || (unsigned int)v13 > *(_DWORD *)(v20 + 36LL * (unsigned int)v12 + 8))
          || (*(_DWORD *)(v20 + 36LL * (unsigned int)v12 + 32) & 1) != 0
          && (v11 = (unsigned int)v16[3], (_DWORD)v11 != -1)
          && ((unsigned int)v11 < *(_DWORD *)(v20 + 36LL * (unsigned int)v12 + 16)
           || (unsigned int)v11 > *(_DWORD *)(v20 + 36LL * (unsigned int)v12 + 20)) )
        {
          v8 = -1073741811;
          goto LABEL_33;
        }
        if ( (_DWORD)v13 != *(_DWORD *)(v17 + 16LL * (unsigned int)v12 + 8)
          || (*(_DWORD *)(v20 + 36LL * (unsigned int)v12 + 32) & 1) != 0
          && v16[3] != *(_DWORD *)(v17 + 16LL * (unsigned int)v12 + 12) )
        {
          PopUpdatePowerLimitTimeTracking(a1, v12);
          v14 = 1;
          *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v18 + 8) = v16[2];
          *(_DWORD *)(*(_QWORD *)(a1 + 40) + 16 * v19 + 12) = v16[3];
        }
        v5 = v23;
        v4 = v24;
      }
      if ( v14 )
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
      PoDestroyReasonContext(v7, v11, v12, v13);
    PopReleaseRwLock((signed __int64 *)(v10 + 32));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
