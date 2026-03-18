/*
 * XREFs of SepDeleteCachedHandlesTable @ 0x140A64838
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140A64520 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlInitWeakEnumerationHashTable @ 0x140356C60 (RtlInitWeakEnumerationHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x140357000 (RtlEnumerateEntryHashTable.c)
 *     RtlEndWeakEnumerationHashTable @ 0x14043F0A0 (RtlEndWeakEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x1404813D0 (RtlDeleteHashTable.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A08D24 (SepDereferenceCachedHandlesEntryInternal.c)
 */

__int64 __fastcall SepDeleteCachedHandlesTable(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  int v2; // esi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  struct _RTL_DYNAMIC_HASH_TABLE *v7; // rcx
  int v8; // eax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rax
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF
  BOOLEAN v11; // [rsp+60h] [rbp+8h] BYREF

  result = 0LL;
  v2 = 0;
  memset(&Enumerator, 0, sizeof(Enumerator));
  if ( BugCheckParameter2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v5, BugCheckParameter2);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    v7 = *(struct _RTL_DYNAMIC_HASH_TABLE **)(BugCheckParameter2 + 8);
    if ( v7 )
    {
      RtlInitWeakEnumerationHashTable(v7, &Enumerator);
      do
      {
        v9 = RtlEnumerateEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 8), &Enumerator);
        if ( !v9 )
          break;
        v11 = 0;
        v8 = SepDereferenceCachedHandlesEntryInternal(BugCheckParameter2, 1, (__int64)v9, &v11);
        v2 = v8;
        if ( !v11 )
        {
          v2 = -1073741823;
          break;
        }
      }
      while ( v8 >= 0 );
      RtlEndWeakEnumerationHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 8), &Enumerator);
      if ( v2 >= 0 )
      {
        RtlDeleteHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 8));
        *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    return (unsigned int)v2;
  }
  return result;
}
