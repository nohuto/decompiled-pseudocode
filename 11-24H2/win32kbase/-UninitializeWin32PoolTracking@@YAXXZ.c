/*
 * XREFs of ?UninitializeWin32PoolTracking@@YAXXZ @ 0x140197FE4
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401980D0 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z @ 0x140198160 (-GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z.c)
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401981D0 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?PoolLeakCaptureLiveDump@@YAX_KPEAK0@Z @ 0x1401BF720 (-PoolLeakCaptureLiveDump@@YAX_KPEAK0@Z.c)
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401D0170 (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

void __fastcall UninitializeWin32PoolTracking(__int64 a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rbx
  unsigned __int64 OutstandingPoolTags; // rax
  unsigned __int64 v3; // rdi
  unsigned int *Pool2; // rax
  unsigned int *v5; // rsi
  NSInstrumentation::CPointerHashTable *v6; // rcx
  struct W32_PUSH_LOCK *v7; // rcx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v1 = (NSInstrumentation::CLeakTrackingAllocator *)(W32GetUserSessionState(a1) + 72288);
  OutstandingPoolTags = NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(v1, 0LL, 0LL, 0LL);
  v3 = OutstandingPoolTags;
  if ( OutstandingPoolTags )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 4 * OutstandingPoolTags, 1953264469LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(v1, Pool2, v3, &v8);
      PoolLeakCaptureLiveDump(v8, v5, v3);
      ExFreePoolWithTag(v5, 0);
    }
  }
  v6 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)v1 + 11);
  if ( v6 )
    NSInstrumentation::CPointerHashTable::Enumerate(
      v6,
      (void (*)(void *, void *, void *))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      v1);
  v7 = (struct W32_PUSH_LOCK *)*((_QWORD *)v1 + 12);
  if ( v7 )
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(v7);
  NSInstrumentation::CLeakTrackingAllocator::Destroy(v1);
}
