/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___::CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8_____lambda_e40398d42ff5cb66d230c2cd21ebd5c8___ @ 0x1803AE6A4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___ @ 0x1803AF4D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___::CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8_____lambda_e40398d42ff5cb66d230c2cd21ebd5c8___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = (_QWORD *)(a2 + 16);
  if ( a1 + 32 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)a1 = &off_180735DA0;
  return a1;
}
