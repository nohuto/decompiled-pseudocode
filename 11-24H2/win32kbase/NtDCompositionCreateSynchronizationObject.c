/*
 * XREFs of NtDCompositionCreateSynchronizationObject @ 0x1402230B0
 * Callers:
 *     <none>
 * Callees:
 *     OpenDwmHandle @ 0x14006F814 (OpenDwmHandle.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     DCompositionCreateSynchronizationObject @ 0x1402228F0 (DCompositionCreateSynchronizationObject.c)
 */

__int64 __fastcall NtDCompositionCreateSynchronizationObject(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v5; // rsi
  __int64 v6; // r9
  unsigned int v7; // edx
  int v9; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  Object = 0LL;
  v2 = DCompositionCreateSynchronizationObject(&Object);
  if ( v2 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v3);
    v5 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)DefaultConnection + 2));
      v2 = OpenDwmHandle(Object, ExCompositionObjectType, 3u, v6, v9, &Handle);
      ExReleaseResourceLite(v5[2]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v5, v7);
    }
    else
    {
      v2 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  if ( v2 >= 0 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = Handle;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v2;
}
