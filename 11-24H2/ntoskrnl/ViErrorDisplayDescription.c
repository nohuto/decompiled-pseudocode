/*
 * XREFs of ViErrorDisplayDescription @ 0x140B9362C
 * Callers:
 *     ViErrorReport1 @ 0x140612574 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1406125F8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14061268C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140612730 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B83FA0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B84270 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140B9222C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B9235C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B934C0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B93558 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140BA10B0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140BA1260 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140BA13B0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 */

__int64 __fastcall ViErrorDisplayDescription(int a1)
{
  __int64 result; // rax

  VfUtilDbgPrint("************************************************************\nDriver Verifier detected violation:\n\n");
  for ( result = 0LL; (unsigned int)result < 0x3F; result = (unsigned int)(result + 1) )
  {
    if ( *((_DWORD *)&ViErrorDescriptions + 4 * (unsigned int)result) == a1 )
      return VfUtilDbgPrint("%s\n\n", *((const char **)&ViErrorDescriptions + 2 * (unsigned int)result + 1));
  }
  return result;
}
