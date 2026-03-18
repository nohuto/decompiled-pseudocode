/*
 * XREFs of ClrFTrueVis @ 0x1C0061890
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ClrFTrueVis @ 0x1C0061890 (ClrFTrueVis.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 * Callees:
 *     DecPaintCount @ 0x1C0061860 (DecPaintCount.c)
 *     ClrFTrueVis @ 0x1C0061890 (ClrFTrueVis.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 */

__int64 __fastcall ClrFTrueVis(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 i; // rbx

  result = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(result + 136);
  if ( v3 || (*(_BYTE *)(result + 17) & 0x10) != 0 )
  {
    DeleteMaybeSpecialRgn(v3);
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 136LL) = 0LL;
    result = DecPaintCount(a1);
  }
  for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
  {
    result = *(_QWORD *)(i + 40);
    if ( (*(_BYTE *)(result + 31) & 0x10) != 0 )
      result = ClrFTrueVis(i);
  }
  return result;
}
