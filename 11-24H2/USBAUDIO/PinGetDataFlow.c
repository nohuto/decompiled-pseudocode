/*
 * XREFs of PinGetDataFlow @ 0x14002E39C
 * Callers:
 *     PinBuildDescriptors @ 0x14003F898 (PinBuildDescriptors.c)
 * Callees:
 *     PinGetTerminalUnit @ 0x14003FEB0 (PinGetTerminalUnit.c)
 */

__int64 __fastcall PinGetDataFlow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 TerminalUnit; // rax
  unsigned int v4; // r9d
  _DWORD *v5; // r10

  TerminalUnit = PinGetTerminalUnit(a1, a2, a3, 3221226021LL);
  if ( TerminalUnit )
  {
    *v5 = (*(_DWORD *)(TerminalUnit + 20) != 0) + 1;
    return 0;
  }
  return v4;
}
