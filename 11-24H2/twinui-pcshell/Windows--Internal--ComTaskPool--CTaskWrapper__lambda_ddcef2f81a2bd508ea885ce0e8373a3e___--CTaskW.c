/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e_____lambda_ddcef2f81a2bd508ea885ce0e8373a3e___ @ 0x18048CC90
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___ @ 0x18048D3F4 (Windows--Internal--ComTaskPool--QueueTask__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e___::CTaskWrapper__lambda_ddcef2f81a2bd508ea885ce0e8373a3e_____lambda_ddcef2f81a2bd508ea885ce0e8373a3e___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = (_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_QWORD *)(a1 + 40) != v5 )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = &off_1807437A0;
  return a1;
}
