/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6134154151224943773d07617b636c50___::CTaskWrapper__lambda_6134154151224943773d07617b636c50_____lambda_6134154151224943773d07617b636c50___ @ 0x1804F3B5C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6134154151224943773d07617b636c50___ @ 0x1804F6630 (Windows--Internal--ComTaskPool--QueueTask__lambda_6134154151224943773d07617b636c50___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6134154151224943773d07617b636c50___::CTaskWrapper__lambda_6134154151224943773d07617b636c50_____lambda_6134154151224943773d07617b636c50___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = a2[1];
  LODWORD(v4) = *((_DWORD *)a2 + 4);
  v5 = a2 + 3;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_QWORD *)(a1 + 40) != v5 )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = &off_18074D9A0;
  return a1;
}
