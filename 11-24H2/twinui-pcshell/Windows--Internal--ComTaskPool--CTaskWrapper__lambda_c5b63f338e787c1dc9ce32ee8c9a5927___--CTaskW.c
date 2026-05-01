/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927_____lambda_c5b63f338e787c1dc9ce32ee8c9a5927___ @ 0x180467C58
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___ @ 0x180469624 (Windows--Internal--ComTaskPool--QueueTask__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927_____lambda_c5b63f338e787c1dc9ce32ee8c9a5927___(
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
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = &off_180742A30;
  return a1;
}
