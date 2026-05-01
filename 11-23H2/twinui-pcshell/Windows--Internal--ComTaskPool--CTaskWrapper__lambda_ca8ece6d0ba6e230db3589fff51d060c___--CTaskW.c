/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___::CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c_____lambda_ca8ece6d0ba6e230db3589fff51d060c___ @ 0x180203D9C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ca8ece6d0ba6e230db3589fff51d060c___ @ 0x180205970 (Windows--Internal--ComTaskPool--QueueTask__lambda_ca8ece6d0ba6e230db3589fff51d060c___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___::CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c_____lambda_ca8ece6d0ba6e230db3589fff51d060c___(
        _QWORD *a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *((_OWORD *)a1 + 1) = *(_OWORD *)a2;
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 7LL;
  a1[6] = *(_QWORD *)(a2 + 32);
  *a1 = off_1807C6640;
  return a1;
}
