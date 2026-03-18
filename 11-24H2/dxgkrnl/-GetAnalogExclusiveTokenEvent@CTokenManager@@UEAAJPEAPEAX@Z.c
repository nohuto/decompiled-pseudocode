/*
 * XREFs of ?GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z @ 0x14009A370
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D238 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D270 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX_N@Z @ 0x14009A58C (-OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX_N@Z.c)
 */

__int64 __fastcall CTokenManager::GetAnalogExclusiveTokenEvent(void **this, void **a2)
{
  NTSTATUS v4; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  CTokenManager::AcquireTokenManagerLock((CTokenManager *)this);
  if ( this[10]
    || (memset(&ObjectAttributes.Length + 1, 0, 20),
        memset(&ObjectAttributes.Attributes + 1, 0, 20),
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 512,
        v4 = ZwCreateEvent(this + 10, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0),
        v4 >= 0) )
  {
    v4 = CTokenManager::OpenEventForSynchonize(this[10], a2, 0);
  }
  CTokenManager::ReleaseTokenManagerLock((CTokenManager *)this);
  return (unsigned int)v4;
}
