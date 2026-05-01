/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb_____lambda_630b2476087197e3d624f13f03cc25bb___ @ 0x1803AE410
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_630b2476087197e3d624f13f03cc25bb___ @ 0x1803AF25C (Windows--Internal--ComTaskPool--QueueTask__lambda_630b2476087197e3d624f13f03cc25bb___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb_____lambda_630b2476087197e3d624f13f03cc25bb___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 56) = 7LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_WORD *)(a2 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = v4;
  *(_QWORD *)a1 = &off_180735D10;
  return a1;
}
