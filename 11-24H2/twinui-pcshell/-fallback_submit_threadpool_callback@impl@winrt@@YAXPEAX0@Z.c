/*
 * XREFs of ?fallback_submit_threadpool_callback@impl@winrt@@YAXPEAX0@Z @ 0x180336950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@Uthreadpool_resume@impl@winrt@@U?$default_delete@Uthreadpool_resume@impl@winrt@@@std@@@std@@QEAA@XZ @ 0x1802CD3F4 (--1-$unique_ptr@Uthreadpool_resume@impl@winrt@@U-$default_delete@Uthreadpool_resume@impl@winrt@@.c)
 *     ?resume_apartment_sync@impl@winrt@@YA_NAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1803380C4 (-resume_apartment_sync@impl@winrt@@YA_NAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-$corouti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::fallback_submit_threadpool_callback(winrt::impl *this, __int64 *a2, void *a3)
{
  __int64 v3; // r8
  __int64 *v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2[2];
  v5 = a2;
  if ( !(unsigned __int8)winrt::impl::resume_apartment_sync(a2, a2[1], v3) )
    (*(void (**)(void))a2[1])();
  std::unique_ptr<winrt::impl::threadpool_resume>::~unique_ptr<winrt::impl::threadpool_resume>(&v5);
}
