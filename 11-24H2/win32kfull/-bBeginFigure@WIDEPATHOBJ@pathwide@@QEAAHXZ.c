/*
 * XREFs of ?bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ @ 0x1400EABEC
 * Callers:
 *     ?bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z @ 0x1400E9838 (-bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x1400EA4E0 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 *     ?bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x1400EB7C0 (-bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ @ 0x1400EAC3C (-bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ.c)
 */

__int64 __fastcall pathwide::WIDEPATHOBJ::bBeginFigure(pathwide::WIDEPATHOBJ *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 1) || *((_DWORD *)this + 30) )
    return 0LL;
  if ( !(unsigned int)pathwide::WIDEPATHOBJ::bGrowPath(this) )
  {
    *((_DWORD *)this + 30) = 1;
    return 0LL;
  }
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) = 1;
  return result;
}
