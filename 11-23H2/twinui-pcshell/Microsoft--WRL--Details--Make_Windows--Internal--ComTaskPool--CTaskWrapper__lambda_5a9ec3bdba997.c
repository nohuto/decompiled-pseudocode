/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696_____lambda_5a9ec3bdba9975d084688ff203e80696___ @ 0x180205164
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5a9ec3bdba9975d084688ff203e80696___ @ 0x180205830 (Windows--Internal--ComTaskPool--QueueTask__lambda_5a9ec3bdba9975d084688ff203e80696___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696___::CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696_____lambda_5a9ec3bdba9975d084688ff203e80696___ @ 0x180203B8C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696_____lambda_5a9ec3bdba9975d084688ff203e80696___(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rdi
  void *v7; // [rsp+50h] [rbp+18h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v8 = v4;
  if ( v4 )
  {
    v5 = (volatile signed __int32 *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696___::CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696_____lambda_5a9ec3bdba9975d084688ff203e80696___(
                                      v4,
                                      a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v7);
  return a1;
}
