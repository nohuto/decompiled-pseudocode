/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x140222CB0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1400D1A6C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v5; // rdi
  __int64 v6; // r8
  PVOID v7; // rcx
  unsigned int v8; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( UserIsCurrentProcessDwm()
    || (LOBYTE(Object) = 0,
        DestinationString = 0LL,
        RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
        (int)RtlCapabilityCheck(0LL, &DestinationString, &Object) >= 0)
    && (_BYTE)Object )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v3);
    v5 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)DefaultConnection + 2));
      Object = 0LL;
      LOBYTE(v6) = 1;
      v2 = DirectComposition::SynchronizationObject::ResolveHandle(
             a1,
             2LL,
             v6,
             (struct DirectComposition::SynchronizationObject **)&Object);
      if ( v2 >= 0 )
      {
        v7 = Object;
        *((_BYTE *)Object + 33) = 1;
        ObfDereferenceObject(v7);
      }
      ExReleaseResourceLite(v5[2]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v5, v8);
    }
    else
    {
      v2 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v2;
}
