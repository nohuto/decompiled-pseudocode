/*
 * XREFs of SmmDetermineAdlType @ 0x14003A464
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x140039F40 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmDetermineAdlType(__int64 a1, __int64 a2, char a3)
{
  int v3; // r8d
  int v4; // eax
  int v6; // eax

  if ( (a3 & 1) != 0 )
    return 1LL;
  v3 = a3 & 2;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 92LL) & 1) != 0 )
    return v3 != 0;
  if ( v3 )
  {
    v4 = *(_DWORD *)(a2 + 44) & 0x1E;
    if ( v4 == 10 || v4 == 6 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a2 + 44) & 0x1E;
  if ( v6 == 4 || v6 == 8 || v6 == 2 )
    return 2LL;
  return 0LL;
}
