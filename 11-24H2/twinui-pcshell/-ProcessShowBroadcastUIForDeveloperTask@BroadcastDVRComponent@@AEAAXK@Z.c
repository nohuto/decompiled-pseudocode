/*
 * XREFs of ?ProcessShowBroadcastUIForDeveloperTask@BroadcastDVRComponent@@AEAAXK@Z @ 0x1803186FC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6da927b23090fe55b5035c21ec83c628___::Run @ 0x180318F70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6da927b23090fe55b5035c21ec83c628___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x180058034 (-ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BroadcastDVRComponent::ProcessShowBroadcastUIForDeveloperTask(BroadcastDVRComponent *this, int a2)
{
  HWND v4; // rcx
  HWND *v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF

  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v5, (_QWORD *)this + 39);
  if ( v5 )
  {
    v4 = *v5;
    if ( *v5 )
    {
      dwProcessId = 0;
      GetWindowThreadProcessId(v4, &dwProcessId);
      if ( dwProcessId == a2 )
        BroadcastDVRComponent::ProcessCommandTask((__int64)this, 9);
    }
  }
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
