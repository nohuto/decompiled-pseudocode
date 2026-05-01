/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0ac2a96e912be1478a5c63e50e2d80bb___::CTaskWrapper__lambda_0ac2a96e912be1478a5c63e50e2d80bb_____lambda_0ac2a96e912be1478a5c63e50e2d80bb___ @ 0x180607350
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0ac2a96e912be1478a5c63e50e2d80bb___ @ 0x180607980 (Windows--Internal--ComTaskPool--QueueTask__lambda_0ac2a96e912be1478a5c63e50e2d80bb___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0ac2a96e912be1478a5c63e50e2d80bb___::CTaskWrapper__lambda_0ac2a96e912be1478a5c63e50e2d80bb_____lambda_0ac2a96e912be1478a5c63e50e2d80bb___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 16));
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)a1 = &off_180758B20;
  return a1;
}
