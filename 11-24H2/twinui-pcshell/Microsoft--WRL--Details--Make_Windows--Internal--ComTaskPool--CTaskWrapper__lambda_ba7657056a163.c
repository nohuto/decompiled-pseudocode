/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba7657056a16329b8a6e21579ce82d14_____lambda_ba7657056a16329b8a6e21579ce82d14___ @ 0x1802B2EF8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ba7657056a16329b8a6e21579ce82d14___ @ 0x1801F1428 (Windows--Internal--ComTaskPool--QueueTask__lambda_ba7657056a16329b8a6e21579ce82d14___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ba7657056a16329b8a6e21579ce82d14_____lambda_ba7657056a16329b8a6e21579ce82d14___(
        volatile signed __int32 **a1,
        _OWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    v6 = a2 + 1;
    *((_OWORD *)v5 + 1) = *a2;
    v5[4] = 0LL;
    if ( v5 + 4 != (_QWORD *)(a2 + 1) )
    {
      v5[4] = *v6;
      *v6 = 0LL;
    }
    *v5 = &off_180739EB8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
