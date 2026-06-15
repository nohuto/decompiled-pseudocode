/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___::_CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___ @ 0x1800627BC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___::_scalar_deleting_destructor_ @ 0x180062780 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___::_scalar_deleting_destructor_ @ 0x180147AD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___--_scala.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___::_CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002___(
        __int64 a1)
{
  __int64 result; // rax

  result = wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
