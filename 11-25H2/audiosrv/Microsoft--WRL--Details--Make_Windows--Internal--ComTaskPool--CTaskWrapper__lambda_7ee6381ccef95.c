/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____lambda_7ee6381ccef9550c878152fb933ee002___ @ 0x18014673C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7ee6381ccef9550c878152fb933ee002___ @ 0x180146874 (Windows--Internal--ComTaskPool--QueueTask__lambda_7ee6381ccef9550c878152fb933ee002___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004FEB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18006308C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____ @ 0x180146FA0 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7ee6.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____lambda_7ee6381ccef9550c878152fb933ee002___(
        __int64 *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  volatile int *v6; // rdx
  __int64 v7; // rcx
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    v7 = *a2;
    *a2 = 0LL;
    v5[2] = v7;
    *((_DWORD *)v5 + 6) = *((_DWORD *)a2 + 2);
    *v5 = &off_180176C50;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v6);
    v9 = 0LL;
    *a1 = (__int64)v5;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____(&v9);
  return a1;
}
