/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___ @ 0x180059580
 * Callers:
 *     ?Destroy@CFrameApplicationPresentation@@UEAAJXZ @ 0x180059500 (-Destroy@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff_____lambda_2647a080773a9fa4ef6a91f024d7dfff___ @ 0x18005960C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2647a080773a9.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff_____lambda_2647a080773a9fa4ef6a91f024d7dfff___(
                    v9,
                    a4);
  v6 = *v5;
  *v5 = 0LL;
  if ( v9[0] )
  {
    v9[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v7 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
