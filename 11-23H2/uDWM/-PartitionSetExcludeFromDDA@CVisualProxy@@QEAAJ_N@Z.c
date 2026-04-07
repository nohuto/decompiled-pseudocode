/*
 * XREFs of ?PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z @ 0x180105B40
 * Callers:
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x180047884 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800D546C (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::PartitionSetExcludeFromDDA(CVisualProxy *this, char a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(unsigned int *)(v2 + 24);
  LOBYTE(v2) = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 208LL))(v4, v5, v2);
}
