/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x1409E0750
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF70 (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebx
  _QWORD *SessionById; // rax
  __int64 v10; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v7 = *((_DWORD *)Token + 30);
  *SessionId = v7;
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v7 )
  {
    SessionById = (_QWORD *)PsGetSessionById(v7);
    if ( SessionById )
    {
      v10 = *(_QWORD *)(SessionById[93] + 160LL);
      ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
      *IsServiceSession = v7 == (unsigned int)PsGetServerSiloServiceSessionId(v10);
    }
    else
    {
      *IsServiceSession = 0;
    }
  }
  else
  {
    *IsServiceSession = 1;
  }
  return 0;
}
