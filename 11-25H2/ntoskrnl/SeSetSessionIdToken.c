/*
 * XREFs of SeSetSessionIdToken @ 0x140A4CF28
 * Callers:
 *     SepCopyClientTokenAndSetSilo @ 0x1407804D4 (SepCopyClientTokenAndSetSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140780630 (SeSetSessionIdTokenWithLinked.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2A050 (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetSessionObjectById @ 0x1403D6D20 (PsGetSessionObjectById.c)
 *     SepSetTokenLowboxNumber @ 0x140A0DB74 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A0E024 (SepDereferenceLowBoxNumberEntry.c)
 */

NTSTATUS __stdcall SeSetSessionIdToken(PACCESS_TOKEN Token, ULONG SessionId)
{
  NTSTATUS v2; // esi
  void *SessionObjectById; // rdi
  void *v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  __int64 v10; // rdx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  SessionObjectById = 0LL;
  v4 = 0LL;
  if ( !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = PsGetSessionObjectById();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
  _InterlockedOr(v11, 0);
  if ( *((_BYTE *)Token + 204) )
  {
    v2 = -1073741525;
  }
  else
  {
    v8 = *((_DWORD *)Token + 50);
    if ( (v8 & 0x4000) != 0 )
    {
      v10 = *((_QWORD *)Token + 135);
      if ( v10 )
      {
        SepDereferenceLowBoxNumberEntry(*((_DWORD *)Token + 30), v10);
        *((_QWORD *)Token + 135) = 0LL;
        v8 = *((_DWORD *)Token + 50);
      }
    }
    if ( *((_DWORD *)Token + 30) != SessionId )
    {
      *((_DWORD *)Token + 30) = SessionId;
      if ( !SeTokenDoesNotTrackSessionObject )
      {
        v4 = (void *)*((_QWORD *)Token + 145);
        *((_QWORD *)Token + 145) = SessionObjectById;
      }
      SessionObjectById = 0LL;
    }
    *((_DWORD *)Token + 30) = SessionId;
    if ( (v8 & 0x4000) != 0 )
      v2 = SepSetTokenLowboxNumber((__int64)Token, *((_QWORD *)Token + 98));
  }
  _InterlockedOr(v11, 0);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  if ( SessionObjectById )
    ObfDereferenceObject(SessionObjectById);
  if ( v4 )
    ObfDereferenceObject(v4);
  return v2;
}
