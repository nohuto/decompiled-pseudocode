/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1_____lambda_8f3900148952faa68610648471a8cff1___ @ 0x18059E624
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8f3900148952faa68610648471a8cff1___ @ 0x18059E690 (Windows--Internal--ComTaskPool--QueueTask__lambda_8f3900148952faa68610648471a8cff1___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1_____lambda_8f3900148952faa68610648471a8cff1___(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *(_DWORD *)(a2 + 8);
  v5 = (_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)(a1 + 32) != v5 )
  {
    *(_QWORD *)(a1 + 32) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_1807EA0C8;
  return a1;
}
