/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307_____lambda_76f340d5d82a2ae937276f5837d7f307___ @ 0x180468D54
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_76f340d5d82a2ae937276f5837d7f307___ @ 0x180294174 (Windows--Internal--ComTaskPool--QueueTask__lambda_76f340d5d82a2ae937276f5837d7f307___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18022A2BC (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307_____lambda_76f340d5d82a2ae937276f5837d7f307___ @ 0x1804679FC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___--CTaskW.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307_____lambda_76f340d5d82a2ae937276f5837d7f307___(
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
    v5 = (volatile signed __int32 *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307_____lambda_76f340d5d82a2ae937276f5837d7f307___(
                                      v4,
                                      a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    *a1 = v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v7);
  return a1;
}
