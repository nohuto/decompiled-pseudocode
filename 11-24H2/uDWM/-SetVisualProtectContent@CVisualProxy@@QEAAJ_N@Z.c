/*
 * XREFs of ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z @ 0x18009B128
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180063BCC (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008F394 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetVisualProtectContent(CVisualProxy *this, unsigned __int8 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 384LL))(*((_QWORD *)this + 3), a2);
}
