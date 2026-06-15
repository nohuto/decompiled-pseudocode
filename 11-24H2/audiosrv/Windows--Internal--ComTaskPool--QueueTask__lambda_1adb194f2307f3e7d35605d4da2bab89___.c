/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_1adb194f2307f3e7d35605d4da2bab89___ @ 0x18014F010
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x180075520 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89___::CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89_____lambda_1adb194f2307f3e7d35605d4da2bab89___ @ 0x18014EC48 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89___--CTaskW.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_____ @ 0x18014FA9C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f5f4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_1adb194f2307f3e7d35605d4da2bab89___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  _QWORD *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89___::CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89_____lambda_1adb194f2307f3e7d35605d4da2bab89___(
           v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_____(&v10);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
