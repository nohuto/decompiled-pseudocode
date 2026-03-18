/*
 * XREFs of W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401B3B64
 * Callers:
 *     _lambda_69228823fbc65be232edc551363dbcf2_::operator() @ 0x1401B3DE0 (_lambda_69228823fbc65be232edc551363dbcf2_--operator().c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401B397C (W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914_(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v5; // rdi

  v3 = -1073741811;
  ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
  v5 = ReferencedSessionProcessWithTag;
  if ( ReferencedSessionProcessWithTag )
  {
    v3 = W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914_(ReferencedSessionProcessWithTag, a2);
    ObfDereferenceObjectWithTag(v5, 0x47727355u);
  }
  return v3;
}
