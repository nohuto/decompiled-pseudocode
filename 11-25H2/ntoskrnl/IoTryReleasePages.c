/*
 * XREFs of IoTryReleasePages @ 0x14043D044
 * Callers:
 *     MiRequestIoPageMdlCacheRelease @ 0x14043CFBC (MiRequestIoPageMdlCacheRelease.c)
 *     MiInvokeIoReleasePages @ 0x1404DA89C (MiInvokeIoReleasePages.c)
 * Callees:
 *     IopMcDereferenceBufferEntry @ 0x14043D0D4 (IopMcDereferenceBufferEntry.c)
 *     IopMcFindNextTableEntryForUnlock @ 0x14043D130 (IopMcFindNextTableEntryForUnlock.c)
 *     IopMcTryUnlockMdl @ 0x14059F778 (IopMcTryUnlockMdl.c)
 */

void __fastcall IoTryReleasePages(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  ULONG_PTR NextTableEntryForUnlock; // rax
  ULONG_PTR v5; // rbx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = a2;
    do
    {
      _InterlockedIncrement(&dword_140F8BB20);
      BugCheckParameter3 = 0LL;
      v6[2] = 0LL;
      v6[1] = 0LL;
      v6[0] = a1;
      while ( 1 )
      {
        NextTableEntryForUnlock = IopMcFindNextTableEntryForUnlock(v6, &BugCheckParameter3);
        v5 = NextTableEntryForUnlock;
        if ( !NextTableEntryForUnlock )
          break;
        if ( !*(_DWORD *)(NextTableEntryForUnlock + 48) )
          IopMcTryUnlockMdl(NextTableEntryForUnlock, BugCheckParameter3);
        IopMcDereferenceBufferEntry(v5);
      }
      ++a1;
      --v2;
    }
    while ( v2 );
  }
}
