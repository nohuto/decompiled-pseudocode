/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___::_CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___ @ 0x18010200C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___::_scalar_deleting_destructor_ @ 0x180101FD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___--_scala.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180102060 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180102060.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___::_CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
