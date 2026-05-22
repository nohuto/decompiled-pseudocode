/*
 * XREFs of ?OnDisconnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801CDD80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x1801CEE00 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 */

__int64 __fastcall TextInputStateAdapter::OnDisconnected(TextInputStateAdapter *this, struct IMessageProxy *a2)
{
  __int64 result; // rax

  RefPtr<IRemoteTextInputState>::Release((char *)this + 40);
  result = 0LL;
  *((_BYTE *)this + 56) = 0;
  return result;
}
