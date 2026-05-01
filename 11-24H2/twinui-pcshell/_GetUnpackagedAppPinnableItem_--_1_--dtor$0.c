/*
 * XREFs of _GetUnpackagedAppPinnableItem_::_1_::dtor$0 @ 0x1806D7A42
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ @ 0x18028F67C (--1-$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall GetUnpackagedAppPinnableItem_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(
             *(_QWORD **)(a2 + 96),
             a2);
  }
  return result;
}
