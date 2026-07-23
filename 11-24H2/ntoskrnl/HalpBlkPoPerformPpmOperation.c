/*
 * XREFs of HalpBlkPoPerformPpmOperation @ 0x140BDD008
 * Callers:
 *     HalpBlkHandleIpi @ 0x140BDD3E0 (HalpBlkHandleIpi.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperationForIoPort @ 0x140BDD0EC (HalpBlkPoPerformPpmOperationForIoPort.c)
 */

char HalpBlkPoPerformPpmOperation()
{
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // rdi
  volatile __int32 *p_Handler; // r11
  int Next_high; // ecx
  int Handler; // eax
  int v4; // ecx
  _EXCEPTION_REGISTRATION_RECORD *Next; // r8
  unsigned __int64 v6; // r9

  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  p_Handler = (volatile __int32 *)&ExceptionList[138].Handler;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&ExceptionList[139], 2, 1) == 1 )
  {
    Next_high = HIDWORD(ExceptionList[139].Next);
    if ( Next_high == 3 )
    {
      KeGetPcr()->NtTib.ExceptionList[141].Next = ExceptionList[140].Next;
LABEL_14:
      _InterlockedIncrement64((volatile signed __int64 *)&ExceptionList[8]);
      _InterlockedExchange(p_Handler + 2, 0);
      return 1;
    }
    Handler = (int)ExceptionList[139].Handler;
    if ( Handler == 1 )
    {
      v4 = Next_high - 1;
      if ( !v4 )
      {
        ExceptionList[140].Next = (_EXCEPTION_REGISTRATION_RECORD *)__readmsr(HIDWORD(ExceptionList[139].Handler));
        goto LABEL_14;
      }
      if ( v4 == 1 )
      {
        Next = ExceptionList[140].Next;
        v6 = (unsigned __int64)ExceptionList[140].Handler;
        if ( Next )
          v6 = __readmsr(HIDWORD(ExceptionList[139].Handler)) & (unsigned __int64)Next | ~(unsigned __int64)Next & v6;
        __writemsr(HIDWORD(ExceptionList[139].Handler), v6);
        goto LABEL_14;
      }
    }
    else if ( Handler == 2 )
    {
      HalpBlkPoPerformPpmOperationForIoPort(&ExceptionList[138].Handler);
      goto LABEL_14;
    }
    __debugbreak();
    goto LABEL_14;
  }
  return 0;
}
