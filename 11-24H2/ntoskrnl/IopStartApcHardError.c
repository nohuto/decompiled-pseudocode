/*
 * XREFs of IopStartApcHardError @ 0x1408F8420
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopStartApcHardError(PIRP *P)
{
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( (int)PsCreateSystemThreadEx(&Handle, 0LL, 0LL, 0LL, 0LL, IopApcHardError, P, 0LL, 0LL) < 0 )
  {
    IofCompleteRequest(P[4], 1);
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    ZwClose(Handle);
  }
}
