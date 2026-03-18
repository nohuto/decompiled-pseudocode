/*
 * XREFs of _lambda_015c32a42809731270cc377abf7a5008_::operator() @ 0x1401F2A28
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x1401F28B4 (W32AttachToProcessAndExecute__lambda_015c32a42809731270cc377abf7a5008___.c)
 *     W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x1401F2964 (W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     RIMSetDeviceInputMode @ 0x14017D314 (RIMSetDeviceInputMode.c)
 */

__int64 __fastcall lambda_015c32a42809731270cc377abf7a5008_::operator()(__int64 a1)
{
  unsigned int v2; // ebx

  RIMLockExclusive(*(_QWORD *)a1 + 104LL);
  RIMLockExclusive(*(_QWORD *)a1 + 760LL);
  v2 = RIMSetDeviceInputMode(*(struct RIMDEV **)(a1 + 8), *(_DWORD *)(a1 + 16));
  RIMUnlockExclusive(*(_QWORD *)a1 + 760LL);
  RIMUnlockExclusive(*(_QWORD *)a1 + 104LL);
  return v2;
}
