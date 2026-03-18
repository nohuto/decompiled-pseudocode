/*
 * XREFs of EtwpAcquireTokenAccessInformation @ 0x140A6CE48
 * Callers:
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAcquireTokenAccessInformation(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  void *v5; // rcx
  void *v6; // rbx
  unsigned int InformationToken; // esi

  v1 = (unsigned __int64 *)(a1 + 688);
  v3 = KeAbPreAcquire(a1 + 688, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, (__int64)v3, (__int64)v1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = *(void **)(a1 + 776);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 776) = 0LL;
  }
  v6 = (void *)PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x746C6644u);
  InformationToken = SeQueryInformationToken(v6, TokenAccessInformation, (PVOID *)(a1 + 776));
  ObfDereferenceObject(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return InformationToken;
}
