/*
 * XREFs of MiTrimmedEnough @ 0x140388910
 * Callers:
 *     MiTrimWorkingSetVpabCallback @ 0x140388840 (MiTrimWorkingSetVpabCallback.c)
 *     MiTrimWorkingSetTail @ 0x1404830D0 (MiTrimWorkingSetTail.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiTrimmedEnough(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 == *(_QWORD *)(a2 + 8) )
    return 1LL;
  if ( (*(_DWORD *)a2 & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)a2 & 0x8000) == 0 || v2 < 0x100 )
      return *(_QWORD *)(a1 + 144) <= *(_QWORD *)(a2 + 56) - *(_QWORD *)(a2 + 8);
    return 1LL;
  }
  return 0LL;
}
