/*
 * XREFs of SepDeleteCachedHandlesTable @ 0x140A627A8
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140A62490 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlEnumerateEntryHashTable @ 0x1403EA220 (RtlEnumerateEntryHashTable.c)
 *     RtlInitWeakEnumerationHashTable @ 0x1403EA3B0 (RtlInitWeakEnumerationHashTable.c)
 *     RtlEndWeakEnumerationHashTable @ 0x14043E110 (RtlEndWeakEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x140480710 (RtlDeleteHashTable.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A06268 (SepDereferenceCachedHandlesEntryInternal.c)
 */

__int64 __fastcall SepDeleteCachedHandlesTable(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  int v2; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rax
  __int64 *v6; // rbp
  _RTL_DYNAMIC_HASH_TABLE *v7; // rcx
  int v8; // eax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF
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
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v5, BugCheckParameter2);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    v7 = *(_RTL_DYNAMIC_HASH_TABLE **)(BugCheckParameter2 + 8);
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
