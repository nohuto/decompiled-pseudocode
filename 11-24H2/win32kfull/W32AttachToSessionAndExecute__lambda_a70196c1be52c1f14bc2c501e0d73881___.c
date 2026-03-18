/*
 * XREFs of W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028B228
 * Callers:
 *     _lambda_18de47f5008d7628aefe0bcb3f8d210a_::operator() @ 0x14028B288 (_lambda_18de47f5008d7628aefe0bcb3f8d210a_--operator().c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028B18C (W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(__int64 a1)
{
  unsigned int v1; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v3; // rdi

  v1 = -1073741811;
  ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
  v3 = ReferencedSessionProcessWithTag;
  if ( ReferencedSessionProcessWithTag )
  {
    v1 = W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(ReferencedSessionProcessWithTag);
    ObfDereferenceObjectWithTag(v3, 0x47727355u);
  }
  return v1;
}
