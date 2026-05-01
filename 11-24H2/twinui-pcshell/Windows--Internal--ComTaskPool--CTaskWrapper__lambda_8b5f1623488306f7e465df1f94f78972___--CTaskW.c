/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___::CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972_____lambda_8b5f1623488306f7e465df1f94f78972___ @ 0x180607588
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8b5f1623488306f7e465df1f94f78972___ @ 0x180607A24 (Windows--Internal--ComTaskPool--QueueTask__lambda_8b5f1623488306f7e465df1f94f78972___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___::CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972_____lambda_8b5f1623488306f7e465df1f94f78972___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 16));
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a1 + 25) = *(_BYTE *)(a2 + 9);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)a1 = &off_180758B48;
  return a1;
}
