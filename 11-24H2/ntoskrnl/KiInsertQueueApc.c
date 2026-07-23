/*
 * XREFs of KiInsertQueueApc @ 0x1402DF8C0
 * Callers:
 *     KiInsertDeferredPreemptionApc @ 0x1402DB968 (KiInsertDeferredPreemptionApc.c)
 *     KiSuspendThread @ 0x1402DE060 (KiSuspendThread.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KiSchedulerApc @ 0x1402E00D0 (KiSchedulerApc.c)
 *     KiQueueTebUpdateApc @ 0x1403A05FC (KiQueueTebUpdateApc.c)
 *     KeRequestTerminationThread @ 0x1404750A8 (KeRequestTerminationThread.c)
 *     KeTryToInsertQueueApc @ 0x1404C67E8 (KeTryToInsertQueueApc.c)
 *     KiRequestSchedulerApcThread @ 0x1405C0614 (KiRequestSchedulerApcThread.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiInsertQueueApc(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(int, int, int, int, __int64); // r10
  _QWORD **v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 80) && *(_BYTE *)(v1 + 586) )
  {
    v2 = v1 + 600;
  }
  else
  {
    v2 = v1 + 152;
    *(_BYTE *)(a1 + 80) = *(_BYTE *)(v1 + 586);
  }
  v3 = *(char *)(a1 + 81);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v7 = (_QWORD *)(v2 + 16 * v3);
    for ( result = (_QWORD *)v7[1]; result != v7; result = (_QWORD *)result[1] )
    {
      if ( !result[4] )
        break;
    }
    v8 = (_QWORD *)(a1 + 16);
    v9 = *result;
    if ( *(_QWORD **)(*result + 8LL) == result )
      goto LABEL_10;
    goto LABEL_7;
  }
  if ( (_BYTE)v3 )
  {
    v10 = *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 32);
    if ( (char *)v10 == (char *)KiSchedulerApcTerminate )
    {
      *(_BYTE *)(v1 + 194) |= 2u;
      v12 = (_QWORD *)(a1 + 16);
      v13 = v2 + 16 * v3;
      result = *(_QWORD **)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) == v13 )
      {
        *v12 = result;
        v12[1] = v13;
        result[1] = v12;
        *(_QWORD *)v13 = v12;
        return result;
      }
    }
    else
    {
      if ( v10 != KeSpecialUserApcKernelRoutine )
        goto LABEL_6;
      v11 = (_QWORD **)(v2 + 16 * v3);
      for ( result = *v11; result != v11; result = (_QWORD *)*result )
      {
        if ( v10 != KeSpecialUserApcKernelRoutine && (char *)v10 != (char *)KiSchedulerApcTerminate )
        {
          result = (_QWORD *)result[1];
          break;
        }
      }
      *(_BYTE *)(v1 + 194) |= 1u;
      v8 = (_QWORD *)(a1 + 16);
      v9 = *result;
      if ( *(_QWORD **)(*result + 8LL) == result )
      {
LABEL_10:
        *v8 = v9;
        v8[1] = result;
        *(_QWORD *)(v9 + 8) = v8;
        *result = v8;
        return result;
      }
    }
LABEL_7:
    __fastfail(3u);
  }
LABEL_6:
  v4 = (_QWORD *)(a1 + 16);
  v5 = v2 + 16 * v3;
  result = *(_QWORD **)(v5 + 8);
  if ( *result != v5 )
    goto LABEL_7;
  *v4 = v5;
  v4[1] = result;
  *result = v4;
  *(_QWORD *)(v5 + 8) = v4;
  return result;
}
