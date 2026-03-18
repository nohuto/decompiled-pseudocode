/*
 * XREFs of MiWalkResetCommitPte @ 0x14066AA20
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiLockTransitionLeafPageEx @ 0x14036A520 (MiLockTransitionLeafPageEx.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiWalkResetCommitPte(__int64 a1, _QWORD *a2, int a3)
{
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rbx

  if ( !a3 && (*a2 & 0xC01LL) == 0x800 )
  {
    v4 = MiLockTransitionLeafPageEx((ULONG_PTR)a2, 0LL, 0);
    v5 = v4;
    if ( v4 )
    {
      if ( (*(_BYTE *)(v4 + 34) & 0x10) == 0
        && (*(_DWORD *)(v4 + 16) & 4) == 0
        && !(unsigned __int16)*(_DWORD *)(v4 + 32) )
      {
        MiUnlinkPageFromListEx(v4, 0);
        MiDiscardTransitionPteEx(v5, 0);
        ++**(_QWORD **)(a1 + 184);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return 0LL;
}
