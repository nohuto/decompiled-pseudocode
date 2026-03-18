/*
 * XREFs of ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1402E13A8
 * Callers:
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1402E0BA8 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140076B14 (-W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140094BEC (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140095C68 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@?$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAAXXZ @ 0x1400B4394 (-ReleaseShared@-$CAutoReleasableSharedCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumenta.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x140229D2C (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1402E1054 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAA-AW4Allocat.c)
 *     ?Free@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1402E12F0 (-Free@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<28672,112>::Free(__int64 *a1, void *a2)
{
  __int64 *i; // rdi
  _QWORD *v5; // rbp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  struct W32_PUSH_LOCK *v10; // rbx
  __int64 *v11; // rcx
  __int64 **v12; // rax
  __int64 v13; // rax
  struct W32_PUSH_LOCK *v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    memset_0(a2, 0, 0x70uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], a2);
    return;
  }
  v14 = (struct W32_PUSH_LOCK *)a1[2];
  v15 = 0;
  W32AcquirePushLockShared(v14);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v14);
      NSInstrumentation::PlatformAbort(3, (ULONG_PTR)a2);
      return;
    }
    v5 = (_QWORD *)i[4];
    v6 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::CheckAllocationStatus(v5, (unsigned __int64)a2);
    if ( !v6 )
      continue;
    v7 = v6 - 1;
    if ( !v7 )
      break;
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        continue;
      v9 = 2;
    }
    else
    {
      v9 = 1;
    }
    NSInstrumentation::PlatformAbort(v9, (ULONG_PTR)a2);
  }
  NSInstrumentation::CSectionBitmapAllocator<28672,112>::Free((__int64)v5, a2);
  if ( i != (__int64 *)*a1 )
  {
    NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v14);
    v10 = (struct W32_PUSH_LOCK *)a1[2];
    W32AcquirePushLockExclusive(v10);
    v11 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i
      || (v12 = (__int64 **)i[1], *v12 != i)
      || (*v12 = v11, v11[1] = (__int64)v12, v13 = *a1, *(__int64 **)(*a1 + 8) != a1) )
    {
      __fastfail(3u);
    }
    *i = v13;
    i[1] = (__int64)a1;
    *(_QWORD *)(v13 + 8) = i;
    *a1 = (__int64)i;
    W32ReleasePushLockExclusive(v10);
  }
  NSInstrumentation::CAutoReleasableSharedCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::ReleaseShared((__int64)&v14);
}
