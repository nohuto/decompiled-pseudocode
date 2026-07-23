/*
 * XREFs of ViErrorDisplayDescription @ 0x140B9562C
 * Callers:
 *     ViErrorReport1 @ 0x140610B34 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140610BB8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140610C4C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140610CF0 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140B85FA0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140B86270 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140B9422C (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140B9435C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140B954C0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B95558 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140BA30B0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140BA3260 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140BA33B0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x14060E85C (VfUtilDbgPrint.c)
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
