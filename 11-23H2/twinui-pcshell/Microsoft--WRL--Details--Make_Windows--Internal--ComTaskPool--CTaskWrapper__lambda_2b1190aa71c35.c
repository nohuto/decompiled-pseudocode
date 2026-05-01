/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4_____lambda_2b1190aa71c35694843c2dd3124163c4___ @ 0x1801E6130
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2b1190aa71c35694843c2dd3124163c4___ @ 0x1801E6630 (Windows--Internal--ComTaskPool--QueueTask__lambda_2b1190aa71c35694843c2dd3124163c4___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4_____lambda_2b1190aa71c35694843c2dd3124163c4___ @ 0x1801E58A8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4_____lambda_2b1190aa71c35694843c2dd3124163c4___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  void *v7; // [rsp+50h] [rbp+18h] BYREF
  void *v8; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x180uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v8 = v4;
  if ( v4 )
  {
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4_____lambda_2b1190aa71c35694843c2dd3124163c4___(
           (__int64)v4,
           a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v7);
  return a1;
}
