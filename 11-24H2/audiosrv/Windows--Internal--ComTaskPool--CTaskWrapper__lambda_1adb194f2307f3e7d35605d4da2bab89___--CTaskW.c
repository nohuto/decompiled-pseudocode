/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89___::CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89_____lambda_1adb194f2307f3e7d35605d4da2bab89___ @ 0x18014EC48
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1adb194f2307f3e7d35605d4da2bab89___ @ 0x18014F010 (Windows--Internal--ComTaskPool--QueueTask__lambda_1adb194f2307f3e7d35605d4da2bab89___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800558CC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89___::CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89_____lambda_1adb194f2307f3e7d35605d4da2bab89___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  v4 = *a2;
  *a2 = 0LL;
  a1[2] = v4;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[3] = a2[1];
  a1[4] = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a1 = &off_180181140;
  return a1;
}
