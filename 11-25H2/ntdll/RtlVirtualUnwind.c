/*
 * XREFs of RtlVirtualUnwind @ 0x1800D5260
 * Callers:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     _invalid_parameter @ 0x180122258 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x180122390 (__report_gsfailure.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x180078D20 (RtlpxVirtualUnwind.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  PCONTEXT v8; // rax
  unsigned int ContextFlags; // r10d
  bool v14; // dl
  int P1Home; // ecx
  int P3Home; // r8d
  unsigned int P1Home_high; // r9d
  unsigned int P3Home_high; // r11d
  _QWORD v20[4]; // [rsp+60h] [rbp-28h] BYREF

  v8 = ContextRecord;
  ContextRecord = 0LL;
  v20[0] = 0LL;
  v20[1] = 0LL;
  ContextFlags = v8->ContextFlags;
  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && (ContextFlags & 0x7FFFFF0) != 0x200000
    && (ContextFlags & 0x7FFFFC0) != 0x400000 )
  {
    goto LABEL_19;
  }
  v14 = 0;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v14 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( !v14 && !MEMORY[0x7FFE03D8] || (ContextFlags & 0x100080) == 0x100080 )
  {
    v8->ContextFlags = 1048587;
    goto LABEL_18;
  }
  if ( (ContextFlags & 0x100000) == 0 )
  {
LABEL_19:
    ContextFlags = ContextFlags & 0xF800001F | 0x100000;
    v8->ContextFlags = ContextFlags;
  }
  if ( (ContextFlags & 0x100040) == 0x100040 )
  {
    P1Home = v8[1].P1Home;
    P3Home = v8[1].P3Home;
    if ( P1Home > P3Home
      || (P1Home_high = HIDWORD(v8[1].P1Home), P3Home_high = HIDWORD(v8[1].P3Home), P1Home_high < 0x530)
      || (int)(P1Home_high + P1Home) < (int)(P3Home_high + P3Home)
      || HIDWORD(v8[1].P2Home) != 1232
      || P3Home_high < 0x40
      || (struct _CONTEXT *)((char *)&v8[1] + SLODWORD(v8[1].P2Home)) != v8 )
    {
      v8->ContextFlags = ContextFlags & 0xFFFFFFBF;
    }
  }
LABEL_18:
  v20[2] = ContextPointers;
  RtlpxVirtualUnwind(
    HandlerType,
    ImageBase,
    (char *)ControlPc,
    &FunctionEntry->BeginAddress,
    (__int64)v8,
    0LL,
    HandlerData,
    (char ***)EstablisherFrame,
    &ContextRecord,
    (__int64)v20,
    0);
  return (PEXCEPTION_ROUTINE)ContextRecord;
}
