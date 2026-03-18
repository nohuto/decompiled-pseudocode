/*
 * XREFs of ProcessorGetDeviceIdtAssignment @ 0x1400B3264
 * Callers:
 *     IrqLibFreeMessageTarget @ 0x1400A8C30 (IrqLibFreeMessageTarget.c)
 *     IrqArbBacktrackAllocation @ 0x1400A9C20 (IrqArbBacktrackAllocation.c)
 *     IrqTransGetInterruptVector @ 0x1400AA520 (IrqTransGetInterruptVector.c)
 *     IrqArbGetDeviceIrql @ 0x1400B1664 (IrqArbGetDeviceIrql.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1400B170C (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpSetDeviceProperties @ 0x1400B2FA8 (IrqArbpSetDeviceProperties.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1400C1580 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorGetDeviceIdtAssignment(PVOID a1, int a2, int a3, _OWORD *a4)
{
  __int64 i; // rbx
  struct _RTL_RANGE_LIST *v9; // rcx
  _OWORD *UserData; // rax
  __int128 v11; // xmm1
  __int64 result; // rax
  PRTL_RANGE Range; // [rsp+20h] [rbp-38h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-30h] BYREF

  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  for ( i = 0LL; (unsigned int)i < ProcessorInstanceCount; i = (unsigned int)(i + 1) )
  {
    v9 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
    if ( v9 )
    {
      if ( a3 )
        ++v9;
      RtlGetFirstRange(v9, &Iterator, &Range);
      while ( Range )
      {
        UserData = Range->UserData;
        if ( UserData && *((_DWORD *)UserData + 4) == a2 && (!a1 || Range->Owner == a1) )
        {
          *a4 = *UserData;
          v11 = UserData[1];
          result = 0LL;
          a4[1] = v11;
          return result;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
    }
  }
  return 3221226021LL;
}
