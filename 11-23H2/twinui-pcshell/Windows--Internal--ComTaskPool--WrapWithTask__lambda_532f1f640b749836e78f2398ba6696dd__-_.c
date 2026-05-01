/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x1803AB784
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x1803AB484 (Windows--Internal--ComTaskPool--QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__-_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__&__0 @ 0x1803AB500 (Windows--Internal--ComTaskPool--QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__-__0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&___lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x1803AB214 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532f1f640b749.c)
 */

volatile signed __int32 **__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd____(
        volatile signed __int32 **a1,
        __int64 a2)
{
  volatile signed __int32 **v3; // rax
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd______lambda_532f1f640b749836e78f2398ba6696dd____(
         &v7,
         a2);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v7;
  *a1 = v4;
  if ( v5 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v5);
  }
  return a1;
}
