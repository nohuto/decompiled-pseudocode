/*
 * XREFs of ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z @ 0x180105C60
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180043250 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800E675C (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetVisualProtectContent(CVisualProxy *this, char a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(unsigned int *)(v2 + 24);
  LOBYTE(v2) = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 368LL))(v4, v5, v2);
}
