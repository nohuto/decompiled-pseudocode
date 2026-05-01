/*
 * XREFs of ?AnimateDismissFrames@TaskViewHost@@AEAAXXZ @ 0x1806A42F0
 * Callers:
 *     ?DismissViewAnimated@TaskViewHost@@UEAAJXZ @ 0x1806A4360 (-DismissViewAnimated@TaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_________lambda_44f6d189e7116b6c3e129de871273415___ @ 0x1806A35F0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_ITaskView.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TaskViewHost::AnimateDismissFrames(TaskViewHost *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 43) < (unsigned __int64)((__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 3) )
    (*(void (__fastcall **)(TaskViewHost *))(*(_QWORD *)this + 40LL))(this);
  if ( *((_DWORD *)this + 188) == 1 )
  {
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_________lambda_44f6d189e7116b6c3e129de871273415___(
      &v2,
      *((__int64 **)this + 40),
      *((__int64 **)this + 41),
      (__int64)this);
    *((_DWORD *)this + 188) = 2;
  }
}
