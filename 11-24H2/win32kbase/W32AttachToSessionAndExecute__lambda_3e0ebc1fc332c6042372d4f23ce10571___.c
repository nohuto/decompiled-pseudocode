/*
 * XREFs of W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401B3BD4
 * Callers:
 *     _lambda_651b33e2fe6a2bdcb95226f96e252a2c_::operator() @ 0x1401B3D6C (_lambda_651b33e2fe6a2bdcb95226f96e252a2c_--operator().c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401B3A2C (W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571_(__int64 a1)
{
  unsigned int v1; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v3; // rdi

  v1 = -1073741811;
  ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
  v3 = ReferencedSessionProcessWithTag;
  if ( ReferencedSessionProcessWithTag )
  {
    v1 = W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571_(ReferencedSessionProcessWithTag);
    ObfDereferenceObjectWithTag(v3, 0x47727355u);
  }
  return v1;
}
