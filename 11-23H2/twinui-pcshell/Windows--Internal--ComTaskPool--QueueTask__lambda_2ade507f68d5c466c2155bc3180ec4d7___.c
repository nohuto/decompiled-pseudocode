/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2ade507f68d5c466c2155bc3180ec4d7___ @ 0x1803EEF80
 * Callers:
 *     ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x1803F1A38 (-_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7_____lambda_2ade507f68d5c466c2155bc3180ec4d7___ @ 0x1803EEAEC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2ade507f68d5c.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2ade507f68d5c466c2155bc3180ec4d7___(
        __int64 a1,
        _DWORD *a2)
{
  volatile signed __int32 **v2; // rax
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ebx
  volatile signed __int32 *v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7_____lambda_2ade507f68d5c466c2155bc3180ec4d7___(
         &v8,
         a2);
  v3 = (__int64)*v2;
  *v2 = 0LL;
  v4 = v8;
  v9 = v3;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return v6;
}
