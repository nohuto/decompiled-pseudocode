/*
 * XREFs of ShouldVirtualizeWindowRect @ 0x140167A20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall ShouldVirtualizeWindowRect(__int64 a1, unsigned int a2)
{
  char v4; // bl

  v4 = 0;
  if ( a1 && (*(_BYTE *)(*((_QWORD *)PtiCurrent(a1) + 65) + 224LL) & 0x20) == 0 )
    return (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8)) & 0x1FF) != 0;
  return v4;
}
