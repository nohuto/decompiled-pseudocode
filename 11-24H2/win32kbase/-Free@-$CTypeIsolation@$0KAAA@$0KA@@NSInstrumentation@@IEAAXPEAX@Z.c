/*
 * XREFs of ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14003ED3C
 * Callers:
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x14001B87C (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400407C8 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 * Callees:
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x14003EEB0 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAA-AW4Allocat.c)
 *     ?Free@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1400400C0 (-Free@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140041080 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x140041134 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<40960,160>::Free(__int64 *a1, void *a2)
{
  struct W32_PUSH_LOCK *v4; // rbp
  __int64 *i; // rdi
  __int64 v6; // r14
  int v7; // eax
  int v8; // eax
  struct W32_PUSH_LOCK *v9; // rbx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx

  if ( !a2 )
    return;
  if ( *((_BYTE *)a1 + 36) )
  {
    memset(a2, 0, 0xA0uLL);
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], a2);
    return;
  }
  v4 = (struct W32_PUSH_LOCK *)a1[2];
  RIMLockShared(v4);
  for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
  {
    if ( i == a1 )
    {
      W32ReleasePushLockShared(v4);
      KeBugCheckEx(0x164u, 0x21uLL, (ULONG_PTR)a2, 0LL, 0LL);
    }
    v6 = i[4];
    v7 = NSInstrumentation::CSectionBitmapAllocator<40960,160>::CheckAllocationStatus(v6, a2);
    if ( !v7 )
      continue;
    v8 = v7 - 1;
    if ( !v8 )
      break;
    v13 = v8 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        continue;
      v14 = 2LL;
    }
    else
    {
      v14 = 1LL;
    }
    NSInstrumentation::PlatformAbort(v14, a2, 0LL);
  }
  NSInstrumentation::CSectionBitmapAllocator<40960,160>::Free(v6, a2);
  if ( i == (__int64 *)*a1 )
  {
    W32ReleasePushLockShared(v4);
  }
  else
  {
    W32ReleasePushLockShared(v4);
    v9 = (struct W32_PUSH_LOCK *)a1[2];
    GreEnterCriticalRegionAndAcquirePushLockExclusive(v9);
    v10 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i
      || (v11 = (__int64 **)i[1], *v11 != i)
      || (*v11 = v10, v10[1] = (__int64)v11, v12 = *a1, *(__int64 **)(*a1 + 8) != a1) )
    {
      __fastfail(3u);
    }
    *i = v12;
    i[1] = (__int64)a1;
    *(_QWORD *)(v12 + 8) = i;
    *a1 = (__int64)i;
    W32ReleasePushLockExclusive(v9);
  }
}
