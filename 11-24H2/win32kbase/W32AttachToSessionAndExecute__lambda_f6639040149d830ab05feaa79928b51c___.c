/*
 * XREFs of W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x140169054
 * Callers:
 *     _lambda_228c94f87b50664141beb087d74bed1f_::operator() @ 0x1401B3C4C (_lambda_228c94f87b50664141beb087d74bed1f_--operator().c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x1401B3AC8 (W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c_(__int64 a1)
{
  unsigned int v1; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v3; // rdi

  v1 = -1073741811;
  ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
  v3 = ReferencedSessionProcessWithTag;
  if ( ReferencedSessionProcessWithTag )
  {
    v1 = W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c_(ReferencedSessionProcessWithTag);
    ObfDereferenceObjectWithTag(v3, 0x47727355u);
  }
  return v1;
}
