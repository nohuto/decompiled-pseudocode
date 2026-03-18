/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1400C4BEC
 * Callers:
 *     ACPIInitialize @ 0x1400C4008 (ACPIInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140098154 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     IcAddGicInstance @ 0x1400AABFC (IcAddGicInstance.c)
 *     IcAddSecondaryIcInstance @ 0x1400AAC74 (IcAddSecondaryIcInstance.c)
 *     IrqLibpParseMadt @ 0x1400C8660 (IrqLibpParseMadt.c)
 *     IrqArbUpdateInterruptLimit @ 0x1400C88A8 (IrqArbUpdateInterruptLimit.c)
 *     ProcessorConfigure @ 0x1400C890C (ProcessorConfigure.c)
 *     IrqPolicyConfigure @ 0x1400C8C5C (IrqPolicyConfigure.c)
 *     IrqPolicyUpdatePolicy @ 0x1400C8F70 (IrqPolicyUpdatePolicy.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(int a1, __int64 a2)
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140088280);
  IrqLibRealInterruptModel = a1;
  if ( (unsigned int)(a1 - 2) <= 2 )
  {
    IrqLibInterruptModel = 1;
  }
  else
  {
    IrqLibInterruptModel = a1;
    if ( a1 != 1 )
      return 3221225485LL;
  }
  result = ProcessorConfigure();
  if ( (int)result >= 0 )
  {
    result = IrqPolicyConfigure();
    if ( (int)result >= 0 )
    {
      if ( IrqLibRealInterruptModel != 1 )
      {
        switch ( IrqLibRealInterruptModel )
        {
          case 2:
            IrqLibGicVersion = 1;
            break;
          case 3:
            IrqLibGicVersion = 3;
            break;
          case 4:
            IrqLibpParseMadt(a2);
            result = IcAddGicInstance(0);
            goto LABEL_16;
          default:
            return 3221225473LL;
        }
      }
      result = IrqLibpParseMadt(a2);
LABEL_16:
      if ( (int)result >= 0 )
      {
        result = IrqPolicyUpdatePolicy();
        if ( (int)result >= 0 )
        {
          IrqArbUpdateInterruptLimit();
          IcAddSecondaryIcInstance();
          HalPrivateDispatchTable[22] = (__int64 (__fastcall *)(_QWORD, __int64))IrqTransGetInterruptVector;
          HalPrivateDispatchTable[23] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibpGetVectorInput;
          HalPrivateDispatchTable[27] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibAllocateMessageTarget;
          HalPrivateDispatchTable[28] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibFreeMessageTarget;
          return 0LL;
        }
      }
    }
  }
  return result;
}
