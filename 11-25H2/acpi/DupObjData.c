/*
 * XREFs of DupObjData @ 0x140006F90
 * Callers:
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     Return @ 0x140005E70 (Return.c)
 *     RunContext @ 0x140005EA0 (RunContext.c)
 *     Store @ 0x140006870 (Store.c)
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     ExprOp2_64 @ 0x1400072C0 (ExprOp2_64.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     EvalPackageElement @ 0x14002CD0C (EvalPackageElement.c)
 *     CopyObject @ 0x14002E220 (CopyObject.c)
 *     Match_64 @ 0x140041A60 (Match_64.c)
 *     Match_32 @ 0x140041C14 (Match_32.c)
 *     Simulator_CallbackWorker @ 0x14006AF10 (Simulator_CallbackWorker.c)
 *     Simulator_Copy_Arguments @ 0x14006B0E4 (Simulator_Copy_Arguments.c)
 *     ParseDLMObjectInternal @ 0x14006CF34 (ParseDLMObjectInternal.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 *     ParseNestedContext @ 0x14006F010 (ParseNestedContext.c)
 *     ProcessLoadTable @ 0x14006FA50 (ProcessLoadTable.c)
 * Callees:
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     ReferenceObjectEx @ 0x140030DA0 (ReferenceObjectEx.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall DupObjData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned int v6; // ebp
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rdx
  void *v10; // rax
  _DWORD *v11; // r12
  _DWORD *v12; // r15
  int v13; // edi
  int ObjectTypeName; // eax

  v5 = a1;
  v6 = 0;
  if ( a2 == a3 )
    return 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  if ( !*(_QWORD *)(a3 + 32) )
    return 0LL;
  v8 = *(unsigned __int16 *)(a3 + 2);
  switch ( v8 )
  {
    case 14:
      v9 = 1145455176LL;
      break;
    case 3:
      a1 = gpheapGlobal;
      v9 = 1179992648LL;
      break;
    case 2:
      a1 = gpheapGlobal;
      v9 = 1381258056LL;
      break;
    case 4:
      a1 = gpheapGlobal;
      v9 = 1196118088LL;
      break;
    default:
      switch ( *(_WORD *)(a3 + 2) )
      {
        case 5:
          v9 = 1430537800LL;
          goto LABEL_9;
        case 7:
          v9 = 1314276680LL;
          goto LABEL_9;
        case 8:
          v9 = 1413827912LL;
          goto LABEL_9;
        case 9:
          v9 = 1414876488LL;
          goto LABEL_9;
        case 0xA:
          v9 = 1196576584LL;
          goto LABEL_9;
        case 0xB:
          v9 = 1397903432LL;
          goto LABEL_9;
        case 0xC:
          v9 = 1330794568LL;
          goto LABEL_9;
        case 0x82:
          v9 = 1179337288LL;
          goto LABEL_9;
        case 0x83:
          v9 = 1329874504LL;
          goto LABEL_9;
        case 0x84:
          v9 = 1180191048LL;
          goto LABEL_9;
        default:
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(0LL, 3222536195LL);
          ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
          PrintDebugMessage(112, ObjectTypeName, 0, 0, 0LL);
          *(_QWORD *)(a2 + 32) = 0LL;
          goto LABEL_43;
      }
  }
LABEL_9:
  v10 = (void *)HeapAlloc(a1, v9, *(unsigned int *)(a3 + 24));
  *(_QWORD *)(a2 + 32) = v10;
  if ( v10 )
  {
    memmove(v10, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    if ( *(_WORD *)(a2 + 2) == 4 )
    {
      v11 = *(_DWORD **)(a2 + 32);
      v12 = *(_DWORD **)(a3 + 32);
      v13 = 0;
      for ( *v11 = *v12; v13 < *v12; ++v13 )
      {
        v6 = DupObjData(v5, &v11[10 * v13 + 2], &v12[10 * v13 + 2]);
        if ( v6 )
          break;
      }
      goto LABEL_15;
    }
    if ( *(_WORD *)(a2 + 2) == 5 )
      goto LABEL_44;
    if ( *(_WORD *)(a2 + 2) != 130 )
    {
      if ( *(_WORD *)(a2 + 2) != 131 )
      {
        if ( *(_WORD *)(a2 + 2) == 132 )
        {
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) + 112LL));
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
            *(_WORD *)a2 &= ~1u;
            result = 0LL;
            _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
            return result;
          }
        }
LABEL_15:
        *(_WORD *)a2 &= ~1u;
        result = v6;
        _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
        return result;
      }
LABEL_44:
      ReferenceObjectEx(**(_QWORD **)(a2 + 32));
      goto LABEL_15;
    }
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
    if ( (gdwfAMLI & 4) == 0 )
      goto LABEL_15;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) + 112LL));
    *(_WORD *)a2 &= ~1u;
    result = 0LL;
    _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
  }
  else
  {
LABEL_43:
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(43, 0, 0, 0, 0LL);
    return 3221225626LL;
  }
  return result;
}
