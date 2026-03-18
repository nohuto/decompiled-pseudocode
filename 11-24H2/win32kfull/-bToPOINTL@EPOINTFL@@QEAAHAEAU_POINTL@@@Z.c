/*
 * XREFs of ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1400E8BC4
 * Callers:
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400C0454 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 */

__int64 __fastcall EPOINTFL::bToPOINTL(EPOINTFL *this, struct _POINTL *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // r8d
  int v8; // eax

  bFToL(this, a2, 6LL);
  v5 = 0;
  if ( v6 )
  {
    bFToL(v3, &a2->y, v4);
    if ( v8 )
      return (unsigned int)(v7 - 5);
  }
  return v5;
}
