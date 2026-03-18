/*
 * XREFs of W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x140168FE4
 * Callers:
 *     _lambda_e8f2675e78c62a600627e1f585dad9bf_::operator() @ 0x1401B3E5C (_lambda_e8f2675e78c62a600627e1f585dad9bf_--operator().c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401B38C4 (W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(__int64 a1)
{
  unsigned int v1; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v3; // rdi

  v1 = -1073741811;
  ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
  v3 = ReferencedSessionProcessWithTag;
  if ( ReferencedSessionProcessWithTag )
  {
    v1 = W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(ReferencedSessionProcessWithTag);
    ObfDereferenceObjectWithTag(v3, 0x47727355u);
  }
  return v1;
}
