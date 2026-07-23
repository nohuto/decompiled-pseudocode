/*
 * XREFs of EtwpSwitchBuffer @ 0x18001D9B0
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18001B700 (EtwpWriteToPrivateBuffers.c)
 *     EtwpRelogEvent @ 0x18001D4A0 (EtwpRelogEvent.c)
 *     EtwpReserveTraceBuffer @ 0x18001D870 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     EtwpGetFreeBuffer @ 0x18001DD08 (EtwpGetFreeBuffer.c)
 *     RtlSleepConditionVariableCS @ 0x18003FD30 (RtlSleepConditionVariableCS.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     ZwSetEvent @ 0x180160210 (ZwSetEvent.c)
 */

__int64 __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // r15d
  __int64 v5; // rdi
  char v6; // r12
  unsigned __int8 v8; // bp
  __int64 v9; // r13
  __int64 i; // rdi
  __int64 FreeBuffer; // rax
  _QWORD *v12; // rdx

  v4 = *(_DWORD *)(a1 + 308) & 0x400;
  v5 = a3;
  v6 = 0;
  v8 = 1;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
  v9 = (unsigned int)v5;
  for ( i = *(_QWORD *)(a1 + 8 * v5 + 560); !i || a2 == i; i = *(_QWORD *)(a1 + 8 * v9 + 560) )
  {
    FreeBuffer = EtwpGetFreeBuffer(a1);
    if ( FreeBuffer )
    {
      *(_WORD *)(FreeBuffer + 40) = *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v9 + 2);
      *(_WORD *)(FreeBuffer + 42) = *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v9);
      *(_QWORD *)(a1 + 8 * v9 + 560) = FreeBuffer;
      if ( a2 && a2 == i )
      {
        v12 = (_QWORD *)(a2 + 32);
        if ( v4 )
        {
          *(_DWORD *)(a2 + 44) = 0;
          *v12 = 0LL;
          *(_QWORD *)(a2 + 24) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 400));
          **(_QWORD **)(a1 + 240) = v12;
          *(_QWORD *)(a1 + 240) = v12;
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 212));
        }
        else
        {
          *(_DWORD *)(a2 + 44) = 3;
          v6 = 1;
          **(_QWORD **)(a1 + 264) = v12;
          *(_QWORD *)(a1 + 264) = v12;
        }
        RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
        goto LABEL_14;
      }
      break;
    }
    if ( (*(_DWORD *)(a1 + 308) & 0x20000000) == 0 || !*(_DWORD *)(a1 + 312) )
    {
      v8 = 0;
      break;
    }
    RtlSleepConditionVariableCS((PRTL_CONDITION_VARIABLE)(a1 + 64), (PRTL_CRITICAL_SECTION)(a1 + 72), 0LL);
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
  if ( !a2 )
    goto LABEL_15;
LABEL_14:
  _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
LABEL_15:
  if ( v6
    && (!*(_DWORD *)(a1 + 352)
     || (unsigned int)(*(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 212)) >= *(_DWORD *)(a1 + 352)) )
  {
    ZwSetEvent(*(HANDLE *)(a1 + 112), 0LL);
  }
  return v8;
}
