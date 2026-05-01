/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55_____lambda_24ec9e02e088ddd9b3320f3956162b55___ @ 0x18059A934
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___ @ 0x1802B4360 (Windows--Internal--ComTaskPool--QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55_____lambda_24ec9e02e088ddd9b3320f3956162b55___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // r8

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)a1 = &off_180755C38;
  return a1;
}
