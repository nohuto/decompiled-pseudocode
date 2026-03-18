/*
 * XREFs of IrqArbCommitAllocation @ 0x1400B1CB0
 * Callers:
 *     <none>
 * Callees:
 *     IcCopyData @ 0x1400B1A64 (IcCopyData.c)
 *     PcisuppIsPciDevice @ 0x1400B1EC4 (PcisuppIsPciDevice.c)
 *     PcisuppWriteIntLine @ 0x1400B200C (PcisuppWriteIntLine.c)
 *     IrtClearDeletedMsiMappings @ 0x1400B20A0 (IrtClearDeletedMsiMappings.c)
 *     IrqArbClearStaleAllocations @ 0x1400B2278 (IrqArbClearStaleAllocations.c)
 *     ProcessorCopyData @ 0x1400B22E8 (ProcessorCopyData.c)
 *     LinkNodeClearPossibleData @ 0x1400B265C (LinkNodeClearPossibleData.c)
 *     ProcessorpClearData @ 0x1400B2694 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1400B27A4 (IcClearPossibleData.c)
 *     IrtRemapNewMsiAssignments @ 0x1400B2850 (IrtRemapNewMsiAssignments.c)
 *     IcRemapInputs @ 0x1400B2A48 (IcRemapInputs.c)
 *     IcCopyInputStateToDeviceState @ 0x1400B2C30 (IcCopyInputStateToDeviceState.c)
 *     LinkNodeWriteStateToHardware @ 0x1400B2D74 (LinkNodeWriteStateToHardware.c)
 *     IrqArbpSetDeviceProperties @ 0x1400B2FA8 (IrqArbpSetDeviceProperties.c)
 */

__int64 __fastcall IrqArbCommitAllocation(__int64 a1)
{
  int IsPciDevice; // ebx
  __int64 *i; // rax
  __int64 v5; // rcx
  PRTL_RANGE v6; // rcx
  char *UserData; // rsi
  _DWORD *v8; // rdx
  struct _RTL_RANGE_LIST *v9; // rcx
  __int64 v10; // rcx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR v12; // [rsp+40h] [rbp-20h] BYREF
  char v13; // [rsp+88h] [rbp+28h] BYREF
  PRTL_RANGE Range; // [rsp+90h] [rbp+30h] BYREF

  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  v13 = 0;
  IrqArbClearStaleAllocations();
  IrtClearDeletedMsiMappings(a1);
  IsPciDevice = ProcessorCopyData(0LL);
  if ( IsPciDevice < 0 )
    goto LABEL_2;
  IsPciDevice = IcRemapInputs();
  if ( IsPciDevice < 0 )
    goto LABEL_2;
  IcCopyInputStateToDeviceState(a1, 1LL);
  IsPciDevice = IcCopyData(0);
  if ( IsPciDevice < 0 )
    goto LABEL_2;
  ProcessorpClearData(1LL);
  IcClearPossibleData();
  IsPciDevice = LinkNodeWriteStateToHardware();
  if ( IsPciDevice < 0 )
    goto LABEL_2;
  v5 = LinkNodeListHead - 56;
  for ( i = (__int64 *)LinkNodeListHead; &LinkNodeListHead != i; v5 = (__int64)(i - 7) )
  {
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 36);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(v5 + 28);
    i = *(__int64 **)(v5 + 56);
  }
  LinkNodeClearPossibleData(v5);
  IsPciDevice = IrtRemapNewMsiAssignments(a1);
  if ( IsPciDevice < 0 )
    goto LABEL_2;
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( 1 )
  {
    v6 = Range;
    if ( !Range )
      break;
    if ( Range->Owner && (Range->Attributes & 1) == 0 )
    {
      UserData = (char *)Range->UserData;
      v8 = UserData + 4;
      if ( !UserData || (*v8 & 0x10) == 0 )
      {
        IsPciDevice = PcisuppIsPciDevice(Range->Owner, &v13);
        v8 = UserData + 4;
        if ( IsPciDevice >= 0 && v13 )
        {
          if ( Range->Start <= 0xFF )
            LOBYTE(v8) = Range->Start;
          else
            LOBYTE(v8) = 0;
          PcisuppWriteIntLine(Range->Owner, v8);
          v8 = UserData + 4;
        }
        v6 = Range;
      }
      if ( UserData )
      {
        if ( (*v8 & 1) != 0 )
        {
          v12 = Iterator;
          IsPciDevice = IrqArbpSetDeviceProperties(v6, &v12);
          if ( IsPciDevice < 0 )
            goto LABEL_2;
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  v9 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v9;
  RtlFreeRangeList(v9);
  ProcessorpClearData(1LL);
  IcClearPossibleData();
  LinkNodeClearPossibleData(v10);
  if ( IsPciDevice < 0 )
LABEL_2:
    byte_140089988 = 0;
  return (unsigned int)IsPciDevice;
}
