/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7_____lambda_525ae591d05ed530c7ae5511c000eda7___ @ 0x1803D11B0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_525ae591d05ed530c7ae5511c000eda7___ @ 0x1803D1C78 (Windows--Internal--ComTaskPool--QueueTask__lambda_525ae591d05ed530c7ae5511c000eda7___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7_____lambda_525ae591d05ed530c7ae5511c000eda7___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = (_QWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 8);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a1 + 32 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  *(_BYTE *)(a1 + 40) = *(_BYTE *)(a2 + 24);
  *(_QWORD *)a1 = off_1807D0C68;
  return a1;
}
