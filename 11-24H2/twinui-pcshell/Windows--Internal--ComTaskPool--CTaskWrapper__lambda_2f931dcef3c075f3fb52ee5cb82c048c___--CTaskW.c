/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c_____lambda_2f931dcef3c075f3fb52ee5cb82c048c___ @ 0x1804676B4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2f931dcef3c075f3fb52ee5cb82c048c___ @ 0x18046924C (Windows--Internal--ComTaskPool--QueueTask__lambda_2f931dcef3c075f3fb52ee5cb82c048c___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c_____lambda_2f931dcef3c075f3fb52ee5cb82c048c___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 32);
  *(_BYTE *)(a1 + 52) = *(_BYTE *)(a2 + 36);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)a1 = &off_180742C28;
  return a1;
}
