/*
 * XREFs of NewGlobalHeap @ 0x14006E9E8
 * Callers:
 *     NewNameSpaceObject @ 0x140001CFC (NewNameSpaceObject.c)
 *     ParseObjName @ 0x140001F40 (ParseObjName.c)
 *     WriteField @ 0x14000229C (WriteField.c)
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     ParseAcquire @ 0x140002BC0 (ParseAcquire.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     PushScope @ 0x1400050C0 (PushScope.c)
 *     WriteFieldLoop @ 0x140005880 (WriteFieldLoop.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     PushTerm @ 0x14000A040 (PushTerm.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     PushAccFieldObj @ 0x140011520 (PushAccFieldObj.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     PushCall @ 0x140013020 (PushCall.c)
 *     NewObjOwner @ 0x14002FE10 (NewObjOwner.c)
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 * Callees:
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall NewGlobalHeap(_QWORD *a1)
{
  unsigned int v2; // esi
  _QWORD *Pool2; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rbx

  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)gdwGlobalHeapBlkSize, 1215065409LL);
  *a1 = Pool2;
  v4 = Pool2;
  if ( Pool2 )
  {
    v5 = (unsigned int)gdwGlobalHeapBlkSize;
    memset(Pool2, 0, (unsigned int)gdwGlobalHeapBlkSize);
    *(_DWORD *)v4 = 1346454856;
    v4[1] = (char *)v4 + v5;
    v4[4] = v4 + 7;
    v4[6] = v4 + 5;
    v4[5] = v4 + 5;
  }
  else
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(0LL, -1073741670);
    PrintDebugMessage(0x6Eu, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
