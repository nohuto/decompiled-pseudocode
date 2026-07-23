/*
 * XREFs of SepCopyClientTokenAndSetSilo @ 0x14078F764
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x140AB70C8 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     SepSetServerSiloToken @ 0x14078FBD8 (SepSetServerSiloToken.c)
 *     SeCopyClientToken @ 0x1408E7698 (SeCopyClientToken.c)
 *     SeSetSessionIdToken @ 0x140A471F8 (SeSetSessionIdToken.c)
 */

__int64 __fastcall SepCopyClientTokenAndSetSilo(int a1, int a2, __int64 a3, PVOID *a4)
{
  __int64 result; // rax
  ULONG ServerSiloServiceSessionId; // eax
  NTSTATUS v8; // ebx

  result = SeCopyClientToken(a1, a2, a3, 0, 0LL, (__int64)a4);
  if ( (int)result >= 0 )
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a3);
    if ( ServerSiloServiceSessionId != -1 && (v8 = SeSetSessionIdToken(*a4, ServerSiloServiceSessionId), v8 < 0)
      || (v8 = SepSetServerSiloToken(*a4, a3), v8 < 0) )
    {
      ObfDereferenceObject(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v8;
  }
  return result;
}
