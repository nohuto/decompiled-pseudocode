/*
 * XREFs of IoIsInitiator32bitProcess @ 0x140402490
 * Callers:
 *     <none>
 * Callees:
 *     IoGetInitiatorProcess @ 0x140402500 (IoGetInitiatorProcess.c)
 *     IoIs32bitProcess @ 0x140402530 (IoIs32bitProcess.c)
 */

BOOLEAN __fastcall IoIsInitiator32bitProcess(PIRP Irp)
{
  __int64 InitiatorProcess; // rax
  __int16 v4; // cx

  InitiatorProcess = IoGetInitiatorProcess(Irp->Tail.Overlay.CurrentStackLocation->FileObject);
  if ( !InitiatorProcess )
    return IoIs32bitProcess(Irp);
  if ( *(_QWORD *)(InitiatorProcess + 784) )
  {
    v4 = *(_WORD *)(InitiatorProcess + 1772);
    if ( v4 == 332 || v4 == 452 )
      return 1;
  }
  return 0;
}
