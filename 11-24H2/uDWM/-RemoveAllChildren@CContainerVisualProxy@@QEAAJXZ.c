/*
 * XREFs of ?RemoveAllChildren@CContainerVisualProxy@@QEAAJXZ @ 0x1800258E8
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAXXZ @ 0x1800263F4 (-RemoveAll@VisualCollection@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContainerVisualProxy::RemoveAllChildren(CContainerVisualProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 144LL))(*((_QWORD *)this + 3));
}
