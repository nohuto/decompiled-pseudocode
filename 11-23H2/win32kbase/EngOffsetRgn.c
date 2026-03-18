/*
 * XREFs of EngOffsetRgn @ 0x1C016AAB0
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C005BF60 (GreOffsetRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C008A354 (--0EngModeState@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C008A450 (GreGetObjectOwner.c)
 */

INT __stdcall EngOffsetRgn(HANDLE hrgn, INT x, INT y)
{
  INT result; // eax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v7);
  if ( (unsigned int)GreGetObjectOwner((__int64)hrgn, 4) )
    result = 0;
  else
    result = GreOffsetRgn((HRGN)hrgn, x, y);
  if ( v7 )
    *(_DWORD *)(v7 + 328) &= ~0x10u;
  return result;
}
