/*
 * XREFs of IopStartApcHardError @ 0x140A16F50
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
