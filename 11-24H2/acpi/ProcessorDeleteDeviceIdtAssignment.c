/*
 * XREFs of ProcessorDeleteDeviceIdtAssignment @ 0x1400464E8
 * Callers:
 *     IrqLibAllocateMessageTarget @ 0x1400A8980 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1400A8C30 (IrqLibFreeMessageTarget.c)
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1400A9C20 (IrqArbBacktrackAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1400B170C (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorDeleteDeviceIdtAssignment(void *a1, int a2, unsigned int a3, int a4)
{
  char v4; // si
  char v5; // r15
  ULONGLONG v6; // r13
  __int64 v7; // rdi
  PVOID v8; // r12
  struct _RTL_RANGE_LIST *v9; // r14
  _DWORD *UserData; // rbx
  unsigned int v11; // r12d
  __int64 v12; // rdx
  ULONGLONG v13; // r8
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-30h] BYREF
  PRTL_RANGE Range; // [rsp+28h] [rbp-28h] BYREF
  _RANGE_LIST_ITERATOR Iterator; // [rsp+30h] [rbp-20h] BYREF
  int v20; // [rsp+A8h] [rbp+58h]

  v20 = a4;
  Range = 0LL;
  ProcNumber = 0;
  v4 = 0;
  v5 = 0;
  v6 = a3;
  v7 = 0LL;
  v8 = a1;
  memset(&Iterator, 0, sizeof(Iterator));
  if ( !ProcessorInstanceCount )
    return 3221226021LL;
  do
  {
    v9 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v7);
    if ( v9 )
    {
      if ( a4 )
        ++v9;
      RtlGetFirstRange(v9, &Iterator, &Range);
      while ( Range )
      {
        if ( Range->Owner == v8 && LODWORD(Range->Start) == (_DWORD)v6 )
        {
          UserData = Range->UserData;
          if ( UserData )
          {
            if ( UserData[4] == a2 )
            {
              v11 = UserData[6] - 1 + UserData[5];
              KeGetProcessorNumberFromIndex(v7, &ProcNumber);
              v12 = *(_QWORD *)UserData & ~(1LL << ProcNumber.Number);
              *(_QWORD *)UserData = v12;
              if ( !v12 )
              {
                ExFreePoolWithTag(UserData, 0);
                v4 = 1;
              }
              v13 = v11;
              v8 = a1;
              v5 = 1;
              Range->UserData = 0LL;
              RtlDeleteRange(v9, v6, v13, a1);
              break;
            }
          }
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
      a4 = v20;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < ProcessorInstanceCount );
  if ( v5 )
    return v4 == 0 ? 0xC0000001 : 0;
  else
    return 3221226021LL;
}
