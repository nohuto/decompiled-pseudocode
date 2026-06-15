/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___::_CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___ @ 0x180054FFC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___::_scalar_deleting_destructor_ @ 0x180054FC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___::_scalar_deleting_destructor_ @ 0x180150670 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___--_scala.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___::_CTaskWrapper__lambda_f5f4f75dc837a2f22584ae1b4b94d09e___(
        __int64 a1)
{
  __int64 result; // rax

  result = wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
